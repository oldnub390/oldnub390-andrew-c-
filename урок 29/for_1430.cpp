#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int sec, schet=0;
    cin>>sec;
    for(int i=1; schet < sec; i++){
        for(int j=0; j < i and schet < sec; j++){
            schet++;
            cout<<i<<" ";
        }
    }
    return 0;
}
