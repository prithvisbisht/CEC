#include<iostream>

using namespace std;

void printArray(int arr[],int n){
	for (int i = 0; i < n; ++i){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n;
	cout<<"Enter Size Of array "<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter Elements of the array "<<endl;
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}
	for (int i = 0,j=n-1; i < j;)
	{
		if(arr[i]%2==0 && arr[j]%2==0)
			j--;
		else if(arr[i]%2==1 && arr[j]%2==0){
			j--;
			i++;
		}
		else if(arr[i]%2==1 && arr[j]%2==1){
			i++;
		}
		else{
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	printArray(arr,n);
}