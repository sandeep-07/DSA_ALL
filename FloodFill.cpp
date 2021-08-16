// LIVE AND LET OTHERS LIVE.
#include <iostream>
#include<list>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);
#define vi vector<int>

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int R,C;

void floodFill(char mat[][50],int i,int j,char chToReplace,char color){
    if(i<0 or j<0 or i>=R || j>=C)
    return;

    if (chToReplace!=mat[i][j])
    {
        return;
    }
    mat[i][j]=color;

    for(int k=0;k<4;k++)
    {
        floodFill(mat,i+dx[k],j+dy[k],chToReplace,color);
    }

    


}
void printMat(char mat[][50])
{
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++)
        cout<<mat[i][j];
        cout<<endl;
    }

    
}
int main(){
    char mat[16][50];
    cin>>R>>C;
    

    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++)
        cin>>mat[i][j];
    }

    printMat(mat);
    floodFill(mat,8,13,'.','r');
    cout<<endl;
    printMat(mat);




return 0;



}