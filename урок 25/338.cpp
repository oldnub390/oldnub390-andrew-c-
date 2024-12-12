#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x, c = 0;
    cin>>x;
    for( ; x>0; x/=10){
        c+=x%10;
        c*=10;
    }
    c/=10;
    cout<<c;
    return 0;
}
