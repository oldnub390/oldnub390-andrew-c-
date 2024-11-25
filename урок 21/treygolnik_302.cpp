#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(a+b > c && a+c > b && c+b > a){
        if( a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a){
            cout<<"right\n";
        }
        else if(a*a + b*b > c*c && a*a + c*c > b*b && b*b + c*c > a*a){
            cout<<"acute\n";
        }
        else{
            cout<<"obtuse\n";
        }
    }
    else{
        cout<<"impossible\n";
    }
    return 0;
}
