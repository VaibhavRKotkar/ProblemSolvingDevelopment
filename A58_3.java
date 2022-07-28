// Accept Array and display Array Concatenation in reverse order.
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

    public int[] CopyArrayRev1()
    {
       int k= 0;
        for(int i = Arr.length-1; i >= 0; i--,k++)
        {
           Crr[k] = Arr[i];
        }
        k = 0;
        for(int j = Brr.length-1; j >= 0; j--, k++)
        {
            Crr[Arr.length + k] = Brr[j];
        }
        return Crr;
    }

    public int[] CopyArrayRev2()
    {
       int k= 0;
        for(int i = Brr.length-1; i >= 0; i--,k++)
        {
           Crr[k] = Brr[i];
        }
        k = 0;
        for(int j = Arr.length-1; j >= 0; j--, k++)
        {
            Crr[Brr.length + k] = Arr[j];
        }
        return Crr;
    }
}


class A58_3
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

           int iRet[] = aobj.CopyArrayRev2();

            System.out.println("Concate :");

            for(int i = 0; i < iRet.length; i++)
            {
               System.out.print(iRet[i]+"   ");
            }
            System.out.println();

            int iRet1[] = aobj.CopyArrayRev1();

            System.out.println("Concate :");

            for(int j = 0; j < iRet.length; j++)
            {
               System.out.print(iRet[j]+"   ");
            }


    }
}
