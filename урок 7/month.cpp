#include <cstdint>
#include <iostream>

int main(){
    int a;
    int month;
    int year;
    std::cin>>month>>year;
    
    switch (month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        std::cout<<"31\n";
        break;
        
        case 2:
        if(a%400 == 0){
            std::cout<<"29";
        }
        else if (a%100 == 0){
            std::cout<<"28";
            }
        else if (a%4 == 0){
            std::cout<<"29";
            }
        else{
        std::cout<<"28";   
        }

        break;
        default:
        std::cout<<"30\n";
    }
}
