/*

Handshakes
It was Raj's first day at school. His teacher Anu asked the students to meet every other student in the class and introduce about themselves. The teacher asked them to handshake with each other when they meet. If there are n number of students in the class then find the total number of handshakes made by the students.
INPUT & OUTPUT FORMAT:

Input consists of 1 integer. First input corresponds to the total number of students. The output consists of 1 integer.


Input (stdin)
15

Output (stdout)
105


Input (stdin)
4

Output (stdout)
6


Input (stdin)
3

Output (stdout)
3



*/



//Program


#include<iostream>
using namespace std;

int main()
{
int num;
cin >> num;
int total = num * (num-1) / 2;
cout<<total;
return 0;
}
