#include <iostream>

using namespace std;

int main(){
    int n, a_1 = 0, y_5 = 0, x_20 = 0, b_10 = 0, c_60 = 0;
    cin>>n;
    c_60 = n / 60;
    n -= c_60 * 60;
    if(n < 36){
        x_20 = n / 20;
        n -= x_20 * 20;
            if(n < 18){
               b_10 = n / 10;
               n -= b_10 * 10;
                if(n >= 5 and n!=9){
                    y_5 = n / 5;
                    n -= y_5 * 5;
                    a_1 = n;
                    cout<<a_1<<" "<<y_5<<" "<<b_10<<" "<<x_20<<" "<<c_60;
                    }
                else if (n == 9){
                    cout<<a_1<<" "<<y_5<<" "<<b_10+1<<" "<<x_20<<" "<<c_60;
                }
                else {
                    cout<<n<<" "<<y_5<<" "<<b_10<<" "<<x_20<<" "<<c_60;
                }
            }
            else{
                cout<<a_1<<" "<<y_5<<" "<<b_10<<" "<<x_20 + 1<<" "<<c_60;
            }
    }
    else{
        cout<<a_1<<" "<<y_5<<" "<<b_10<<" "<<x_20<<" "<<c_60 + 1;
    }
    return 0;
}
