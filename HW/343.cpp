#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, sum = 0, num;
    cin>>n;
    for(int i = 1; i<=n;i++){
        cin>>num;
        sum+=num;
    }
    cout<<sum;
    return 0;
}
