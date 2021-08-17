// https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/maximum-sum-non-adjacent-elements-official/ojquestion

#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int incl[n+1]={0};
    int excl[n+1]={0};
    incl[0]=0;
    excl[0]=0;

    for(int i=1;i<=n;i++){
        // include at i
        incl[i]=max(excl[i-1]+a[i-1],incl[i]);
        
        // exclude at i
        excl[i]=max(incl[i-1],excl[i-1]);
        
    }
    // for(int i:incl)
    // cout<<i<<" ";
    // cout<<endl;
    // for(int i:excl)
    // cout<<i<<" ";
    // cout<<endl;
    cout<<max(incl[n],excl[n]);
    
    
    
    
    return 0;
}
