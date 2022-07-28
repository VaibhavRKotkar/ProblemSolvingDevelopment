/*Accept Rows and Columns from user and display pattern.
Enter the Number of Rows/columns of Square Matrix:
6
*    *    *    *    *    *
*    #    #    #    *    *
*    #    #    *    $    *
*    #    *    $    $    *
*    *    $    $    $    *
*    *    *    *    *    *
*/

import java.lang.*;
import java.util.*;

class Pattern
{
    public void Pattern(int iRow)
    {
        for(int i = 1; i <= iRow; i++)
        {
            for(int j = iRow; j >= 1; j--)
            {
               if(j == i)
               {
                    System.out.print("*"+"    ");
               }
               else if(j == iRow)
               {
                    System.out.print("*"+"    ");
               }
                else if(i == iRow)
               {
                    System.out.print("*"+"    ");
               }
               else if(j == 1)
               {
                    System.out.print("*"+"    ");
               }
                else if(j < i)
               {
                    System.out.print("$"+"    ");
               }
                else if(i == 1)
               {
                    System.out.print("*"+"    ");
               }
                else if(i < j)
               {
                    System.out.print("#"+"    ");
               }
               else
               {
                    System.out.print(" "+"    ");
               }
            }
            System.out.println();
        }
    }
}

class A56_4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Rows/columns of Square Matrix: ");
        int irow = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(irow);
    }
}