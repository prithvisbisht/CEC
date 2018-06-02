#include<iostream>

using namespace std;

void checkFrequency(int arr[],string s){
	char a='0';
	for (int i = 0; i < s.length(); ++i){
		arr[s[i]-a]++;
	}
}

void printArray(int arr[]){
	for (int i = 0; i < 10; ++i){
		if(arr[i]!=0){
			cout<<"frequency of number "<<i<<" is "<<arr[i]<<endl;
		}
	}
}

int main(){
	string s;
	cout<<"enter your number ...."<<endl;
	cin>>s;
	int arr[9]={0};
	checkFrequency(arr,s);
	printArray(arr);
}