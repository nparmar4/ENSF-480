
import java.util.ArrayList;

public class DoubleArrayListSubject implements Subject {
    private ArrayList<Double> data;
    private ArrayList<Observer> observers;

    public DoubleArrayListSubject() {
        data = new ArrayList<>();
        observers = new ArrayList<>();
    }

    public void addData(Double value) {
        data.add(value);
        notifyAllObservers();
    }

    public void setData(Double value, int index) {
        if (index >= 0 && index < data.size()) {
            data.set(index, value);
            notifyAllObservers();
        }
    }

    public void populate(double[] array) {
        for (double value : array) {
            data.add(value);
        }
        notifyAllObservers();
    }

    @Override
    public void registerObserver(Observer o) {
        observers.add(o);
        o.update(data);
    }

    @Override
    public void remove(Observer o) {
        observers.remove(o);
    }

    @Override
    public void notifyAllObservers() {
        for (Observer o : observers) {
            o.update(data);
        }
    }


    public void display() {
        if (data.isEmpty()) {
            System.out.println("Empty List ...");
        } else {
            for (Double value : data) {
                System.out.print(value + " ");
            }
            System.out.println();
        }
    }
}

