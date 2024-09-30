#include <iostream>
#include <cmath>

int main(){
    int a,b,c;
    //
    std::cin>>a>>b>>c;
    //
    if(a+b<= c || a+c <=b || b+c<=a){
        std::cout<<"UNDEFINED";
    }
    else{
        if( c*c == a*a + b*b || c*c == a*a + b*b || c*c == a*a + b*b){
            std::cout<<"YES";
        }
        else{
            std::cout<<"NO";
        }
    }
}