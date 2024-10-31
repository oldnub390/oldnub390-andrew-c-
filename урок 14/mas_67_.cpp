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
        if(arr[i-1] < 0 and arr[i] < 0 or arr[i-1] >= 0 and arr[i] >= 0){ // сравниваем элемент массива с имеющимся максимумом
        ++schet;
        cout<<"YES\n";
        break;
        }
    }
if(schet == 0){
    cout<<"NO\n";
}
    return 0;
}
