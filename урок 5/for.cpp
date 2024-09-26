#include <iostream>

int main(){
    for(int i = 1; i < 10; ++i){
        std::cout<<i<<"\t"<<i*i<<"\n";
        for(int j = -1; j> -5; --j){
            std::cout<<"\t"<<j<<"\t"<<j*j<<"\n";
        }
    }
}
