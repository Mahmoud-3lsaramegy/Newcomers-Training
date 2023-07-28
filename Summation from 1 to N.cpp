#include <iostream>
#include <vector>
#include <stdint.h>
#include<limits>
using namespace std;
int main(){
    int N = 0 ;cin>>N;
    vector <int_fast64_t> l;
      int_fast64_t  sum = 0;
        for( int i=0 ; i<N ; i++){
        l.push_back(i+1);
        sum +=l[i];
        }
        cout<<sum<<endl;
      

}

