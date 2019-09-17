import java.math.BigInteger; 
class factorial
{
public static void main(String args[])
{
BigInteger f=new BigInteger("1");
for(int i=1;i<=100;i++)
f=f.multiply(BigInteger.valueOf(i));
System.out.println(f+"\n");	
BigInteger ten=new BigInteger("10");
BigInteger one=new BigInteger("0");
BigInteger rem=new BigInteger("0");
BigInteger sum=new BigInteger("0");
BigInteger a=new BigInteger("0");
while(f.compareTo(BigInteger.ZERO)>0)
{
rem=f.mod(ten);
sum=sum.add(rem);
f=f.divide(ten);
}
System.out.println(sum+"\n");
}
}
