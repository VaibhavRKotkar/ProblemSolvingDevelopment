// Accept Array and check palindrome elements from array.
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

    public boolean ChkPalindrome()
    {
        int i = 0;
        for(i = 0; i < Arr.length; i++)
        {
           int iSum = 0, temp = Arr[i];
           while(Arr[i] > 0)
           {
             int iDigit = Arr[i] % 10;
             iSum = (iSum* 10) + iDigit;
             Arr[i] = Arr[i]/10;
           }
           if(iSum == temp)
           {
                continue;
           }
           else
           {
                break;
           }
        }
if(i == Arr.length)
 {
      return true;
 }
 else
  {
      return false;
  }
}
}

class A58_5
{
    public static void main(String arr[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the size of First array : ");
            int size1 = sobj.nextInt();


            MyArray aobj = new MyArray(size1);
            aobj.Accept();
            aobj.Display();
            boolean bRet = aobj.ChkPalindrome();

            if(bRet == true)
             {
                  System.out.println("Array elements are Palindrome");
             }
             else
              {
                   System.out.println("Array elements are NOT Palindrome");
              }

    }
}
