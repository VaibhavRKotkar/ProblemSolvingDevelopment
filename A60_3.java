// Accept Array of characters and one character from user and count that characters without considering its case from that array.
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

    public int Search(char ch)
    {
        int i = 0, iCnt = 0;
        ch = Character.toLowerCase(ch); // imp step
        for(i = 0; i < Arr.length; i++)
        {
            Arr[i] = Character.toLowerCase(Arr[i]);  // imp step
            if((Arr[i] == ch))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}

class A60_3
{
    public static void main(String arr[])
    {
            Scanner sobj = new Scanner(System.in);


            MyArray aobj = new MyArray();
            aobj.Accept();
            System.out.println("Enter the Character : ");
            char ch = sobj.next().charAt(0);
            aobj.Display();
            int iRet = aobj.Search(ch);
            System.out.println("Small characters in array are: "+iRet);

    }
}
