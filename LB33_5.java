// Accept number from user and Range of positions. Toggle all the bits from that range and return the modified number.
import java.lang.*;
import java.util.*;

class Bitwise
{
     public int ToggleBitRange(int iNo,int iStart, int iEnd)
     {
            int iMask = 0X00000001;
            int iResult = 0;

            iMask = ((iMask<<(iEnd-iStart)+1)-1)<<(iStart-1);
            iResult = iNo ^ iMask;

            return iResult;
}
}

class LB33_5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

          System.out.println("Enter the Number: ");
          int value = sobj.nextInt();

          System.out.println("Enter the Start Position: ");
          int pos1= sobj.nextInt();

          System.out.println("Enter the End Position: ");
          int pos2 = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        int iRet = bobj.ToggleBitRange(value,pos1,pos2);

         System.out.println("Modified Number is: "+iRet);

    }

}