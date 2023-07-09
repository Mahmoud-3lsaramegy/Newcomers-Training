#include<iostream>
using namespace std;
int main() {
    int n; cin>>n;
    if (n % 10 != 0)
    {
    int x =n/10;
    int y =n%10;
    if (x % y == 0 || y % x == 0)
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }    
    }else
    {
        cout<< "YES" ;
    }
}
