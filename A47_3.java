// Accept String from user and return difference between capital & Small characters

import java.lang.*;
import java.util.*;

class StringX
{
    public int CountDiff(String str)
    {
        int iCnt1 = 0,iCnt2 = 0;
        char ch[] = str.toCharArray();

        for(int i = 0;i < ch.length; i++)
        {
            if((ch[i] >= 'A') && (ch[i]<='Z'))
            {
                iCnt1++;
            }
            if((ch[i] >= 'a') && (ch[i]<='z'))
            {
                iCnt2++;
            }
        }
       int iCnt3 = (iCnt1 - iCnt2);
        if(iCnt3 <0)
        {
            iCnt3 = -iCnt3;
        }
        return iCnt3;
    }
}

class A47_3
{
public static void main(String srg[])
{
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the String: ");
    String str1 = sobj.nextLine();

    StringX sxobj = new StringX();
    int iRet = sxobj.CountDiff(str1);
    System.out.println("Difference is: "+iRet);
}
}