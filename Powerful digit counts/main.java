import java.math.BigInteger;
import java.util.Iterator;
import java.util.Set;
import java.util.HashSet;
class solution
{
public static void main(String args[])
{
int count=0;
BigInteger b1=new BigInteger("1");
BigInteger i=new BigInteger("0");
BigInteger j=new BigInteger("0");
Set<Integer>s1=new HashSet<Integer>();
for(i=BigInteger.valueOf(100);i.compareTo(BigInteger.ZERO)>0;i=i.subtract(BigInteger.ONE))
{
for(j=BigInteger.valueOf(100);j.compareTo(BigInteger.ZERO)>0;j=j.subtract(BigInteger.ONE))
{
b1=i.pow(j.intValue());
//System.out.println(b1);
String str=b1.toString();
if(str.length()==j.intValue())
{
System.out.println(str+" "+i+" "+j);
s1.add(j.intValue());
count++;
}
}
}
for(Integer k:s1)
System.out.println(k);
System.out.println(count);
}
}
