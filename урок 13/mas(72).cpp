#include <iostream>
#include <string>

using namespace std;

int main(){
    int c = 0;//количество элементов в массиве
    cin>>c; //ввод количества
    
    int arr[c]; // создаем массив в с элементов
    
    for(int i = 0; i < c; i++){
        cin>>arr[i];   // ввод эелементов
    }
    
    int max_el = arr[0] ; // запоминаем сюда максимальный элемент
    
    for(int i = 0; i < c; i++){
        if(max_el<arr[i]){ // сравниваем элемент массива с имеющимся максимумом
            max_el=arr[i]; // если элемент больше текущего максимума, то обновляем максимум
        }
    }
    cout<<max_el<<"\n";
    
    return 0;
}
