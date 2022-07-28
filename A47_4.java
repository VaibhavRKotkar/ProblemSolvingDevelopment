// Accept String from user and check vowel

import java.lang.*;
import java.util.*;

class StringX
{
    public boolean Count(String str)
    {
        int iCnt = 0;
        char ch[] = str.toCharArray();

        for(int i = 0;i < ch.length; i++)
        {
            if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U' )
            {
                return true;
            }
        }
        return false;
    }
}

class A47_4
{
public static void main(String srg[])
{
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the String: ");
    String str1 = sobj.nextLine();

    StringX sxobj = new StringX();
    boolean bret = sxobj.Count(str1);

    if(bret == true)
    {
    System.out.println("Vowels are Present");
    }
    else
    {
      System.out.println("Vowels are not present");
    }
}
}