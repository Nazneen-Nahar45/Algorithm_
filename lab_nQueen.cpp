#include<bits/stdc++.h>
using namespace std;
int plus45Diagonal[100], minus45Diagonal[100], row[100],n,ans[100];
void nQueen(int column)
{
    if(column>n)
    {
        for(int i=1; i<=n; i++)
        {
            cout<<ans[i]<< " ";
        }
        cout<<endl;
        return;
    }
    for(int i=1; i<=n; i++)

    {
        if(!row[i]&& !minus45Diagonal[i-column+n]&&!plus45Diagonal[i+column])
        {
            ans[column]=i;
            minus45Diagonal[i-column+n]=1;
            plus45Diagonal[i+column]=1;
            row[i]=1;
            nQueen(column+1);
            minus45Diagonal[i-column+n]=0;
            plus45Diagonal[i+column]=0;
            row[i]=0;
        }
    }

}
int main()
{
    //int t;
    //cin>>t;
    //while(t--)
   // {
   cout<<"enter number of queens"<<endl ;
        cin>>n;
        memset(plus45Diagonal, 0, sizeof plus45Diagonal);
        memset(minus45Diagonal, 0, sizeof minus45Diagonal);
        memset(row, 0, sizeof row);
        nQueen(1);
    //}
    return 0;
}

