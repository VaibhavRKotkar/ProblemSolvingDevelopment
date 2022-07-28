//2. Accept file name from user and open that file and Display the Data on screen

import java.lang.*;
import java.util.*;
import java.awt.Desktop;
import java.io. * ;

public class A42_2
 {
  public static void main(String[] args)
  {
    try
    {

        Scanner sobj = new Scanner(System.in);           //System.in is a standard input stream
        System.out.println("Enter the Name of File: ");
        String filename = sobj.nextLine();

      //constructor of file class having file as argument
      File fobj = new File(filename);

      if (!Desktop.isDesktopSupported())
      //check if Desktop is supported by Platform or not
      {
        System.out.println("not supported");
        return;
      }

      Desktop desktop = Desktop.getDesktop();

          if (fobj.exists())           //checks file exists or not
          {
             System.out.println("File Opened Successfully.");

             //creates a buffer reader input stream
              BufferedReader br = new BufferedReader(new FileReader(fobj));
              System.out.println("The file content is: ");
              int r = 0;
              while ((r = br.read()) != -1)
               {
                System.out.print((char) r);
              }
          }
          else
          {
            System.out.println("File not exists !");
          }

    }
        catch(Exception obj)
         {
          obj.printStackTrace();
        }
  }
}