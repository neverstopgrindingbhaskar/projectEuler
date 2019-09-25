import java.math.BigInteger;
import java.util.Scanner;  
import java.io.*;  
class Solution
{
public static void main(String args[])
{
BigInteger sum=new BigInteger("0");
File file=new File("in.txt");
String str;
try
{
BufferedReader br = new BufferedReader(new FileReader(file)); 
while((str=br.readLine())!=null)
{
BigInteger num=new BigInteger(str);
sum=sum.add(num);
}
System.out.println(sum);
}
catch(Exception e)  
{  
e.printStackTrace();  
}  
}
}
