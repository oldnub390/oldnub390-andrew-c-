#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n % 10 == 1 && n != 11){
        cout<<n<<" korova\n"; 
    }
    else if((n % 10 == 2 || n % 10 == 3 || n % 10 == 4) and (n != 12 && n != 13 && n != 14)){
        cout<<n<<" korovy\n";
    }
    else{
        cout<<n<<" korov\n";
    }
    return 0;
}