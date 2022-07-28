// Accept number from user and count number of ON Bits in it without using % and / operator.
import java.lang.*;
import java.util.*;

class Bitwise
{
     public int CountOne(int iNo)
     {
            int imask = 0X00000001;
            int iResult = 0, iCount = 0;

       while(iNo > 0)
       {
        iResult = iNo & imask;
        if(iResult != 0)
        {
            iCount++;
        }
        iNo = iNo>>1;
        }
        return iCount;
     }
}

class LB33_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number: ");
        int value = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        int iRet = bobj.CountOne(value);

        System.out.println("ON Bits are: "iRet);

    }

}