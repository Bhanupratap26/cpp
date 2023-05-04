#include<stdio.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void bins(int a[],int key)
{ 
    
    int n = sizeof(a) / sizeof(a[0]);
    int low = 0,high = n;
    
    
    while(low<=high)
    {
        int mid = (low + high)/2;
        if(a[mid] == key)
        {
            cout<< a[mid];
        }

        else if(key>a[mid])
        {
            low = mid +1;
        }

        else 
        {
            high = mid - 1;
        }

    }
    cout<<"not found";
}    

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
 for(int i = 0;i<n;i++)
    {
        bins(arr,8);
    }

    return 0;


}