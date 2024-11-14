#include <iostream>

using namespace std;

double power (double a, int n);

int main(){
    double k_otv,c;
    int n;
    cin>>c>>n;
    k_otv = power(c,n);
    cout<<k_otv;
    return 0;
}

double power (double a, int n){
    double otv = 1;
    for(int i = 0; i < n; i++){
        otv *= a;
    }
    return otv;

}
