#include<bits/stdc++.h>
using namespace std;
typedef struct{
    long long int wt;
    long long int pf;
    double ratio;
    
}Item;
bool compare(Item i1, Item i2) {
   return (i1.ratio> i2.ratio);
}
int main()
{
    long long int n, maxw;
    double curr,profit;
    cin>>n>>maxw; 
    Item items[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>items[i].pf>>items[i].wt;
        items[i].ratio=(double) items[i].pf/items[i].wt;
        //cout<<items[i].ratio;
    }
    sort(items,items+n,compare);
    
    curr=0;
    profit=0;
    for(long long int i=0;i<n;i++)
    {
        if(curr+items[i].wt<=maxw)
        {
        profit=profit+items[i].pf;
        curr=curr+items[i].wt;
        }
        else{
            
            profit=profit+(maxw-curr)*items[i].ratio;
            curr=maxw;
            break;
        }

    }
    cout<<profit;
    return 0;
}
