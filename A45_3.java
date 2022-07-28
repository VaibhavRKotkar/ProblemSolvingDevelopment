//3. Accept matrix from user  and return Largest number from both the diagonal.

import java.lang.*;
import java.util.*;

 class Add
{
int MAxCount(int Arr[][], int iRow)
  {
   int iMax = 0;

    for(int  i =0; i< iRow; i++)
    {
        for(int j = 0; j < iRow; j++)
        {
           if(i == j)
           {
              if(Arr[i][j]>iMax)
               {
                  iMax = Arr[i][j];
               }
           }
           if(i == iRow - j - 1)
           {
              if(Arr[i][j]>iMax)
               {
                  iMax = Arr[i][j];
               }
           }
        }
     }

    return iMax;
  }
}


class A45_3
{
public static void main(String arg[])
{
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the Square Matrix Length: ");
    int isqr = sobj.nextInt();

    int arr[][] = new int[isqr][isqr];

    System.out.println("Enter the Elements: ");

    for(int  i =0; i< isqr; i++)
    {
        for(int j = 0; j < isqr; j++)
        {
           arr[i][j] = sobj.nextInt();
        }
     }
    for(int  i = 0; i< isqr; i++)
    {
        for(int j = 0; j < isqr; j++)
        {
           System.out.print((arr[i][j])+" ");
        }
        System.out.println();
     }

      Add aobj = new Add();
      int iRet = aobj.MAxCount(arr,isqr);
      System.out.println("Maximum Number in Matrix Diagonals : "+iRet);

  }
}


