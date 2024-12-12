#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x, d, c = 0;
    cin>>x>>d;
    for( ; x>0; x/=10){
        if(x % 10 == d){
        ++c;
        }
    }
    cout<<c;
    return 0;
}
