#include <iostream>

using namespace std;

int main(){
    int n, i=1;
    cin>>n;
    while(n >= i*i){
        cout<<i*i<<endl;
        ++i;
    }
    return 0;
}