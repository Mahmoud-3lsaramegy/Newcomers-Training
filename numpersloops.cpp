#include <bits/stdc++.h>

using namespace std;


int main(){
    long int n =0;cin>>n; 
    if ( n <= 1 )
        {
        cout<<"-1"<<endl;
        }
    for (int i = 2; i <= n; i++)
    {
    if(i%2==0 || i == 2){
        cout<<i<<endl;
        }  
    }
}