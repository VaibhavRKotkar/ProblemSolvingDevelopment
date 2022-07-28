//4. Accept N numbers from user and accept  number range & display numbers from that range.

import java.lang.*;
import java.util.*;

class Number
{
 public void Display(int Brr[], int iNo1, int iNo2)
 {
    int i= 0;
    System.out.println("Elements in the range are: ");
    for(i =  0; i < Brr.length; i++)
    {
         if(Brr[i] > iNo1 && Brr[i] <= iNo2)
         {
             System.out.println(Brr[i]);
         }
    }
 }
}

class A50_4
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

    System.out.println("Enter the start range Number:");
    int iValue1 = sobj.nextInt();

    System.out.println("Enter the end range Number:");
    int iValue2 = sobj.nextInt();

    System.out.println("Elements from Array:");
     for(int i = 0; i < iSize; i++)
    {
        System.out.print(Arr[i]+"  ");
    }
    System.out.println();
    Number obj = new Number();
    obj.Display(Arr,iValue1,iValue2);
}
}