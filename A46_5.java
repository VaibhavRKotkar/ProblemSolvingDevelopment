//4.Accept matrix from user and check the Sparse matrix.

import java.lang.*;
import java.util.*;

 class MatriX
{
  boolean ChkSoarse(int Arr[][], int iRow, int iCol)
  {
    int iCnt = 0;
    for(int  i = 0; i <iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
           if(Arr[i][j]==0)
           {
             iCnt++;
           }
        }
     }
     if(iCnt > (iRow*iCol)/2)
     {
        return true;
     }
     else
     {
        return false;
     }
  }
}

class A46_5
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

     boolean bRet = aobj.ChkSoarse(arr,irow,icol);

    if(bRet == true)
    {
        System.out.println(" Matrix is Sparse Matrix");
    }
    else
    {
        System.out.println(" Matrix is NOT Sparse Matrix");
    }
  }
}


