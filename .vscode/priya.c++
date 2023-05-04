#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    int arr[n];
 
    int start = 0;
    int end = n - 1;
    int mid = 0;
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    int target;
    cin >> target;
 
    cout << "target is " << target<<endl;
 
    for(int i=0;i<n;i++)
    {
        mid = (start + end) / 2;
        cout<<"the start is"<<" "<<start<<" ";
        cout<<"and the end is"<<" "<<end<<endl;
        if (target == arr[mid])
        {
            cout << "Found at " << mid;
            if(target<arr[mid]){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        
        
    }
    return -1;
}