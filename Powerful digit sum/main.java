import java.math.BigInteger;
class Solution
{
public static void main(String args[])
{
BigInteger a=new BigInteger("1");
BigInteger b=new BigInteger("1");
BigInteger max=new BigInteger("0");
for(BigInteger i=BigInteger.valueOf(99);i.compareTo(BigInteger.ZERO)>0;i=i.subtract(BigInteger.ONE))
{
for(BigInteger j=BigInteger.valueOf(99);j.compareTo(BigInteger.ZERO)>0;j=j.subtract(BigInteger.ONE))
{
BigInteger result=i.pow(j.intValue());
BigInteger ans=new BigInteger("0");
ans=findAns(result);
if(ans.compareTo(max)>0)
max=ans;
}
}
System.out.println(max);
}
public static BigInteger findAns(BigInteger res)
{
BigInteger sum=new BigInteger("0");
BigInteger rem=new BigInteger("0");
BigInteger div=new BigInteger("10");
while(res.compareTo(BigInteger.ZERO)>0)
{
rem=res.mod(div);
sum=sum.add(rem);
res=res.divide(div);
}
return sum;
}
}
