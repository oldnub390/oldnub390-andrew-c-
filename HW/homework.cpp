#include <iostream>

int main(){
    int a = 4;
    int b = 5;
    int c = a + b;
bool t = true;
while (t){
    std::cout<<"Введите число от 1 до 10: \n";
    std::cin>>c;
    if (c = a + b){
        std::cout<<"Неправельно! Попробуй ёще раз\n";
    }
    else{
        std::cout<<c<<a+b<<std::endl;
        break;
    }
}
}