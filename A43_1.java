//Accept two file name from user and copy one file data into another file.
import java.io.*;
import java.util.*;

class A43_1
{
 public static void main(String arg[]) throws Exception
 {
      Scanner sc = new Scanner(System.in);
      System.out.print("Provide source file name :");
      String sfile = sc.next();
      System.out.print("Provide file name to create and copy data:");
      String dfile = sc.next();

      File fobj = new File(dfile);
      boolean bRet = fobj.createNewFile();
      if (bRet)
       {
        System.out.println("File has been created successfully at the specified location");
      }
      else
       {
        System.out.println("File already present at the specified location");
        return;
      }

      FileReader fin = new FileReader(sfile);
      FileWriter fout = new FileWriter(dfile, true);
      int c;
          while ((c = fin.read()) != -1)
          {
           fout.write(c);
          }

      System.out.println("Copy finish...");
      fin.close();
      fout.close();

 }
}