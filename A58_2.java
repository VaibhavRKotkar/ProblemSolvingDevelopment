// Accept Array and return Difference between summation of Array elements
import java.lang.*;
import java.util.*;

class MyArray
{
    public int Arr[];
    public int Brr[];

    public MyArray(int iSize1,int iSize2)
    {
        Arr = new int[iSize1];
        Brr = new int[iSize2];
    }

    protected void finalize()
    {
        Arr = null;
        Brr = null;
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

    public int ArrayDiff()
    {
        int iSum1 = 0, iSum2 = 0;
        for(int i = 0; i < Arr.length; i++)
        {
           iSum1 = iSum1 + Arr[i];
        }

        for(int j = 0; j < Brr.length; j++)
        {
            iSum2 = iSum2 + Brr[j];
        }
        return(iSum1 - iSum2);
    }
}


class A58_2
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
            int iRet = aobj.ArrayDiff();
            System.out.println("Difference is : "+ iRet);


    }
}
