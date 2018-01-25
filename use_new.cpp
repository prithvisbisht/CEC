#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int *ptr =new int; //to dynamically allocate the memory in c++
	*(ptr)=5;
	cout<<*ptr<<endl;

	int *a=new int[10];// to dynamically allocate an array in c++
	for (int i = 0; i < 10; ++i)
	{
		a[i]=i;
		cout<<a[i]<<"\t";
	}
	cout<<endl;

	delete ptr;// to delete the variable memory
	delete []a;// to delete the array memory
	return 0;
}