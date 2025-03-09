#include <bits/stdc++.h>
using namespace std;

int main() {
  int h,m,t, all_min;
  cin>>h>>m>>t;
  
  all_min = h*60+m+t;
  all_min %=1440; //190
  h = all_min/60;
  m = all_min%60;
  
  if(h>9 and m>9){
      cout<<h<<":"<<m;
  }
  else if(h>9 and m<10){
      cout<<h<<":0"<<m;    
  }
    else if(h<10 and m>9){
        cout<<"0"<<h<<":"<<m;
    }
    else{
        cout<<"0"<<h<<":0"<<m;
    }
    
    return 0;
}
