// Accept String from user and reverse the string

import java.lang.*;
import java.util.*;

class StringX
{
    public void Reverse(String str)
    {
        int iCnt = 0;

        char ch[] = str.toCharArray();
        int start = 0, end = 0;

             end = ch.length-1;

       for(start = 0; start < end; start++, end--)
        {
           char temp = ch[start];
           ch[start] = ch[end];
           ch[end] = temp;
        }
          System.out.print(ch);
    }
}

class A47_5
{
public static void main(String srg[])
{
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the String: ");
    String str1 = sobj.nextLine();

    StringX sxobj = new StringX();
    sxobj.Reverse(str1);
}
}