// Accept Array of characters and return difference between small characters and capital characters from that array.
import java.lang.*;
import java.util.*;

class MyArray
{
    public char Arr[];

    public MyArray()
    {
        Arr = new char[20];
    }

    protected void finalize()
    {
        Arr = null;
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter elements for Array");

        Arr = sobj.next().toCharArray();

    }

    public void Display()
    {
        System.out.println("Elements from array are :");

        for(int i = 0; i < Arr.length; i++)
        {
           System.out.print(Arr[i]+"   ");
        }
        System.out.println();

    }

    public int ArrayDiff()
    {
        int i = 0, iCnt1 = 0, iCnt2 = 0;
        for(i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
            {
                iCnt1++;
            }
            if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
            {
                 iCnt2++;
            }
        }
        return (iCnt1-iCnt2);
    }
}

class A60_4
{
    public static void main(String arr[])
    {
            MyArray aobj = new MyArray();
            aobj.Accept();
            aobj.Display();
            int iRet = aobj.ArrayDiff();
            if(iRet < 0)
            {
                iRet = -iRet;
            }
            System.out.println("Difference is: "+iRet);

    }
}
