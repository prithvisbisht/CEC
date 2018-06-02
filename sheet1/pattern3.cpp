//         *
//       * * *       
//     * * * * *     
//   * * * * * * *   
// * * * * * * * * * 
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
    	for(int j=1;j<=i*2+1;++j){
    		cout<<"*"<<" ";
    	}
    	for (int j = 0; j < n-i-1; ++j){
    		cout<<"  ";
    	}
    	cout<<endl;
    }
    return 0;
}
