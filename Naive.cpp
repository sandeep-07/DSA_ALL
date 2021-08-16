#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string st="AABAACAADAABAAABAA";
    string p = "AABA";
    int i, j,c=0;

    for (i = 0; i < st.length();i++)
    {
        int tempI = i;
        for (j = 0; j < p.length();j++)
        {
            if(p[j]!=st[tempI+j])

                break;
        }
        if(p.length()==j)
            c++;
    }
    cout << c;
  return 0;
}