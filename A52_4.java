/*Accept rows and columns from user and display pattern.
Row = 4, Col = 5
4    4    4    4    4
3    3    3    3    3
2    2    2    2    2
1    1    1    1    1
*/

import java.lang.*;
import java.util.*;

class Pattern
{
    public void Pattern(int iRow, int iCol)
    {
        for(int i = iRow; i > 0; i--)
        {
            for(int j = 0; j < iCol; j++)
            {
               System.out.print(i+"    ");
            }
            System.out.println();
        }
    }
}

class A52_4
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