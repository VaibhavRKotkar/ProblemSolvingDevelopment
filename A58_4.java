// Accept Array and display Copied Array .
import java.lang.*;
import java.util.*;

class MyArray
{
    public int Arr[];
    public int Brr[];
    public int Crr[];

    public MyArray(int iSize1)
    {
        Arr = new int[iSize1];
        Crr = new int[iSize1];
    }

    protected void finalize()
    {
        Arr = null;
        Crr = null;
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
       System.out.println("Enter elements for First Array");

        for(int i=0;i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }

    }

    public void Display()
    {
        System.out.println("Elements from First array are :");

        for(int i = 0; i < Arr.length; i++)
        {
           System.out.print(Arr[i]+"   ");
        }
        System.out.println();

    }

    public int[] ArrayCopy()
    {
        for(int i = 0; i < Arr.length; i++)
        {
           Crr[i] = Arr[i];
        }

        return Crr;
    }
}


class A58_4
{
    public static void main(String arr[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the size of First array : ");
            int size1 = sobj.nextInt();


            MyArray aobj = new MyArray(size1);
            aobj.Accept();
            aobj.Display();
            int iRet[] = aobj.ArrayCopy();

            System.out.println("Copied Array :");

            for(int i = 0; i < iRet.length; i++)
            {
               System.out.print(iRet[i]+"   ");
            }
    }
}
