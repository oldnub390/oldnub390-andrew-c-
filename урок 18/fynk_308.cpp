#include <iostream>

using namespace std;

bool Xor (bool x, bool y);

int main(){
    bool x,y;
    cin>>x>>y;
    int otv = Xor (x,y);
    cout<<otv;
    return 0;
}

bool Xor (bool x, bool y){
    if(x == y){
        return 0;
    }
    else {
        return 1;
    }
}
