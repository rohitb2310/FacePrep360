/*

Sece dining
The catering staff in the SECE mess are known for their good cooking skills as well as hospitality. We all know that the dining table arrangement needs to be different for left handed and right handed persons. So whenever any VIP guest visits SECE, they would make the table arrangements based on whether he/she is left handed or right handed. The mess is situated on the 15th floor of the hostel building. SECE hostel building has superfast elevators to help travel from one floor to another. Each elevator has 2 doors, the front one and the rear one. If a person enters the elevator through the front door, he goes out through the rear door and vice-versa. The elevator has 2 rails numbered as 1 and 2. Rail 1 is located to the left of the entrance of the front door (or correspondingly, to the right of the entrance of the rear door). Rail 2 is located opposite it, to the right of the entrance of the front door and to the left of the entrance of the rear door. We know that each person holds on the rail with his/her strongest hand. There is an IP camera in the elevator and based on the camera output, the catering staff will be easily able to identify whether a guest is left handed or right handed. They have decided to automate this task and they asked the help of Image Processing Group. The Image Processing Group has written a program to perform this task and the program will output the door through which the person entered and the rail number which the person held. Based on this input, write a program to determine whether a person is left handed or right handed.
INPUT FORMAT:

The first input is a string to denote the door as �front� or �rear�.

The second input is an integer to denote the rail as 1 or 2.

OUTPUT FORMAT:

Print the string "Left Handed" or "Right Handed".



Input (stdin)
front
1

Output (stdout)
Left Handed



Input (stdin)
rear
1

Output (stdout)
Right Handed


*/




//Program


#include<iostream>
using namespace std;
int main()
{
 //front 1 left
  //front 2 right
  //rear 1 right
  //rear 2 left
  string door;
  int rail;
  cin>>door;
  cin>>rail;
  string l_or_r;
  if(door == "front"){
   l_or_r = rail == 1 ? "Left Handed" : "Right Handed";
  }else{
     l_or_r = rail == 1 ?  "Right Handed" : "Left Handed";
  }
  cout<<l_or_r;
}