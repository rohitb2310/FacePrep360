/*

Ashok's homework
Ashok is a ninth-grade schoolboy. Miss Sumaiya is a very strict teacher and she teaches math to all the students. On the first day of the academic year, Miss Sumaiya gave him homework to find the addition of two matrices. Can you help Ashok by writing a program for the same.
Input Format:

The first input contains an integer 'r' which denotes the number of rows

The second input contains an integer 'c' which denotes the number of columns

The remaining input denotes the inputs of matrix1 and matrix2

Output Format:

Print the addition of two matrices

Sample Input:

2

2

2 3

4 5

4 5

6 7

Sample Output:

6 8

10 12







Input (stdin)
2
2
3 4
5 6
6 7
8 9

Output (stdout)
9 11
13 15





Input (stdin)
3 3
1 2 3
5 6 8
45 67 34
6 7 4
3 78 54
23 14 12

Output (stdout)
7 9 7
8 84 62
68 81 46




Input (stdin)
2 3
4 5 6
7 4 3
6 7 5 
4 3 1

Output (stdout)
10 12 11
11 7 4


*/



//Program


#include<iostream>
using namespace std;
int main()
{
int r,c,i,j;
cin>>r;
cin>>c;
int m1[r][c];
int m2[r][c];
int m3[r][c];

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>m1[i][j];
}
}
  
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>m2[i][j];
}
}
  
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
m3[i][j]=m1[i][j]+m2[i][j];
}
}
  
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cout<<m3[i][j]<<" ";
}
 cout<<"\n";
}
} 
