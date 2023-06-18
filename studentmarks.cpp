#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int per;
cout<<"Enter a Student Percentage:" ;
cin>>per;

if(per>=85 && per <=100)
{
cout<<"\nExcellent Work.";
}
else if(per>=75 && per<85)
{
cout<<"\nOutstanding Work.";
}
else if(per>=65 && per<75)
{
cout<<"\n Good Work.";
}
else if(per>=50 && per<65)
{
cout<<"\nSatisfactory.";
}
else if(per<50)
{
cout<<"\nBad Performance."<<endl;
if(per<50 && per>=33)
{
cout<<"\nYou can Resit in Exam.";
}
else
{
cout<<"\nPlease Redo your course!!";
}
}
else
{
cout<<"\nInvalid Entry Please Enter Valid Percentage!!!";
}
getch();
}
