//1.Accept matrix from user and return addition of diagonal elements.

import java.lang.*;
import java.util.*;

 class Add
{
  int AddDiagonal(int Arr[][], int iRow)
  {
   int iSum = 0;
    for(int  i = 0; i< iRow; i++)
    {
        for(int j = 0; j < iRow; j++)
        {
           if(i == j)
           {
              iSum = iSum + Arr[i][j];
           }
        }
     }
     return iSum;
  }
}


class A45_1
{
public static void main(String arg[])
{
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the number of Rows: ");
    int irow = sobj.nextInt();

    int arr[][] = new int[irow][irow];

    System.out.println("Enter the Elements: ");

    for(int  i =0; i< irow; i++)
    {
        for(int j = 0; j < irow; j++)
        {
           arr[i][j] = sobj.nextInt();
        }
     }
    for(int  i = 0; i< irow; i++)
    {
        for(int j = 0; j < irow; j++)
        {
           System.out.print((arr[i][j])+" ");
        }
        System.out.println();
     }

    Add aobj = new Add();
    int iRet = aobj.AddDiagonal(arr,irow);
    System.out.println("Summation of Diagonal is: "+iRet);

  }
}


