import java.time.*;
class calender
{
public static void main(String args[])
{
int count=0;
//Calendar cal;
for(int i=1;i<=100;i++)
{
for(int j=1;j<=12;j++)
{
int year=1900+i;
System.out.println(year);
YearMonth ym = YearMonth.of(year, j);
String firstday=ym.atDay(1).getDayOfWeek().name();
if(firstday.compareTo("SUNDAY")==0)
count++;
}
}
System.out.println(count);
}
}
