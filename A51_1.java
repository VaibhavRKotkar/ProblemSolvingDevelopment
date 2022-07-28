//Accept 2 string and one number & that no of characters from second string concat to first string.
import java.lang.*;
import java.util.*;

class StringDemo
{
    public String StrNCatX(String src,String dest, int iCnt)
    {
        String Fsrc="";
        char ch = '\0';
        char Arr[] = dest.toCharArray();
        src = src + " ";
        for(int i = 0; i < iCnt; i++)
        {
               if(Arr.length < iCnt)
               {
                    src = src + dest;
                    break;
               }
               src = src + Arr[i];
        }

        return src;
    }
}

class A51_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first String");
        String str1 = sobj.nextLine();

        System.out.println("Enter Second String");
        String str2 = sobj.nextLine();

        System.out.println("Enter no of characters to concat: ");
        int iNo = sobj.nextInt();

        StringDemo obj = new StringDemo();
         String sResult = obj.StrNCatX(str1,str2,iNo);
         System.out.println("After String concatenation new String: "+sResult);

    }
}