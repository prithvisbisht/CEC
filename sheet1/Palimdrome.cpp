// to run this code in ubuntu type g++ -std=c++11 codename.cpp in terminal
#include<iostream>
#include<sstream>
#include<string>

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

int reverse(int num)
{
	string s="";
	while(num>0)
	{
		int temp=num%10;
		s=s+patch::to_string(temp);
		num/=10;
	}
	return(stoi(s));
}

int main(int argc, char const *argv[])
{
	int num;
	cout<<"enter the number"<<endl;
	cin>>num;
	if(reverse(num)==num)
		cout<<"Palindrome"<<endl;
	else
		cout<<"Not Palindorme"<<endl;
	return 0;
}