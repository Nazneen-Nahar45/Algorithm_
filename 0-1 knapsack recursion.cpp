#include<bits/stdc++.h>
using namespace std;
int w[1000],value[1000],n,maxw;

int knapsack(int index,int weight)
{
    //cout<<index<<endl;
    if(index==n+1) return 0;
    int profit1=0,profit2=0;
    if(weight+w[index]<=maxw)
        profit1=value[index]+knapsack(index+1,weight+w[index]); // taken
    profit2=knapsack(index+1,weight);// not taken
    return max(profit1,profit2);
}
int main()
{
    cin>>n>>maxw;
    for(int i=0; i<n; i++)
    {
        cin>>w[i]>>value[i];


    }
    cout<<knapsack(0,0)<<endl;

    return 0;
}

/*Weight: 2, Value: 3
Weight: 3, Value: 4
Weight: 4, Value: 5 */

//Recursion tree sample - please complete the tree according to the logic at home

 /*                   (0,0)
                   /         \
          (1,2)                (1,0)
        /       \           /       \
  (2,5)           (2,2)    (2,3)    (2,0)
   /   \        /   \      /   \       /   \
(3,9) (3,5)  (3,6) (3,2) (3,7) (3,3) (3,4) (3,0) */



