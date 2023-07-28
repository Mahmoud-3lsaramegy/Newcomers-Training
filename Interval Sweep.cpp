#include<iostream>

using namespace std;

int main(){
    int n, k; cin>>n>>k;
    if (n-k == 1 || k-n ==1 || n==k && n!=0)
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
}