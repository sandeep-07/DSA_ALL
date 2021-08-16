#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> allIndex(vector<int>& arr, int idx, int x, int count)
{
    if(idx==arr.size())
    {
        vector<int> bc;
        return bc;
    }
    vector<int> temp;
    temp=allIndex(arr,idx+1,x,count);
    if(arr[idx]==x)
    temp.insert(temp.begin(),idx);
    // if(temp.size()>=1)
    // reverse(temp.begin(),temp.end());
    return temp;




    

}

int main() {
  int n ;
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n; i++) {
    int d;
    cin >> d;
    arr.push_back(d);
  }
  int data;
  cin >> data;
  vector<int> ans = allIndex(arr, 0, data, 0);
  if (ans.size() == 0) {
    cout << endl;
    return 0;
  }
  for (int ele : ans) cout << ele << endl;

  return 0;
}