import java.io.*;
import java.util.Scanner;
class Square
{
    public static void main(String args[])
     { 
        int temp=0,sum=0;
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
         String m=String.valueOf(n);
         while(n>0)
          {
            temp=n%10;
            sum = sum + (int) Math.pow(temp,2);
            n=n/10;
          }
        System.out.print(sum);
    }
} 
