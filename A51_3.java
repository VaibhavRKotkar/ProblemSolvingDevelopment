//Accept 2 string and one number & that no of characters from second string same with to first string check.
import java.lang.*;
import java.util.*;

class StringDemo
{
    public boolean StrNCmpX(String src,String dest, int iCount)
    {
       int iCnt = 0;
       char first[]  = src.toCharArray();
       char second[] = dest.toCharArray();

    for(int i = 0; i < iCount; i++)
    {
        if (first[i] == second[i])
        {
            iCnt++;
        }
    }
  if(iCnt == iCount)
  {
    return true;
  }
  else
  {
    return false;
  }
  }
}

class A51_3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first String");
        String str1 = sobj.nextLine();

        System.out.println("Enter Second String");
        String str2 = sobj.nextLine();

        System.out.println("Enter no of characters to concat: ");
        int iNo = sobj.nextInt();

         StringDemo obj = new StringDemo();

         boolean bResult = obj.StrNCmpX(str1,str2,iNo);
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