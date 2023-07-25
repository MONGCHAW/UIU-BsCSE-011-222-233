/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package testlab6;

import java.io.File;
import java.io.PrintWriter;
import java.util.Scanner;

/**
 *
 * @author student
 */
public class TestLab6 {

    /**
     * @param args the command line arguments
     */
public static void main(String[] args) {
File file = new File(
                    "C:\\Users\\student\\Desktop\\Lab6\\src\\lab6\\b.txt");
          try {
               PrintWriter out = new PrintWriter(file);
               Scanner sc = new Scanner(System.in);

               out.println(10);
               out.println("Hello");

               out.println(sc.next());
               out.println(sc.nextInt());

               out.close();
               sc.close();
          } catch (Exception e) {
               System.out.println("Error");
               e.printStackTrace();
          }
}
