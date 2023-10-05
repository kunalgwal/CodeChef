#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t ; 
    cin>>t;
    while(t--){
        int a1 , a2 , b1 ,b2 ;
        cin>>a1>>a2>>b1>>b2;
        
        int Anetexport=(a1-a2);
        int Bnetexport=(b1-b2);
        
        if (Anetexport+Bnetexport<0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
	
	return 0;
}