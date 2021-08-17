// https://www.pepcoding.com/resources/online-java-foundation/recursion-on-the-way-up/print-encodings-official/ojquestion
#include <iostream>
#include<string>
using namespace std;
string s[]={"","a","b","c","d","e","f","g",
    "h","i","j","k","l","m",
    "n","o","p","q","r","s","t",
    "u","v","w","x","y","z"
};
void printEncoding(string str, string asf){
    // write your code here
    if(str=="")
    {
        // 655196
        cout<<asf<<endl;
        return;
    }
    if(str[0] == '0'){
        return;
    }
    // use first dig as charactrer
    int firstDig=str[0]-48;
    string corrsString=s[firstDig];
    printEncoding(str.substr(1),asf+corrsString);
    // use starting two as string
    if(str.size()>=2)
    {
        int num=stoi(str.substr(0,2));
        if(num<=26)
        {
            string numToStringCorrs=s[num];
            printEncoding(str.substr(2),asf+numToStringCorrs);
        }
        
    }
    
}

int main(){
    string str;
    cin>>str;
    printEncoding(str,"");
    
}

