// codestudio

#include<iostream>
using namespace std;

/*int firstOcc(int arr[] , int n, int key)
{
    int s=0 , e= n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid]==key) 
        {
            ans = mid;
            e = mid-1;
        }
        
        else if(key>arr[mid])
        {
            s =  mid +1; 
        }
        else if(key<arr[mid])
        {
            e = mid - 1;
        }

        mid = s+(e-s)/2 ;

    }
    return ans;
}*/



int last_Occ(int arr[] , int n, int key)
{
    int s=0 , e= n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid]==key) 
        {
            ans = mid;
            s = mid+1;
        }
        
        else if(key>arr[mid])
        {
            s =  mid +1; 
        }
        else if(key>arr[mid])
        {
            e = mid - 1;
        }

        mid = s+(e-s)/2 ;

    }
    return ans;
}

    int main()
    {
        int arr[5] = {1,2,3,3,5};
       // cout<<"first occurence of 3 is at index  "<<firstOcc(arr,5,3)<<endl;
        cout<<"last occurence of 3 is at index  "<<last_Occ(arr,5,3)<<endl;
    }

    /*
    codechef
    pair<int,int>firstAndLastPosition(vector<int>&arr,int n,int k)
    {
    p.fiirst = firstocc(arr,n,k);
    p.second = last_occ(arr,n,k);
       return p;
    }*/

    /*
    finnd total no. of occurence?
    x = last_Occ - firstocc;
    */


