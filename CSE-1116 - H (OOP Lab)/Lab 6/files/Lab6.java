import java.io.*;
import java.util.Scanner;
import java.io.File;

public class Lab6 {
     public static void part1Scanner(String[] args) {
          Scanner sc = new Scanner(System.in);
          int a = sc.nextInt();
          System.out.println(a);
          sc.close();
     }

     public static void fileReader(String[] args) {
          File file = new File(
                    "D:\\Student\\011 222 233\\Github\\UIU-BsCSE-011_222_233_-1st-2nd-\\CSE-1116 - H (OOP Lab)\\Lab 6\\files\\a.txt");
          try {
               Scanner sc = new Scanner(file);
               while (sc.hasNextLine()) {
                    int a = sc.nextInt();
                    // String a = sc.nextLine();

                    System.out.println(a);
               }
               sc.close();
          } catch (Exception e) {
               System.out.println("Error");
               e.printStackTrace();
          }
     }

     public static void main(String[] args) {
          File file = new File(
                    "D:\\Student\\011 222 233\\Github\\UIU-BsCSE-011_222_233_-1st-2nd-\\CSE-1116 - H (OOP Lab)\\Lab 6\\files\\n.txt");
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

//     public static void main(String[] args) {
//          part2_File_Write(args);
//     }
}
