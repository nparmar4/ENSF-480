
import java.util.ArrayList;

public class OneRow_Observer implements Observer {
    public OneRow_Observer(Subject subject) {
        subject.registerObserver(this);
    }

    @Override
    public void update(ArrayList<Double> data) {
        System.out.println("\nNotification to One-Row Observer: Data Changed:");
        for (Double value : data) {
            System.out.print(value + " ");
        }
        System.out.println();
    }
}

