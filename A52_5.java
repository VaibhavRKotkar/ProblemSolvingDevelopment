/*Accept rows and columns from user and display pattern.
Row = 3, Col = 4
1    2    3    4
5    6    7    8
9    10    11    12
*/

import java.lang.*;
import java.util.*;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
       int iNo = 1;
       for(int i = iRow; i > 0; i--)
        {
            for(int j = 0; j < iCol; j++)
            {
               System.out.print(iNo+"    ");
               iNo++;
            }
            System.out.println();
        }
    }
}

class A52_5
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