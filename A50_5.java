//5. Accept N numbers from user and return product of all odd elements.

import java.lang.*;
import java.util.*;

class Number
{
 public int Occurrence(int Brr[])
 {
    int iProd = 1,  i= 0;
    for(i = 0; i < Brr.length; i++)
    {
         if(Brr[i]%2 != 0)
         {
            iProd *= Brr[i];
         }

    }
    return iProd;
 }
}

class A50_5
{
public static void main(String arg[])
{
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the Size of Array: ");
    int iSize = sobj.nextInt();

    System.out.println("Enter the elements of Array");

    int Arr[] = new int[iSize];

    for(int i = 0; i < iSize; i++)
    {
         Arr[i] = sobj.nextInt();
    }

    System.out.println("Elements from Array:");
     for(int i = 0; i < iSize; i++)
    {
        System.out.print(Arr[i]+"  ");
    }
    System.out.println();
    Number obj = new Number();
    int iRet = obj.Occurrence(Arr);
    System.out.println("product of all ODD numbers are: "+iRet);

}
}