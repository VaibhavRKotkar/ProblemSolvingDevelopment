//2. Accept matrix from user & one number and return frequency of that number.

import java.lang.*;
import java.util.*;

 class Add
{
  int AddFrequency(int Arr[][], int iRow, int iCol, int iNo)
  {
   int iFreq = 0;
    for(int  i = 0; i< iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
           if(Arr[i][j] == iNo)
           {
              iFreq++;
           }
        }
     }
     return  iFreq;
  }
}


class A45_2
{
public static void main(String arg[])
{
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the number of Rows: ");
    int irow = sobj.nextInt();

    System.out.println("Enter the number of columns: ");
    int icol= sobj.nextInt();

    System.out.println("Enter the Frequency Reference number : ");
    int ino= sobj.nextInt();

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
    int iRet = aobj.AddFrequency(arr,irow,icol, ino);
    System.out.println("Number occurs in Matrix : "+iRet+" times");

  }
}


