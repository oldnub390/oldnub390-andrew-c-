// #include<iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int n, m;
//     int k; //введенное число для сравнения с m-2
//     int min = 200000000; // абс разницa с m-2
//     int min_num = 0;//число с минимальной абс разницей с m-2
    
//     cin>>n>>m;
//     m-=2; //сразу привели m к нужному формату
    
//     if(n==0){
//         cout<<"False";
//     }
    
//     else{
//         for(int i = 0; i < n; i++){
//             cin>>k;
//             if(abs(k-m) < min){
//                 min = abs(k-m);
//                 min_num = k;
//                // cout<<k<<" ";
//             }
//         }
//         cout<<"\nmin: "<<min_num;
//     }
//     return 0;
// }


#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n, m;
	int k; 
	int max_n = 0;
	int num = 200000000;
	cin>>n>>m;
	m-=2;
	if(n==0){
	cout<<"False";
    }
 	else{
    	for(int i = 0; i < n; i++){
    		cin>>k;
    		if(abs(k-m) < num){
            	num = abs(k-m);
            	max_n = k;
            }
    	}
		cout<<max_n;
    }
	return 0;
}