/*Accept Rows and Columns from user and display pattern.
Enter the Number of Rows:
4
Enter the Number of Columns:
4
*    *    *    #
*    *    #    *
*    #    *    *
#    *    *    *
*/

import java.lang.*;
import java.util.*;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        for(int i = 1; i <= iRow; i++)
        {
            for(int j = iCol; j >= 1; j--)
            {
               if(j == i)
               {
                    System.out.print("#"+"    ");
               }
               else
               {
                    System.out.print("*"+"    ");
               }
            }
            System.out.println();
        }
    }
}

class A56_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number of Rows: ");
        int irow = sobj.nextInt();

        System.out.println("Enter the Number of Columns: ");
        int icol = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(irow,icol);
    }
}