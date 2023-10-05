#include <iostream>
# include <limits.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[100000];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int Min=INT_MAX;
	    for(int j=0;j<n;j++){
	        Min=min(Min,arr[j]);
	    }
	    int s;
	    for(int k=0;k<n;k++){
	        if(arr[k]==Min){
	            s=k;
	        }
	    }
	    arr[s]=0;
	    int sum=0;
	    for(int l=0;l<n;l++){
	        sum=sum+arr[l];
	        
	    }
	    cout<<sum<<endl;
	}
	return 0;
}