/*Accept rows and columns from user and display pattern.
*   *   *   *
*   *   *   *
*   *   *   *
*   *   *   *
*/

import java.lang.*;
import java.util.*;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                System.out.print("*"+"   ");
            }
            System.out.println();
        }
    }
}

class A53_1
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