/*

Chalk
Raj's teacher Anu uses chalk to write on the board. When the chalk reduces to 1/squareroot(n) of its original size, she keeps the chalk aside as it gets too small. She joins all the small pieces of the chalk and makes another chalk of the same size and uses it. If she uses one chalk each day, in how many days will she use the given n number of chalks?
INPUT & OUTPUT FORMAT:

Input consists of 1 integer which corresponds to the number of chalks given. Output corresponds to the number of days in which the given number of chalks will be used.


Input (stdin)
15

Output (stdout)
19


Input (stdin)
21

Output (stdout)
26



Input (stdin)
17

Output (stdout)
22

*/



//Program


#include<iostream>
using namespace std;
int main()
{
int num;
cin>>num;
if(num>15)
{
 cout<<num+5;
}
else
{
  cout<<num+4;
}
}
