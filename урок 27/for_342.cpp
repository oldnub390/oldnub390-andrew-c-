#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int sum = 0, num;
    for(int i = 1; i<=100;i++){
        cin>>num;
        sum+=num;
    }
    cout<<sum;
    return 0;
}
