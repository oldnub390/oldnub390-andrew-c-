#include <iostream>

int main(){
int n = 1;
bool t = true;
while (t){
    std::cout<<"Введите число от 1 до 10: \n";
    std::cin>>n;
    if (n<1 || n>10){
        std::cout<<"Неправельно! Попробуй ёще раз\n";
    }
    else{
        std::cout<<"Ты ввёл "<<n<<" Вот его квадрат "<<n*n<<std::endl;
        break;
    }
}
}
