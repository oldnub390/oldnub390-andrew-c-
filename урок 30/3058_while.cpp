#include <iostream>

using namespace std;

int main(){
    int n, del = 0, schet = 2;
    cin>>n;
    while(del==0){
    if(n%schet==0){
        del = schet;
    }
    ++schet;
    }
    cout<<del;
    return 0;
}