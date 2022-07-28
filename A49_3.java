//3. Accept numbers from user and return count of digits in between 3 and 7.

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
        if(iDigit > 3 && iDigit < 7)
        {
            iCnt++;
        }
       iNo =  iNo / 10;
    }
     return iCnt;
 }
}

class A49_3
{
public static void main(String arg[])
{
    Scanner sobj = new Scanner(System.in);

    System.out.print("Enter the number: ");
    int iSize = sobj.nextInt();

    Digit obj = new Digit();
    int iRet = obj.CountEven(iSize);
    System.out.println(" Digits count in between 3 & 7 is: "+iRet);
}
}