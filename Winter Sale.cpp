#include <iostream>
#include<iomanip>
using namespace std ;

int main(){
   float X; long int P;cin>>X>>P;
   cout<<fixed << setprecision(2)<<P/ (1.00-(X/100));
}