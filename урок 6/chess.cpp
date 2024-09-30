#include <iostream>
#include <cmath>

int main(){
    int x1,y1,x2,y2;
    //
    std::cin>>x1>>y1>>x2>>y2;
    //
    if(abs(x1 - y1)==abs(x2 - y2)){
        std::cout<<"YES";
    }
    else{
        if(x1 == x2 || y1 == y2){
            std::cout<<"YES";
        }
        else{
            std::cout<<"NO";
        }
    }
}