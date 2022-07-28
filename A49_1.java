//1. Accept numbers from user and return count of even digits.

import java.lang.*;
import java.util.*;

class Digit
{
 public int CountEven(int iNo)
 {
    int iCnt = 0, iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iCnt++;
        }
       iNo =  iNo / 10;
    }
     return iCnt;
 }
}

class A49_1
{
public static void main(String arg[])
{
    Scanner sobj = new Scanner(System.in);

    System.out.print("Enter the number: ");
    int iSize = sobj.nextInt();

    Digit obj = new Digit();
    int iRet = obj.CountEven(iSize);
    System.out.println("Even Digits count:"+iRet);
}
}