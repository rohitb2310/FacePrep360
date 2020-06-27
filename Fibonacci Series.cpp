/*

Fibonacci Series
Write a program to find the nth term in the Fibonacci series using recursion. Note that the first 2 terms in the Fibonacci Series are 0 and 1.
INPUT & OUTPUT FORMAT:

Input consists of an integer.

Refer sample input and output for formatting specifications.

All text in bold corresponds to the input and the rest corresponds to output.



Input (stdin)
5

Output (stdout)
The term 5 in the fibonacci series is 3



Input (stdin)
8

Output (stdout)
The term 8 in the fibonacci series is 13




Input (stdin)
15

Output (stdout)
The term 15 in the fibonacci series is 377

*/





//Program


#include <iostream>
using namespace std;
int fib(int n)
{
if(n <= 1){
return n;
}
return fib(n-1) + fib(n-2);
}
int main()
{
int term;
cin>>term;
cout<<"The term "<<term<<" in the fibonacci series is "<<fib(term-1);
return 0;
}
