#include <iostream>

using namespace std;

int main(){
    int n, a_1, b_10, c_60;
    cin>>n;
    c_60 = n / 60;
    n -= c_60 * 60;
    if(n < 35){
        b_10 = n / 10;
        n -= b_10 * 10;
            if(n < 9){
                a_1 = n;
                cout<<a_1<<" "<<b_10<<" "<<c_60;
            }
            else{
                cout<<0<<" "<<b_10 + 1<<" "<<c_60;
            }
    }
    else{
        cout<<0<<" "<<0<<" "<<c_60 + 1;
    }
    return 0;
}