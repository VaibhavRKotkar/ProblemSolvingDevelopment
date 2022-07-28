//1. Accept N numbers from user and accept one another number & check that numbers is present or not.

import java.lang.*;
import java.util.*;

class Number
{
 public boolean Check(int Brr[], int iNo)
 {
    int iCnt = 0;
    for(int i = 0; i < Brr.length; i++)
    {
         if(Brr[i] == iNo)
         {
            iCnt++;
         }
    }
if(iCnt != 0)
{
  return true;
}
else
{
return false;
}
 }
}

class A50_1
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

    System.out.println("Enter the Number");
    int iValue = sobj.nextInt();

    System.out.println("Elements from Array:");
     for(int i = 0; i < iSize; i++)
    {
        System.out.print(Arr[i]+"  ");
    }
    Number obj = new Number();
    boolean bRet = obj.Check(Arr,iValue);
    System.out.println();
    if(bRet == true)
    {
        System.out.println(iValue+" is Present");
    }
    else
    {
        System.out.println(iValue+" is NOT Present");
    }
}
}