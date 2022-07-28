//4.Accept matrix from user and return Addition of columns.

import java.lang.*;
import java.util.*;

 class Add
{
  void AddColumn(int Arr[][], int iRow, int iCol)
  {
   int iSum = 0;
    for(int  j = 0; j < iCol; j++)
    {
        for(int i = 0; i < iRow; i++)
        {
           iSum += Arr[i][j];
        }
        System.out.print("("+iSum+")"+"  ");
        iSum = 0;
     }
  }
}

class A45_4
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

    Add aobj = new Add();
    aobj.AddColumn(arr,irow,icol);
  }
}


