/*

Collatz problem
The rules for generating Collatz sequence are: If n is even: n = n / 2 If n is odd: n = 3n + 1 For example, if the starting number is 5 the sequence is: 5 -> 16 -> 8 -> 4 -> 2 -> 1 It has been proved for almost all integers, that the repeated application of the above rule will result in a sequence that ends in 1. Now, write a C++ program to generate the Collatz sequence.
INPUT & OUTPUT FORMAT:

The input is an integer 'n' which denotes the first term of the sequence.

As output, print the numbers in the sequence and also print the number of times the rule has to be applied in order to reach 1.


Input (stdin)
18

Output (stdout)
18
9
28
14
7
22
11
34
17
52
26
13
40
20
10
5
16
8
4
2
1
20



Input (stdin)
1

Output (stdout)
1
0



Input (stdin)
3

Output (stdout)
3
10
5
16
8
4
2
1
7




*/




//Program


#include<iostream>
using namespace std;
int main()
{
int n,i=0;
cin>>n;
cout<<n;
while(n!=1)
{
	if(n % 2 == 0){
	n=n/2;
	cout<<"\n"<<n;
	}else{        
	n = 3*n+1;
	cout<<"\n"<<n;
	}
  i++;
}
cout<<"\n"<<i;
}
