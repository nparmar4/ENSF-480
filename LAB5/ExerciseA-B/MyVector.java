/*  Lab 5 - Exercise A
    Filename: MyVector.java
    Author: Shahed Issa and Neha Parmar
 */

 import java.util.ArrayList;

 public class MyVector<E extends Number & Comparable<E>> {
     private ArrayList<Item<E>> storageM;
     private Sorter<E> sorter;
 
     public MyVector(final int n) {
         storageM = new ArrayList<Item<E>>(n);
     }
 
     public MyVector(final ArrayList<Item<E>> arr) {
         storageM = new ArrayList<>(arr);
     }
 
     public void add(final Item<E> value) {
         storageM.add(value);
     }
 
     public void setSortStrategy(final Sorter <E> s) {
         sorter = s;
     }
 
     public void performSort() {
         sorter.sort(storageM);
     }
 
     public void display() {
         for (Item<E> item : storageM) {
             System.out.print(item.getItem() + "\t");
         }
     }
 }