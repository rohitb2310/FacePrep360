/*

Gift for Birthday
Lucy is celebrating her 15th birthday. Her father promised her that he will buy her a new computer on her birthday if she solves the question asked by him. He asks Lucy to find out whether the year on which she was born is a leap year or not. Help her to solve this puzzle so that she celebrates her birthday happily. If her birth year is 2016 and it is a leap year display �2016 is a leap year.� Else display �2016 is not a leap year.�
INPUT & OUTPUT FORMAT:

Input consist of 1 integer.

Output consist of 1 string.



Input (stdin)
2016

Output (stdout)
2016 is a leap year


Input (stdin)
1999

Output (stdout)
1999 is not a leap year


Input (stdin)
1546

Output (stdout)
1546 is not a leap year
*/


//Program

#include<iostream>
using namespace std;
int main()
{
int year;
cin>>year;
if(year%400==0)
{
cout<<year<<" is a leap year";
}
else if(year%100==0)
{
cout<<year<<" is not a leap year";
}
else if(year%4==0)
{
cout<<year<<" is a leap year";
}
else
{
cout<<year<<" is not a leap year";
}
}
