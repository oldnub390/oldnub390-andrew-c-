//#include <iostream>

// using namespace std;

// int main(){
//     int a, b, c;
//     cin>>a>>b>>c;
//     if((a % 2 == 1 and b % 2 == 1 and c % 2 == 1) || (a % 2 == 0 and b % 2 == 0 and c % 2 == 0 )){
//         cout<<"NO\n";
//     }
//     else{
//         cout<<"YES\n";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (((abs(a) % 2 == 1) || (abs(b) % 2 == 1) || (abs(c) % 2 == 1)) && ((abs(a) % 2 == 0) || (abs(b) % 2 == 0) || (abs(c) % 2 == 0))) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
