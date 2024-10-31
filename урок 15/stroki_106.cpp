#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin>>s;
    int schet = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            ++schet;
        }
    }
cout<<schet+1;
    return 0;
}
