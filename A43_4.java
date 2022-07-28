//3. Accept file name from user and calculate checksum of file and display on screen.

import java.lang.*;
import java.util.*;
import java.awt.Desktop;
import java.io. * ;
import java.math.BigInteger;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;



public class A43_4
 {
  public static void main(String[] args)
  {
    try
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Name of File: ");
        String filename = sobj.nextLine();

        //constructor of file class having file as argument
        File fobj = new File(filename);

          if (fobj.exists())
          {

            // Static getInstance method is called with hashing MD5
            MessageDigest md = MessageDigest.getInstance("MD5");

            // digest() method is called to calculate message digest
            //  of an input digest() return array of byte
            byte[] messageDigest = md.digest(filename.getBytes());

            // Convert byte array into signum representation
            BigInteger no = new BigInteger(1, messageDigest);

            // Convert message digest into hex value
            String hashtext = no.toString(16);
            while (hashtext.length() < 32) {
                hashtext = "0" + hashtext;
            }
             System.out.println("Hash Code of File: "+ hashtext);
          //  return hashtext;

         }
          else
          {
            System.out.println("File not exists !");
          }

    }
        catch(Exception obj)
         {
          obj.printStackTrace();
        }
  }
}