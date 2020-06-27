/*

Student details
Jeeva is the chairman of ABC university and he is planned to improve students education. So he is conducted meeting for all departments HODs. Write a program to help all department HODs to display student details. Create a structure called Student. struct Student { char name[30]; char department[20]; int yearOfStudy; float cgpa; }; Write a program to get the details of 'n' students and to display their details, sorted in ascending order based on the name.
INPUT & OUTPUT FORMAT:

Refer sample input and output for formatting specification.

All float values are displayed corrected to 2 decimal places. 

SAMPLE INPUT & OUTPUT:

Enter the number of students

1

Enter the details of student 1

Enter name

krish

Enter department

mca

Enter year of study

3

Enter cgpa

7.6

Details of students

Student 1

Name : krish

Department : mca

Year of study : 3

CGPA : 7.6







Input (stdin)
1
krish
mca
3
7.6

Output (stdout)
Enter the number of students
Enter the details of student 1
Enter name
Enter department
Enter year of study
Enter cgpa
Details of students
Student 1
Name:krish
Department:mca
Year of study:3
CGPA:7.6





*/




//Program


#include<iostream>
#include<cstring>
using namespace std;
struct Student
{
  char name[30];
  char department[20];
  int yearOfStudy;
  float cgpa;
};
int main()
{
  int n;
 cout<<"Enter the number of students";
  cin>>n;
  Student s[n],t;
  for(int i=0;i<n;i++)
  {
    cout<<"\nEnter the details of student "<<i+1;
    cout<<"\nEnter name";
    cin>>s[i].name;
    cout<<"\nEnter department";
    cin>>s[i].department;
    cout<<"\nEnter year of study";
    cin>>s[i].yearOfStudy;
    cout<<"\nEnter cgpa";
    cin>>s[i].cgpa;
  }
  
  cout<<"\nDetails of students";
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(strcmp(s[i].name,s[j].name)>0)
      {
          t = s[i];
        s[i] = s[j];
        s[j] = t;
      }
    }
  }
  for(int i=0;i<n;i++)
  {
     cout<<"\nStudent "<<i+1;
     cout<<"\nName:"<<s[i].name;
     cout<<"\nDepartment:"<<s[i].department;
     cout<<"\nYear of study:"<<s[i].yearOfStudy;
     cout<<"\nCGPA:"<<s[i].cgpa;
  }
  
}
