/*


Difference Between Two Time Periods
Write a program to calculate difference between two time periods
INPUT FORMAT:

Input 1 : hours,minutes and seconds

Input 2 : hours,minutes and seconds

OUTPUT FORMAT:

TIME DIFFERENCE

SAMPLE INPUT:

12 15 24 

8 15 23                                            

SAMPLE OUTPUT:                                                                        

4:0:1







Input (stdin)
12 15 24
8 15 23

Output (stdout)
4:0:1




Input (stdin)
8 12 21
6 10 21

Output (stdout)
2:2:0



Input (stdin)
11 12 12
6 23 21

Output (stdout)
4:48:51

*/




//Program



#include <iostream>
using namespace std;
struct difference
{
int hour1, minute1, second1;
int hour2, minute2, second2;
};

int main() 
{
difference d;
int diff_hour, diff_minute, diff_second;
cin>>d.hour1>>d.minute1>>d.second1;
cin>>d.hour2>>d.minute2>>d.second2;   
if(d.second2 > d.second1) 
{
d.minute1--;
d.second1 += 60;
}   
diff_second = d.second1 - d.second2;   
if(d.minute2 > d.minute1) 
{
d.hour1--;
d.minute1 += 60;
}
diff_minute = d.minute1 - d.minute2;
diff_hour = d.hour1 - d.hour2;   
cout<<diff_hour<<":"<< diff_minute <<":"<<diff_second;  
return 0;
}
