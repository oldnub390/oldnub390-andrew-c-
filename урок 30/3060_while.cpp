#include <iostream>

using namespace std;

int main(){
    int n,st2 = 1;
    cin>>n;
    while(st2<n){
        st2*=2;
    }
    if(st2==n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}