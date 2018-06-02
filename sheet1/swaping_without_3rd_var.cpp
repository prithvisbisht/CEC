#include <iostream>

using namespace std;

int main()
{
	int a,b;
	cout<<"enter first value \n";
	cin>>a;
	cout<<"enter second value\n";
	cin>>b;
	cout<<"value before swapping is "<<a<<" and "<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"value after swapping is "<<a<<" and "<<b<<endl;
}