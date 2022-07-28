//4.Accept matrix from user and check the identity matrix.
import java.lang.*;
import java.util.*;

 class MatriX
{
  boolean ChkIdentity(int Arr[][], int iRow)
  {
    int i=0, j=0 ;
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iRow; j++)
        {
            if(((i == j && Arr[i][j] != 1)) && (i != j && Arr[i][j] != 0))
            {
                  return false;
            }
        }
     }
     return true;
}
}

class A46_4
{
public static void main(String arg[])
{
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the number of Rows/ column for Square Matrix: ");
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
    for(int i = 0; i< irow; i++)
    {
        for(int j = 0; j < irow; j++)
        {
           System.out.print((arr[i][j])+"  ");
        }
        System.out.println();
     }

    MatriX aobj = new MatriX();
    boolean bRet = aobj.ChkIdentity(arr,irow);

    if(bRet == true)
    {
        System.out.println(" Matrix is Identity");
    }
    else
    {
        System.out.println(" Matrix is NOT Identity");
    }
  }
}


