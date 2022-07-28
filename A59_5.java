// Accept Array of Marks and display student class according to Marks.
import java.lang.*;
import java.util.*;

class MyArray
{
    public float Arr[];

    public MyArray(int iSize1)
    {
        Arr = new float[iSize1];
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
            Arr[i] = sobj.nextFloat();
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

    public void Percentage()
    {
        int i = 0;
        for(i = 0; i < Arr.length; i++)
        {
            if(Arr[i] < 0)
            {
                Arr[i] = -Arr[i];
            }
            if(Arr[i] < 35 && Arr[i] >= 0)
            {
                System.out.println(Arr[i]+" : Fail");
            }
            else   if(Arr[i] < 50)
            {
                System.out.println(Arr[i]+" : Pass Class");
            }
            else   if(Arr[i] < 60)
            {
                System.out.println(Arr[i]+" : Second Class");
            }
            else   if(Arr[i] < 70)
            {
                System.out.println(Arr[i]+" : First Class");
            }
             else   if(Arr[i] >= 70 && Arr[i] <= 100)
            {
                System.out.println(Arr[i]+" : First Class with Distinction");
            }
            else
            {
                System.out.println(Arr[i]+" : Invalid Marks");
            }
        }
    }
}

class A59_5
{
    public static void main(String arr[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the size of array : ");
            int size1 = sobj.nextInt();

            MyArray aobj = new MyArray(size1);
            aobj.Accept();
            aobj.Display();
            aobj.Percentage();
    }
}
