/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package exceptiondemo;

/**
 *
 * @author DELL
 */
import java.io.*;

public class ExceptionDemo {

    public static void main(String[] args) {

        // 1. ClassNotFoundException demo
        try {
            System.out.println("Trying to load a non-existent class...");
            Class.forName("NonExistentClass");
        } catch (ClassNotFoundException e) {
            System.out.println("Caught ClassNotFoundException: " + e.getMessage());
        }

        // 2. EOFException demo
        try {
            System.out.println("\nCreating file and writing one object...");
            FileOutputStream fos = new FileOutputStream("sample.dat");
            ObjectOutputStream oos = new ObjectOutputStream(fos);
            oos.writeInt(42);
            oos.close();

            System.out.println("Reading two integers from file...");
            FileInputStream fis = new FileInputStream("sample.dat");
            ObjectInputStream ois = new ObjectInputStream(fis);

            int first = ois.readInt();
            System.out.println("First int: " + first);

            int second = ois.readInt();  // Will trigger EOFException
            System.out.println("Second int: " + second);

            ois.close();
        } catch (EOFException e) {
            System.out.println("Caught EOFException: Reached end of file unexpectedly.");
        } catch (IOException e) {
            System.out.println("Caught IOException: " + e.getMessage());
        }
    }
}
