// Accept number from user and check whether 9th or 12th Bits is ON or OFF
import java.lang.*;
import java.util.*;

class Bitwise
{
     public boolean ChkOnBit(int iNo)
     {
            int iMask = 0X00000900;
            int iResult = 0;

            iResult = iNo & iMask;

            if(iResult != 0)
            {
                return true;
            }
            else
            {
                return false;
            }
}
}

class LB33_3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number: ");
        int value = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        boolean bRet = bobj.ChkOnBit(value);

        if(bRet == true)
        {
          System.out.println("Bit is ON");
        }
        else
        {
            System.out.println("Bit is OFF");
        }

    }

}