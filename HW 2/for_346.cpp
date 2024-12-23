#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, num, x_0 = 0, y_1 = 0, z_2 = 0;
    cin>>n;
    for(int i = 1; i<=n;i++){
        cin>>num;
        if(num == 0){
            x_0++;
        }
        else if(num > 0){
            y_1++;
        }
        else{
            z_2++;
        }
    }
    cout<<x_0<<" "<<y_1<<" "<<z_2;
    return 0;
}
