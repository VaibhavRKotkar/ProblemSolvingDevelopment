/*Accept Rows and Columns from user and display pattern.
Enter the Number of Rows/columns of Square Matrix:
5
1    2    3    4    5
1    2              5
1         3         5
1              4    5
1    2    3    4    5
*/

import java.lang.*;
import java.util.*;

class Pattern
{
    public void Pattern(int iRow)
    {
        for(int i = 1; i <= iRow; i++)
        {
            for(int j = 1; j <=iRow; j++)
            {
               if(j == i)
               {
                    System.out.print(j+"    ");
               }
               else if(j == iRow)
               {
                    System.out.print(j+"    ");
               }
                else if(i == iRow)
               {
                    System.out.print(j+"    ");
               }
               else if(j == 1)
               {
                    System.out.print(j+"    ");
               }
                else if(i == 1)
               {
                    System.out.print(j+"    ");
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

class A56_5
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