// Accept Array of characters and count small characters from that array.
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

    public int ArraySmallCount()
    {
        int i = 0, iCnt = 0;
        for(i = 0; i < Arr.length; i++)
        {
            if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}

class A60_2
{
    public static void main(String arr[])
    {
            MyArray aobj = new MyArray();
            aobj.Accept();
            aobj.Display();
            int iRet = aobj.ArraySmallCount();
            System.out.println("Small characters in array are: "+iRet);

    }
}
