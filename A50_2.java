//2. Accept N numbers from user and accept one another number & return index of first occurrence of that number.

import java.lang.*;
import java.util.*;

class Number
{
 public int Occurrence(int Brr[], int iNo)
 {
    int iCnt = 0,  i= 0;
    for(i = 0; i < Brr.length; i++)
    {
         if(Brr[i] == iNo)
         {
            iCnt = i;
            break;
         }
         else
         {
            iCnt = -1;
         }
    }
    return iCnt;
 }
}

class A50_2
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

    System.out.println("Enter the Number:");
    int iValue = sobj.nextInt();

    System.out.println("Elements from Array:");
     for(int i = 0; i < iSize; i++)
    {
        System.out.print(Arr[i]+"  ");
    }
    System.out.println();
    Number obj = new Number();
    int iRet = obj.Occurrence(Arr,iValue);
    System.out.println("First occurrence of "+ iValue+ " is at index "+iRet);

}
}