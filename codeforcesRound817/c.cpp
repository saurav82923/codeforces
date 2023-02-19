#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--){
        int a;
        cin>>a;
        string s="Timur";
        string s1="";
        cin>>s1;
        sort(s.begin(),s.end());
         sort(s1.begin(),s1.end());
         if( s == s1)
            cout<< "YES"<<endl;
        else    
            cout<< "NO" << endl;
    }
    return 0;
}