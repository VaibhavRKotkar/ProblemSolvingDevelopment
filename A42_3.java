//3. Accept file name from user and open that file and write data at the end of file

import java.lang.*;
import java.util.*;
import java.awt.Desktop;
import java.io.* ;

public class A42_3
 {
  public static void main(String[] args)
  {
    try
    {

        Scanner sobj = new Scanner(System.in);
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
              System.out.println("Enter the Data: ");
              String str = sobj.nextLine();

             BufferedWriter out = new BufferedWriter(new FileWriter(filename, true));

            // Writing on output stream
            out.write(str);
            // Closing the connection
            out.close();
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