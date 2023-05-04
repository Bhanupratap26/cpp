#include<bits/stdc++.h>
using namespace std;

bclosesttoleft(int arr[],int target)

{ 
     

   
  

}




int main()
{
    int n, k;
    cin>>n>>k;

    int arr[n];
    int query[k];

    for(int i = 1;i<=n ; i++)
    {
        cin>>arr[i];
    }

    for(int j = 1; j<=k;j++)
    {
        cin>>query[j];
    }

    for(int j = 1; j<=k;j++)
    {
         
        bclosesttoleft(arr,query[j]);  
    }
  
  

}