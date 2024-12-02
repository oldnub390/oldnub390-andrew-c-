#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, e, f, S;
    cin>>a>>b>>c>>d;
    S = (c*100+d)-(a*100+b);
    e = S / 100;
    f = S % 100;
    cout<<e<<" "<<f;
    return 0;
}
