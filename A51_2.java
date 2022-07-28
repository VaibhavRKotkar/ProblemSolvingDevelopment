//Accept 2 string and check whether contents of 2 strings are equal or not.
import java.lang.*;
import java.util.*;

class StringDemo
{
    public boolean StrCmpX(String src,String dest)
    {
       if(src.length() != dest.length())
       {
            return false;
       }
       int iCnt = 0;
       char first[]  = src.toLowerCase().toCharArray();
       char second[] = dest.toLowerCase().toCharArray();

    for(int i = 0; i < first.length; i++)
    {
        if (first[i] == second[i])
        {
            iCnt++;
        }
    }
  if(iCnt == first.length)
  {
    return true;
  }
  else
  {
    return false;
  }
  }
}

class A51_2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first String");
        String str1 = sobj.nextLine();

        System.out.println("Enter Second String");
        String str2 = sobj.nextLine();

         StringDemo obj = new StringDemo();

         boolean bResult = obj.StrCmpX(str1,str2);
         if(bResult == true)
         {
          System.out.println("Both String contents are same");
         }
         else
         {
            System.out.println("String contents are NOT same");
         }

    }
}