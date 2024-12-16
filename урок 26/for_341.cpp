    // #include <iostream>
    // #include <cmath>

    // using namespace std;

    // int main(){
    //     int n, x=0;
    //     cin>>n;
    //     for(int i=1;i<=n/2+1;i++){
    //         if(n%i == 0){
    //             x++;
    //         }
    //     }
    //     cout<<x;
    //     return 0;
    // }

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    cin >> x;
    int count = 0;
    for (int i = 1; i <= sqrt(x); ++i) {
        if (x % i == 0) {
            count++; // i делитель
            if (i != x / i) {
                count++; // x / i также делитель, если это не i
            }
        }
    }
    cout << count << endl;
    return 0;
}
