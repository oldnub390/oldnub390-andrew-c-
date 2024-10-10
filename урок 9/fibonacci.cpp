#include <iostream>

int main() {
    int c = 0, a = 1, b = 1, rez = 1, n;
    std::cin>>n;
    while(c < n){
        rez = a;
        a = b;
        b = rez + b;
        c++;
    }
    std::cout<<rez;
    return 0;
}