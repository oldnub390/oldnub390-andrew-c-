#include <iostream>
#include <vector>

int main() {
    int x;
    std::cin>>x;
    int data[x]; //
    for (int i = 0; i < x; ++i){
        std::cin>> data[i];

    }
    for (int i = 0; i < x; ++i){
        if (i % 2 == 0){
        std::cout<< data[i];
        std::cout<< " ";
    }
    }
    return 0;
}