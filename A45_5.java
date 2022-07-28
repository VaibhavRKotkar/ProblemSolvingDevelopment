//5.Accept matrix from user & swap the content of consecutive rows.

import java.lang.*;
import java.util.*;

 class Add
{
 void SwapRows(int Arr[][], int iRow, int iCol)
  {
    int i = 0, j = 0, swap[] ;
    try
{

    for(i =0; i< iRow; i++)
    {
           swap = Arr[i];
           Arr[i] = Arr[i+1];
           Arr[i+1] = swap;
           i++;
     }
    System.out.println("Interchanged Row Matrix: ");
    for(i =0; i< iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
           System.out.print((Arr[i][j])+" ");
        }
             System.out.println();
     }
  }
        catch(ArrayIndexOutOfBoundsException e)
         {
             System.out.println("There is no sufficient consecutive rows to interchange");
               System.out.println("Please enter Even number of rows");
         }
}
}


class A45_5
{
public static void main(String arg[])
{
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the number of Rows: ");
    int irow = sobj.nextInt();

    System.out.println("Enter the number of columns: ");
    int icol= sobj.nextInt();

    int arr[][] = new int[irow][icol];

    System.out.println("Enter the Elements: ");

    for(int  i =0; i< irow; i++)
    {
        for(int j = 0; j < icol; j++)
        {
           arr[i][j] = sobj.nextInt();
        }
     }
    for(int  i = 0; i< irow; i++)
    {
        for(int j = 0; j < icol; j++)
        {
           System.out.print((arr[i][j])+" ");
        }
        System.out.println();
     }
    Add aobj = new Add();
    aobj.SwapRows(arr,irow,icol);
  }
}


