// Accept number from user and check whether 9th or 12th Bits is ON or OFF
import java.lang.*;
import java.util.*;

class Bitwise
{
     public boolean ChkOnBit(int iNo,int iPos1, int iPos2)
     {
            int iMask = 0X00000001;
            int iResult = 0;

            iMask = (iMask << (iPos1 -1) | iMask << (iPos2 -1));
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

class LB33_4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

          System.out.println("Enter the Number: ");
          int value = sobj.nextInt();

          System.out.println("Enter the First Position: ");
          int pos1= sobj.nextInt();

          System.out.println("Enter the Second Position: ");
          int pos2 = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        boolean bRet = bobj.ChkOnBit(value,pos1,pos2);

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