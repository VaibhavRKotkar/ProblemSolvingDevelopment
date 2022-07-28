/*Accept String from user and display pattern.
Enter the String:
Hello
H    #    #    #    #
H    e    #    #    #
H    e    l    #    #
H    e    l    l    #
H    e    l    l    o
H    e    l    l    #
H    e    l    #    #
H    e    #    #    #
H    #    #    #    #
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
            for(int j = 0; j < Arr.length; j++)
            {
               if(j <= i)
               {
                    System.out.print(Arr[j]+"    ");
               }
               else
               {
                    System.out.print("#"+"    ");
               }
            }
            System.out.println();
        }
         for(int i = Arr.length-2; i >= 0; i--)
        {
            for(int j = 0; j < Arr.length; j++)
            {
               if(j <= i)
               {
                    System.out.print(Arr[j]+"    ");
               }
               else
               {
                    System.out.print("#"+"    ");
               }
            }
            System.out.println();
        }
    }
}

class A55_5
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