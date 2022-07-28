/*Accept String from user and display pattern.
Hello
H    e    l    l    o
H    e    l    l
H    e    l
H    e
H

*/

import java.lang.*;
import java.util.*;

class Pattern
{
    public void Pattern(String str)
    {
        char Arr[] = str.toCharArray();

        for(int i = Arr.length-1; i >= 0; i--)
        {
            for(int j = 0; j <= i; j++)
            {
                     System.out.print(Arr[j]+"    ");
            }
            System.out.println();
        }
    }
}

class A54_2
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