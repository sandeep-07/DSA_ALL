//  https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/count-a+b+c+subsequences-official/ojquestion

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string s;
    cin>>s;
    int a=0,b=0,c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a'){
            a=2*a+1;
        }
        else if(s[i]=='b'){
            b=2*b+a;
        }
        else{
            c=2*c+b;
        }
    }
    cout<<c;
    
    return 0;
}