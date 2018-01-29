#include <iostream>

using namespace std;

void count(int num)
{
	int a[10]={0};
	while(num>0)
	{
		int temp=num%10;
		a[temp]++;
		num/=10;
	}
	for(int i=0;i<10;i++)
	{
		if(a[i]!=0)
		cout<<i<<" comes "<<a[i]<<" times \n";
	}
}

int main(int argc, char const *argv[])
{
	int num;
	cout<<"Enter the number you want to count frequency of"<<endl;
	cin>>num;
	count(num);
	return 0;
}