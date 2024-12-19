#include <iostream>

using namespace std;

int main(){
    int n2, n10 = 0, two = 1;
    cin>>n2;
    for(; n2>0; n2/=10){
        n10 += two*(n2%10);
        two*=2;
    }
    cout<<n10;
    return 0;
}
