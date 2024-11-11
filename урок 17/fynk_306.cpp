#include <iostream>
using namespace std;

int min(int a, int b, int c, int d);


int main(){
    int a,b,c,d, min_num = 0; //минимальное число и ряд из сравниваемых чисел
    cin>>a>>b>>c>>d;
    
    min_num = min(a,b,c,d);
    cout<<min_num;
    return 0;
}

int min(int a, int b, int c, int d){
    if(a<=b && a<=c && a<=d){
        return a;
    }
    else if(b<=a &&  b<=c  &&  b<=d){
        return b;
    }
    else if(c<=b && c<=a && c<=d){
        return c;
    }
    else{
        return d;
    }
}
