//1.Accept matrix from user and Display Transpose matrix.

import java.lang.*;
import java.util.*;

 class MatrixX
{
  void Transpose(int Arr[][], int iRow, int iCol)
  {
    for(int j = 0; j < iCol; j++)
    {
        for(int i = 0; i < iRow; i++)
        {
           System.out.print((Arr[i][j])+"   ");
        }
        System.out.println();
     }
  }
}

class A46_1
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
           System.out.print((arr[i][j])+"   ");
        }
        System.out.println();
     }

    MatrixX aobj = new MatrixX();
    aobj.Transpose(arr,irow,icol);
  }
}


