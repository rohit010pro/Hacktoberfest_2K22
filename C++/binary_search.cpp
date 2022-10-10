#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int beg,int end,int item)
{
    int mid;
    if(beg<=end){
    mid=(beg+end)/2;
    if(arr[mid]==item)
    {
        return mid;
    }

    else if(item>arr[mid])
    {
        return binarysearch(arr,mid+1,end,item);
    }
    else{
        return binarysearch(arr,beg,mid-1,item);
    }
    }
    
    return -1;
    
}
int main()
{
    int n,m,pos;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>m;
    int search[m];
    for(int i=0;i<m;i++)
    {
        cin>>search[i];
        pos=binarysearch(arr,0,n-1,search[i]);
        cout<<pos<<" ";
    }
    
    return 0;
}
