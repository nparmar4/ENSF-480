/*  Lab 5 - Exercise A 
    Filename: InsertionSorter.java
    Author: Shahed Issa and Neha Parmar
 */


 import java.util.ArrayList;


 public class InsertionSorter<E extends Number & Comparable<E>> implements Sorter<E> {
     @Override
     public void sort(ArrayList<Item<E>> arr) {
         
         for(int i = 1; i < arr.size(); i++) {
             Item<E> key = arr.get(i); 
             int j = i-1; 
 
             
             while(j >= 0 && arr.get(j).getItem().compareTo(key.getItem()) > 0) {
                 arr.set(j + 1, arr.get(j));
                 j--;
             }
             arr.set(j + 1, key);
         }
     }
 }