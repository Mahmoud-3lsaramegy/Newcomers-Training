#include <iostream>
using namespace std;

char un (char a){
    int n = a;
    if (n == 122)
    {
        return n-25;
    }if(n >= 97 && n < 122){
        return ++n;
    }else{
        return 'N';
    }
}
/*
int main(){
    cout<<"Enter char:";
    char a ; cin>>a;
    cout<<un(a)<<"\n";
    return 0;
}*/