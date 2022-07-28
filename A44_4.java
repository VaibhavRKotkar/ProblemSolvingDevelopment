//4. Accept Directory name  and new file name from user and write file name and file data into new file.

import java.io.File;
import java.util.*;
import java.io.IOException;
import java.lang.*;
import java.awt.Desktop;
import java.io.* ;


public class A44_4
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
              }

        File folderobj = new File(foldername);
        File[] listOfFiles = folderobj.listFiles();

        if(folderobj.exists())
        {

        for (int i = 0; i < listOfFiles.length; i++)
        {
             if (listOfFiles[i].isFile())
             {
                FileInputStream in = new FileInputStream(listOfFiles[i]);
                 String str = listOfFiles[i].getName();
                 BufferedWriter out = new BufferedWriter(new FileWriter(filename, true));
                 out.write(" File Name: ");
                 out.write(str);
                 out.write(", File Data: ");
                  int r = 0;
              while ((r = in.read()) != -1)
              {
                    out.write(r);
              }
                 out.write("\n");
                 out.close();
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