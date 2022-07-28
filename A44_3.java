//3. Accept Directory name  and new file name from user and write file data into new file

import java.io.File;
import java.util.*;
import java.io.IOException;
import java.lang.*;
import java.util.*;
import java.awt.Desktop;
import java.io.* ;

public class A44_3
 {
  public static void main(String[] args)
  {
    try
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Name of Folder: ");
        String foldername = sobj.nextLine();

        System.out.println("Enter the Name of File to create: ");
        String filename = sobj.nextLine();

        File fobj = new File(filename);

             boolean bRet = fobj.createNewFile();
              if (bRet)
               {
                System.out.println("File has been created successfully ");
              }
              else
               {
                System.out.println("File already present.");
                return;
              }

        File folderobj = new File(foldername);
        File[] listOfFiles = folderobj.listFiles();

        if(folderobj.exists())
        {

           FileOutputStream out = new FileOutputStream(filename);

        for (int i = 0; i < listOfFiles.length; i++)
        {

             if (listOfFiles[i].isFile())
             {
              FileInputStream in = new FileInputStream(listOfFiles[i]);
              int r = 0;
              while ((r = in.read()) != -1)
              {
                    out.write(r);
              }

           }
        }
                System.out.println("Data Successfully written.");
                 Desktop desktop = Desktop.getDesktop();
                 desktop.open(fobj);
        }
        else
        {
            System.out.println("Folder not exists !");
        }
  }
          catch(Exception obj)
             {
                 obj.printStackTrace();
             }
      }
}