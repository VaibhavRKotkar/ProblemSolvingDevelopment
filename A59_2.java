// Accept Array and replace the elements with its digits summation from that array.
import java.lang.*;
import java.util.*;

class MyArray
{
    public int Arr[];

    public MyArray(int iSize1)
    {
        Arr = new int[iSize1];
    }

    protected void finalize()
    {
        Arr = null;
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
        System.out.println("Elements from array are :");

        for(int i = 0; i < Arr.length; i++)
        {
           System.out.print(Arr[i]+"   ");
        }
        System.out.println();

    }

    public void SumArray()
    {
        int i = 0;
        for(i = 0; i < Arr.length; i++)
        {
           int iSum = 0;
           while(Arr[i] > 0)
           {
             iSum = iSum + (Arr[i] % 10);
             Arr[i] = Arr[i]/10;
           }
           Arr[i] = iSum;
        }
    }
}

class A59_2
{
    public static void main(String arr[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the size of First array : ");
            int size1 = sobj.nextInt();

            MyArray aobj = new MyArray(size1);
            aobj.Accept();
            aobj.Display();
            aobj.SumArray();
            aobj.Display();

    }
}
