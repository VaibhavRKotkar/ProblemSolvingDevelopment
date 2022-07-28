// Accept String from user and count Small characters

import java.lang.*;
import java.util.*;

class StringX
{
    public int Count(String str)
    {
        int iCnt = 0;
        char ch[] = str.toCharArray();

        for(int i = 0;i < ch.length; i++)
        {
            if((ch[i] >= 'a') && (ch[i]<='z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}

class A47_2
{
public static void main(String srg[])
{
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the String: ");
    String str1 = sobj.nextLine();

    StringX sxobj = new StringX();
    int iRet = sxobj.Count(str1);
    System.out.println("small characters are: "+iRet);
}
}