// Accept Array and display below pattern.
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

    public void DisplayPattern()
    {
        for(int i = 0; i < Arr.length; i++)
        {
           for(int j = 0; j < Arr[i]; j++)
           {
              System.out.print("*  ");
           }
           System.out.println();
        }
    }
}

class A60_5
{
    public static void main(String arr[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the size of First array : ");
            int size1 = sobj.nextInt();

            MyArray aobj = new MyArray(size1);
            aobj.Accept();
            aobj.Display();
            aobj.DisplayPattern();
    }
}
