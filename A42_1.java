// 1. Accept file name from user and open that file

import java.lang.*;
import java.util.*;
import java.awt.Desktop;
import java.io. * ;

public class A42_1
 {
  public static void main(String[] args)
  {
    try
    {

        Scanner sobj = new Scanner(System.in);           //System.in is a standard input stream
        System.out.println("Enter the Name of File to open: ");
        String filename = sobj.nextLine();

      //constructor of file class having file as argument
      File file = new File(filename);

      if (!Desktop.isDesktopSupported())
      //check if Desktop is supported by Platform or not
      {
        System.out.println("not supported");
        return;
      }

      Desktop desktop = Desktop.getDesktop();

          if (file.exists())           //checks file exists or not
          {
            desktop.open(file);    //opens the specified file
            System.out.println("File Opened Successfully.");
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