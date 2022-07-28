// Accept Array and display Array Concatenation.
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

    public int[] ArrayConcate()
    {
        for(int i = 0; i < Arr.length; i++)
        {
           Crr[i] = Arr[i];
        }

        for(int j = 0; j < Brr.length; j++)
        {
            Crr[Arr.length + j] = Brr[j];
        }
        return Crr;
    }
}


class A57_4
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
            int iRet[] = aobj.ArrayConcate();

            System.out.println("Concate :");

            for(int i = 0; i < iRet.length; i++)
            {
               System.out.print(iRet[i]+"   ");
            }


    }
}
