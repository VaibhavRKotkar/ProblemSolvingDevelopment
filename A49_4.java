//4. Accept numbers from user and return multiplication of all digits.

import java.lang.*;
import java.util.*;

class Digit
{
 public int CountEven(int iNo)
 {
    int iMult = 1, iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0){iDigit = 1;}
        iMult = iMult * iDigit;

       iNo =  iNo / 10;
    }
     return iMult;
 }
}

class A49_4
{
public static void main(String arg[])
{
    Scanner sobj = new Scanner(System.in);

    System.out.print("Enter the number: ");
    int iSize = sobj.nextInt();

    Digit obj = new Digit();
    int iRet = obj.CountEven(iSize);
    System.out.println(" Digits multiplication is: "+iRet);
}
}