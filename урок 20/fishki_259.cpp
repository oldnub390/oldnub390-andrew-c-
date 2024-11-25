#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n % 4 == 0 || n == 1){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}
