/*  ENSF 480 Fall 2024
    Authors: Neha Parmar, Shahed Issa
 */
import java.util.ArrayList;

public class ThreeColumnTable_Observer implements Observer {
    private ArrayList<Double> data;

    public ThreeColumnTable_Observer(Subject subject) {
        subject.registerObserver(this);
        data = new ArrayList<>();
    }

    @Override
    public void update(ArrayList<Double> newData) {
        this.data = new ArrayList<>(newData);  
        System.out.println("\nNotification to Three-Column Table Observer: Data Changed:");
        display();
    }

    public void display() {
        if (data.isEmpty()) {
            System.out.println("Empty List ...");
        } else {
            int counter = 0;
            for (Double d : data) {
                System.out.print(d + "\t");
                counter++;
                if (counter == 3) {
                    System.out.println(); 
                    counter = 0;
                }
            }
            if (counter != 0) {  
                System.out.println();
            }
        }
    }
}
