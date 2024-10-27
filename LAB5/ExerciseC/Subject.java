/*  ENSF 480 Fall 2024
    Authors: Neha Parmar, Shahed Issa
 */
public interface Subject {
    public void registerObserver(Observer o);
    public void remove(Observer o);
    public void notifyAllObservers();
}