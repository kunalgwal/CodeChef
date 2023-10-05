#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int X;
	    cin>>X;
	    float a=0.2*X;
	    for(int i=1;i<501;i++){
	        float b=a*i;
	        if(b>=100){
	            cout<<i<<endl;
	            break;
	        }
	    }
	    
	}
	return 0;
}