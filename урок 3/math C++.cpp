#include <iostream>

using namespace std;

int main(){
    int a = 3,b = 7;
    //сложение, вычитание, умножение
    cout<<a+b<<endl<<a-b<<endl<<a*b<<endl;

    //целочисленное деление
    int c = b / a;
    cout<<c<<endl;

    //остаток от числа
    cout<<b % a<<endl;

    // дробные деления
    float d = b*1.0/a;
    cout<<d<<endl;
}