import java.math.BigInteger;
import java.lang.Math; 
class solution
{
public static void main(String args[])
{
BigInteger sum=new BigInteger("0");
BigInteger power=new BigInteger("1");
for(BigInteger i=BigInteger.valueOf(1000);i.compareTo(BigInteger.ZERO)>0;i=i.subtract(BigInteger.ONE))
{
BigInteger result=i.pow(i.intValue());
sum=sum.add(result);
}
System.out.println(sum);
}
}
