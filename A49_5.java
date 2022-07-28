//5. Accept numbers from user and return difference between summation of even  and odd digits.

import java.lang.*;
import java.util.*;

class Digit
{
 public int CountEven(int iNo)
 {
    int iSum1 = 0, iSum2 = 0, iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iSum1 += iDigit;
        }
        if(iDigit % 2 != 0)
        {
            iSum2 += iDigit;
        }
       iNo =  iNo / 10;
    }
     return (iSum1-iSum2);
 }
}

class A49_5
{
public static void main(String arg[])
{
    Scanner sobj = new Scanner(System.in);

    System.out.print("Enter the number: ");
    int iSize = sobj.nextInt();

    Digit obj = new Digit();
    int iRet = obj.CountEven(iSize);
    System.out.println("Difference between summation of even and odd Digits:"+iRet);
}
}