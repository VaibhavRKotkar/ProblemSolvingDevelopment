//3. Accept directory name and create that directory

import java.io.File;
import java.util.Scanner;

public class A43_3
 {
    public static void main(String args[])
     {

      //Using Scanner class to get the path from the user where he wants to create a folder.
   //   System.out.println("Enter the path where you want to create a folder: ");
      Scanner sc = new Scanner(System.in);
    //  String path = sc.next();

      //Using Scanner class to get the folder name from the user
      System.out.println("Enter the name of the desired a directory: ");
      String dir = sc.next();

      //Instantiate the File class
      File f1 = new File(dir);

      //Creating a folder using mkdirs() method
      boolean bFile = f1.mkdirs();
      if(bFile)
      {
         System.out.println("Folder is created successfully");
      }
      else
      {
         System.out.println("Error Found!");
      }
   }
}