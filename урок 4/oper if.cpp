#include <iostream>

int main(){
int x;
std::cout<<"Загадка жака Фреско: скока?\n";
std::cin>>x;
if (x<=0){
    std::cout<<"меньше 0 или 0\n";
    //код выполнится если condition1 истинно
}
else if(x==1){
    std::cout<<"один\n";
    //код выполнится если condition2 истинно
}
else if(x==2){
    std::cout<<"два\n";
    //код выполнится если condition3 истинно
}
else{
    std::cout<<"многа\n";
    //код выполнится если все условия выше были ложны
}}
