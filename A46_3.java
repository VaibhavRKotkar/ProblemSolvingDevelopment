//3.Accept matrix from user and Reverse the content of each column.
import java.lang.*;
import java.util.*;

 class MatriX
{
  void ReverseCol(int Arr[][], int iRow, int iCol)
  {
    for(int  i = iRow-1; i >= 0; i--)
    {
        for(int j = 0; j < iCol; j++)
        {
           System.out.print((Arr[i][j])+"  ");
        }
        System.out.println();
     }
  }
}

class A46_3
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
           System.out.print((arr[i][j])+"  ");
        }
        System.out.println();
     }
    MatriX aobj = new MatriX();
    aobj.ReverseCol(arr,irow,icol);
  }
}


