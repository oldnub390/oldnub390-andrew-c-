#include <iostream>

using namespace std;

int main(){
    int n, st2 = 1;
    cin>>n;
    while(n>=st2){
        cout<<st2<<" ";
        st2*=2;
    }
    return 0;
}