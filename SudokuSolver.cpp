// LIVE AND LET OTHERS LIVE.
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
#define vi vector<int>

bool canPlace(int a[][9],int i,int j,int number,int n){
    for(int k=0;k<n;k++)
    {
        if(a[i][k]==number or a[k][j]==number)
        return false;
    }

    int rn=sqrt(n);
    int sx=(i/rn)*rn;
    int sy=(j/rn)*rn;

    for(int l=sx;l<sx+rn;l++)
    {
        for(int m=sy;m<sy+rn;m++)
        {
            if(a[l][m]==number)
            return false;
        }
    }

    return true;

}
bool solveSudoku(int mat[][9],int i,int j,int n){

    if(i==n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            cout<<mat[i][j]<<" ";
            cout<<endl;
        }
        return true;
    }
    if(j==n)
    return solveSudoku(mat,i+1,0,n);

    if(mat[i][j]!=0)    
    return solveSudoku(mat,i,j+1,n);
    
    // Rec Case
    for(int number=1;number<=9;number++)
    {
        if(canPlace(mat,i,j,number,n)){
            mat[i][j]=number;

            bool couldWeSolve=solveSudoku(mat,i,j+1,n);
            if(couldWeSolve==true)
            return true;
        }
    }
    mat[i][j]=0;
    return false;
}
void solve(){
    int n=9;
    int mat[9][9]={
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };

    solveSudoku(mat,0,0,n);
    

}
int main()
{
    IOS;
    int t;
    t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }

}



