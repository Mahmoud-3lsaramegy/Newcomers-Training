# include <iostream>
using namespace std;
int main(){
    int n ; cin>> n;
    string words[n] ;
    for (int i = 0; i < n; i++)
    {
        string word ;  cin>>word;
    if (word.size() <= 10 )
    {
        words[i] = word;
    }else if (word.size()> 10)
    {
       words[i] = word[0] + to_string( word.size() - 2 ) + word[word.size()-1];
    } }
         for (int i = 0; i < n; i++)
         {
            cout<<words[i]<<endl;
         }
         
}   
