import java.lang.*;
import java.util.*;
import java.awt.Desktop;
import java.io. * ;


public class A42_21
{
  public static void main(String args[])
  {
    try
     {

        Scanner sobj = new Scanner(System.in);           //System.in is a standard input stream
        System.out.println("Enter the Name of File: ");
        String filename = sobj.nextLine();

      //constructor of the File class having file as an argument
      FileReader fr = new FileReader(filename);

      System.out.println("\nThe file content is: ");
      int r = 0;
      while ((r = fr.read()) != -1)
       {
        System.out.print((char) r); //prints the content of the file
      }
    }
    catch(Exception obj)
    {
      obj.printStackTrace();
    }
  }
}