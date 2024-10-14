#include <iostream>

int main() {
    int c = 0, post_fib = 1,pred_fib = 1, rez = 1, n, flag = 1;
    std::cin>>n; // число (которое тестируем)
    while(rez < n){
        rez = post_fib;
        post_fib = pred_fib;
        pred_fib = rez + pred_fib;
        c++;

        if(rez == n){
            std::cout<<c; //выводим номер
            flag  = 0;
            break;
        }
    }

    if(flag)
    std::cout<<-1;
    return 0;
}