#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s = "aab:aabaacaabaad"; //pat

    vector<int> lps(s.size(),0);

    int i=1,len=0;

    while(i<s.length()){
        if(s[i]==s[len]){
            len++;
            lps[i] = len;
            i++;
        }
        else{
            if(len>0){
                len = lps[len - 1];
            }else{
                lps[i] = 0;
                i++;
            }

        }

        
    }
    cout << count(lps.begin(),lps.end(),3);
    return 0;
}