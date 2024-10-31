#include <iostream>
#include <string>

using namespace std;

int main(){
    int c = 0, k = 0;//количество элементов в массиве
    cin>>c; //ввод количества
    
    int arr[c]; // создаем массив в с элементов
    
    for(int i = 0; i < c; i++){
        cin>>arr[i];   // ввод эелементов
    }
    
    for(int i = 0; i < c; i++){
        k = arr[i];
        arr[i] = arr[c-1];
        arr[c-1] = k;
    }
    for(int i = 0; i < c; i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}
