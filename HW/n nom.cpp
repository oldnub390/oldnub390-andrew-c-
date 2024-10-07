#include <iostream>

int main(){
    int a,b = 0,c = 0;
    std::cin>>a;
    while(a>0){
        b = a % 10;
        c += b;
        a /=10;
    }
    std::cout<<c;
    return 0;
}