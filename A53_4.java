/*Accept rows and columns from user and display pattern.
row = 3, col = 5
*    #    *    #
*    #    *    #
*    #    *    #
*    #    *    #
*/

import java.lang.*;
import java.util.*;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        for(int i = 1; i <= iRow; i++)
        {
            for(int j = iCol; j > 0; j--)
            {
                if((j%2)==0)
                {
                     System.out.print("*    ");
                }
                else if((j%2)!=0)
                {
                     System.out.print("#    ");
                }
            }
            System.out.println();
        }
    }
}

class A53_4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows: ");
        int irow = sobj.nextInt();

        System.out.println("Enter the number of columns: ");
        int icol = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(irow,icol);
    }
}