//Accept the string from user and reverse the content by toggling the case.
import java.util.*;
import java.lang.*;

class StringDemo
{
    public void StrRevToggX(String src)
    {
       String Nstr = "";
       char temp = '\0';

       char first[]  = src.toCharArray();

    for(int i = 0; i < first.length; i++)
    {
       if(first[i] >= 'a' && first[i] <= 'z')
       {
        first[i] = (char) (first[i] + 'A' - 'a');
       }
       else if(first[i] >= 'A' && first[i] <= 'Z')
       {
        first[i] = (char) (first[i] + 'a' - 'A');
       }
    }
        int start = 0, end = 0;

             end = first.length-1;

       for(start = 0; start < end; start++, end--)
        {
           temp = first[start];
           first[start] = first[end];
           first[end] = temp;
        }
   System.out.println(first);
  }
}

class A51_4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first String");
        String str1 = sobj.nextLine();

         StringDemo obj = new StringDemo();
         obj.StrRevToggX(str1);

    }
}