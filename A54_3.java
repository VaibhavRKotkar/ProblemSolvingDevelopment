/*Accept String from user and display pattern.
Hello
H
H    e
H    e    l
H    e    l    l
H    e    l    l    o

*/

import java.lang.*;
import java.util.*;

class Pattern
{
    public void Pattern(String str)
    {
        char Arr[] = str.toCharArray();

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                     System.out.print(Arr[j]+"    ");
            }
            System.out.println();
        }
    }
}

class A54_3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String: ");
        String str = sobj.nextLine();

        Pattern pobj = new Pattern();
        pobj.Pattern(str);
    }
}