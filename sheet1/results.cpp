//This program is to print Hello World Infinite times using While loop
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int marks;
	char grade;
	cout<<"Please enter your marks\t";
	cin>>marks;
	if (marks>90)
		grade='A';
	else if(marks>80)
		grade='B';
	else if(marks>60)
		grade='C';
	else if(marks>40)
		grade='D';
	else
		grade='F';
	cout<<"grade is "<<grade<<endl;
	return 0;
}