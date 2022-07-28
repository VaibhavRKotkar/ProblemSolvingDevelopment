//3. Accept N numbers from user and display 5 divisible number which are even.

import java.lang.*;
import java.util.*;

class ArrayDemo
{
 public void Display(int Brr[])
 {
    int iEven = 0, iOdd = 0;
      System.out.println("Numbers divisible by 5 & are Even :");
    for(int i = 0; i < Brr.length; i++)
    {
         if((Brr[i]%5)==0 && (Brr[i]%2)==0)
         {
            System.out.println(Brr[i]);
         }
    }
 }
}

class A48_3
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
     obj.Display(Arr);
}
}