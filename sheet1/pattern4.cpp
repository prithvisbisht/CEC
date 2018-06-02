//         1         
//       1 2 1       
//     1 2 3 2 1     
//   1 2 3 4 3 2 1   
// 1 2 3 4 5 4 3 2 1  
#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
    cout<<"enter the number of rows you want to print"<<endl;
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i){
    	for (int j = 0; j < n-i-1; ++j){
    		cout<<"  ";
    	}
        int count =0;
    	for(int j=0;j<=(i*2+1)/2;++j){
    		cout<<++count<<" ";
    	}
        for(int j=((i*2+1)/2)+1;j<(i*2+1);++j){
            cout<<--count<<" ";
        }
    	for (int j = 0; j < n-i-1; ++j){
    		cout<<"  ";
    	}
    	cout<<endl;
    }
    return 0;
}
