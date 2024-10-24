#include <iostream>
#include <vector>

// int main() {
//     int x;
//     std::cin>>x;
//     int data[x]; //
//     for (int i = 0; i < x; ++i){
//         std::cin>> data[i];

//     }
//     for (int i = 0; i < x; ++i){
//         if (data[i] % 10 == 0){
//         std::cout<< data[i];
//         std::cout<< " ";
//     }
//     }
//     return 0;
// }

int main() {
    int x, schet = 0;
    std::cin>>x;
    int data[x]; //
    for (int i = 0; i < x; ++i){
        std::cin>> data[i];

    }
    for (int i = 0; i < x; ++i){
        if (data[i] % 10 == 0){
            schet++;
            std::cout<< data[i];
            std::cout<< " ";
    }
    }
    std::cout<<std::endl<<schet<<"\n";
    return 0;
}