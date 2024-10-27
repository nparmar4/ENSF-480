/*  Lab 5 - Exercise A
    Filename: Sorter.java
    Author: Shahed Issa and Neha Parmar
 */

 import java.util.ArrayList;

 public interface Sorter <E extends Number & Comparable<E>> {
     public void sort(ArrayList<Item<E>> arr); 
 }