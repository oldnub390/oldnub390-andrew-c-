#include <iostream>
#include <string>

using namespace std;

int main(){
    int c = 0, schet = 0;//количество элементов в массиве
    cin>>c; //ввод количества
    
    int arr[c]; // создаем массив в с элементов
    
    for(int i = 0; i < c; i++){
        cin>>arr[i];   // ввод эелементов
    }
    
    for(int i = 1; i < c; i++){
        if(arr[i-1] < arr[i]){ // сравниваем элемент массива с имеющимся максимумом
        ++schet;
        }
    }
    cout<<schet<<"\n";
    
    return 0;
}
