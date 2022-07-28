//1. Accept Directory name from user and display all regular file names from that directory.

import java.io.File;
import java.util.*;
import java.io.IOException;

public class A42_5
 {
  public static void main(String[] args)
  {
    try
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Name of Folder: ");
        String foldername = sobj.nextLine();



        File folderobj = new File(foldername);
        File[] listOfFiles = folderobj.listFiles();

        if(folderobj.exists())
        {

        for (int i = 0; i < listOfFiles.length; i++)
        {
             if (listOfFiles[i].isFile())
             {
                 System.out.println("File :" + listOfFiles[i].getName());
             }
             else if (listOfFiles[i].isDirectory())
             {
                 System.out.println("Directory :" + listOfFiles[i].getName());
            }
        }
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