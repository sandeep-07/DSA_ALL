#include <iostream>
using namespace std;

void printSS(string ques, string ans){
    // write your code here
    if(ques=="")
    {
        cout<<ans<<endl;
        return;
    }
    string secToLast=ques.substr(1);
    printSS(secToLast,ans+string(1,ques[0]));
    printSS(secToLast,ans);
    
}

int main(){
    string str;
    cin >> str;
    printSS(str, "");
}