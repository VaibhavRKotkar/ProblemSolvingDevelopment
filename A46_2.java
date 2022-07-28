
//2.Accept matrix from user and Reverse the content of each row.
import java.lang.*;
import java.util.*;

 class MatriX
{
  void ReverseRow(int Arr[][], int iRow, int iCol)
  {
    for(int  i = 0; i< iRow; i++)
    {
        for(int j = iCol-1; j >=0; j--)
        {
           System.out.print((Arr[i][j])+"  ");
        }
        System.out.println();
     }
  }
}

class A46_2
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
    aobj.ReverseRow(arr,irow,icol);
  }
}


