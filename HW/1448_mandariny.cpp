#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n % 10 == 1 && n != 11){
        cout<<n<<" bochka\n"; 
    }
    else if((n % 10 == 2 || n % 10 == 3 || n % 10 == 4) and (n != 12 && n != 13 && n != 14)){
        cout<<n<<" bochki\n";
    }
    else{
        cout<<n<<" bochek\n";
    }
    return 0;
}