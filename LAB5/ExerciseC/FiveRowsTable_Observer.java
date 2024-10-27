import java.util.ArrayList;

public class FiveRowsTable_Observer implements Observer {
    private ArrayList<Double> data;

    public FiveRowsTable_Observer(Subject subject) {
        subject.registerObserver(this);
        data = new ArrayList<>();
    }

    @Override
    public void update(ArrayList<Double> newData) {
        this.data = new ArrayList<>(newData);
        System.out.println("\nNotification to Five-Rows Table Observer: Data Changed:");
        display();
    }

    public void display() {
        if (data.isEmpty()) {
            System.out.println("Empty List ...");
        } else {
            int colNum = data.size() / 5;
            if (data.size() % 5 != 0) {
                colNum++; 
            }
            for (int i = 0; i < 5; i++) {  
                for (int n = 0; n < colNum; n++) { 
                    int index = n * 5 + i;
                    if (index < data.size()) {
                        System.out.print(data.get(index) + "\t");
                    }
                }
                System.out.println();
            }
            System.out.println();
        }
    }
}
