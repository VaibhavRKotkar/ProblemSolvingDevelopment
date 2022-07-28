//1. Accept N numbers from user and return difference between summation of even numbers and odd numbers.

import java.lang.*;
import java.util.*;

class ArrayDemo
{
 public int Difference(int Brr[])
 {
    int iEven = 0, iOdd = 0;
    for(int i = 0; i < Brr.length; i++)
    {
         if((Brr[i]%2)==0)
         {
            iEven += Brr[i];
         }
         else if((Brr[i]%2)!=0)
         {
            iOdd += Brr[i];
         }
    }
    return(iEven - iOdd);
 }
}

class A48_1
{
public static void main(String arg[])
{
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the size of Array");
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
        System.out.println(Arr[i]);
    }
    ArrayDemo obj = new ArrayDemo();
    int iRet = obj.Difference(Arr);
    System.out.println("Difference between even and odd is:"+iRet);
}
}