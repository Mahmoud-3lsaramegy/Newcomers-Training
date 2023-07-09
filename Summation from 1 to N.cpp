#include <iostream>
#include<limits>
#include <list>
using namespace std;

unsigned long long  sumation(unsigned long int n = 0){
    unsigned long int l[n],sum = 0;
    for(unsigned int i=0 ; i<n ; i++){
        l[i]=i+1;
        sum +=l[i];
        }
        return sum;
}
int main(){
    long int N = 0 ;cin>>N;
    cout<<sumation(N)<<endl;
}
//runtime proplem
