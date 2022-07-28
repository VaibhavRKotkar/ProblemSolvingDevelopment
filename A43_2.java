//2. Accept file name and check whether file is regular file or not.

import java.io.File;
import java.io.IOException;
import java.util.*;

public class A43_2
{

    public static void main(String[] args) throws IOException
    {
       Scanner sc = new Scanner(System.in);
      System.out.print("Provide file name :");
      String srcfile = sc.next();

        File file = new File(srcfile);

        if (file.isFile())
        {
            System.out.println("File is a regular file.");
        }
         else
          {
            System.out.println("File denoted by this pathname not exists or is not a regular file.");
        }
    }
}