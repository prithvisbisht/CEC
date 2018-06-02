// A
// B B
// C C C
// D D D D
// E E E E E
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	char a='A';
	for (int i = 1; i <= 5; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout<<a;
		}
		a++;
		cout<<endl;
	}
	return 0;
}