// https://www.pepcoding.com/resources/online-java-foundation/recursion-on-the-way-up/print-kpc-official/ojquestion#
#include <bits/stdc++.h>
using namespace std;

string codes[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

vector<string> printKPC(string ques){
    if(ques=="")
    {
        vector<string> bc{""};
        return bc;
    }
    
    vector<string> onetolast=printKPC(ques.substr(1));
    vector<string> ans;
    int fst=ques[0]-'0';
    for(char x:codes[fst])
    
    {
        for(string y:onetolast){
            string z(1,x);
            ans.push_back(z+y);
        }
    }
    return ans;
}

int main(){
    string str;
    cin >> str;
    vector<string> ans=printKPC(str);
    for(string s:ans)
    cout<<s<<endl;
}