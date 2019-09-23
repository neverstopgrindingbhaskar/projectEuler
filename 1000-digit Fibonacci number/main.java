import java.math.BigInteger;
class solution
{
public static void main(String args[])
{
int num=100000;
BigInteger[] fib=new BigInteger[num];
fib[1]=BigInteger.ONE;
fib[2]=BigInteger.ONE;
int i=3;
while(i!=num)
{
fib[i]=fib[i-1].add(fib[i-2]);
i++;
}
for(i=1;i<num;i++)
{
boolean yes=findAns(fib[i]);
if(yes)
{
System.out.println(fib[i]);
System.out.println(i);
break;
}
}
}
public static boolean findAns(BigInteger num)
{
int count=0;
BigInteger di=new BigInteger("10");
while(num.compareTo(BigInteger.ZERO)>0)
{
count++;
num=num.divide(di);
}
if(count==1000)
return true;
else
return false;
}
}

