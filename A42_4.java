//4. Accept file name from user and create new file of that name if it not existing

import java.io.File;
import java.util.*;
import java.io.IOException;

public class A42_4
 {
  public static void main(String[] args)
  {
    try
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Name of File to create: ");
        String filename = sobj.nextLine();

      File fobj = new File(filename);

      boolean bRet = fobj.createNewFile();
      if (bRet)
       {
        System.out.println("File has been created successfully at the specified location");
      }
      else
       {
        System.out.println("File already present at the specified location");
      }
    }
    catch(IOException obj)
    {
      System.out.println("Exception Occurred:");
      obj.printStackTrace();
    }
  }
}