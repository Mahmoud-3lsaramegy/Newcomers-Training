#include<iostream>
using namespace std;
int main() {
    int n =255;
    string x  = to_string(n); 
    char c =x[x.length()-1];
    cout<<stoi(c) +1;
}