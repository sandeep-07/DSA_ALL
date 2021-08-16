// https://www.pepcoding.com/resources/online-java-foundation/recursion-on-the-way-up/print-encodings-official/ojquestion
#include <bits/stdc++.h>

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
        cout<<asf<<endl;
        return;
    }
    // 625722
    
    // use first dig as character
    char firstChar=str[0]-'0';
    string firstEncode=s[firstChar];
    printEncoding(str.substr(1),asf+firstEncode);

    // use 2 characters as digits
    
    if(str.size()>=2)
    {
        string firstTwoDigits=str.substr(0,2);
    int digits=stoi(firstTwoDigits);
    if(digits<=26)
        printEncoding(str.substr(2),asf+s[digits]);
    }  
}

int main(){
    string str;
    cin>>str;
    printEncoding(str,"");
    
}