#include <iostream>

using namespace std;

void count_digits(long long int num)
{
	int c=0;
	while(num>0)
	{
		c++;
		num/=10;
	}
	cout<<c;
}

int main(int argc, char const *argv[])
{
	long long int num;
	cout<<"enter your number"<<endl;
	cin>>num;
	count_digits(num);
	return 0;
}