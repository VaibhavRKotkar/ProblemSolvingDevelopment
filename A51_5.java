//Accept  string and check palindrome.
import java.lang.*;
import java.util.*;

class StringDemo
{
    public boolean StrCmpX(String src)
    {
       char first[]  = src.toLowerCase().toCharArray();
       String iRev = "";

      for ( int i = (src.length() - 1); i >= 0; i-- )
      {
         iRev = iRev + src.charAt(i);
      }
  if(src.equals(iRev))
  {
    return true;
  }
  else
  {
    return false;
  }
  }
}

class A51_5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first String");
        String str1 = sobj.nextLine();

         StringDemo obj = new StringDemo();

         boolean bResult = obj.StrCmpX(str1);
         if(bResult == true)
         {
          System.out.println("String is Palindrome");
         }
         else
         {
            System.out.println("String is NOT Palindrome");
         }

    }
}