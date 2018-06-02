#include<iostream>

using namespace std;

int main(){
	int rows,cols;
	cout<<"enter values of rows and columns"<<endl;
	cin>>rows>>cols;
	int mat[rows][cols];
	cout<<"Enter Elements of matrix "<<endl;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cin>>mat[i][j];
		}
	}
	cout<<"Transpose of matrix is "<<endl;
	for (int i = 0; i < cols; ++i)
	{
		for (int j = 0; j < rows; ++j)
		{
			cout<<mat[j][i]<<" ";
		}
		cout<<endl;
	}
}