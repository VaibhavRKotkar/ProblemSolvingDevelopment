// Accept 2 numbers from user and count number of common ON Bits in it without using % and / operator.
import java.lang.*;
import java.util.*;

class Bitwise
{
     public int CommonBits(int iNo1, int iNo2)
     {
            int iMask = 0X00000001;
            int iResult = 0, iCount = 0;

       while(iNo1 > 0)
       {
        iResult = (iNo1 & iNo2) & (iMask) ;
        if(iResult != 0)
        {
            iCount++;
        }
        iNo1 = iNo1>>1;
        iNo2 = iNo2>>1;
        }
        return iCount;
     }
}

class LB33_2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the First Number: ");
        int value1 = sobj.nextInt();

        System.out.println("Enter the Second Number: ");
        int value2 = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        int iRet = bobj.CommonBits(value1,value2);

        System.out.println("Common ON Bits are: "+iRet);

    }

}