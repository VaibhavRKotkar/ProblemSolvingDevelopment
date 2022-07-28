// Accept Array and display summation of Array elements
import java.lang.*;
import java.util.*;

class MyArray
{
    public int Arr[];
    public int Brr[];
    public int Crr[];

    public MyArray(int iSize1,int iSize2)
    {
        Arr = new int[iSize1];
        Brr = new int[iSize2];
        Crr = new int[iSize1 + iSize2];
    }

    protected void finalize()
    {
        Arr = null;
        Brr = null;
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
       System.out.println("Enter elements for Second Array");

        for(int j = 0;j < Brr.length; j++)
        {
            Brr[j] = sobj.nextInt();
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
        System.out.println("Elements from Second array are :");

        for(int j = 0; j < Brr.length; j++)
        {
           System.out.print(Brr[j]+"   ");
        }
        System.out.println();
    }

    public void ArraySum()
    {
        int iSum = 0;
        for(int i = 0; i < Arr.length; i++)
        {
           iSum = iSum + Arr[i];
        }
        System.out.println("Array Summation : "+iSum);
        iSum = 0;
        for(int j = 0; j < Brr.length; j++)
        {
            iSum = iSum + Brr[j];
        }
        System.out.println("Array Summation : "+iSum);
    }
}


class A57_5
{
    public static void main(String arr[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the size of First array : ");
            int size1 = sobj.nextInt();

            System.out.println("Enter the size of Second array : ");
            int size2 = sobj.nextInt();

            MyArray aobj = new MyArray(size1, size2);
            aobj.Accept();
            aobj.Display();
           aobj.ArraySum();


    }
}
