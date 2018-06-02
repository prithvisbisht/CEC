#include<iostream>
#include<sstream>

using namespace std;

namespace patch
{
    template < typename T > std::string to_string( const T& n )
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}

void tobinary(int num)
{
	string s="";
	while(num!=0)
	{
		int rem=num%2;
		string temp=patch::to_string(rem);
		s=temp+s;
		num=num/2;
	}
	cout<<s;
}

int main(int argc, char const *argv[])
{
	int num;
	cout<<"enter number you want to convert in binary"<<endl;
	cin>>num;
	tobinary(num);
	return 0;
}