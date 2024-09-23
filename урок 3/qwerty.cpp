#include <iostream>

using namespace std;

int a = 1;//глобальнная

int main(){
    int c = 2;
    int b = 4;

        {
            int c = 3;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
}