#include <bits/stdc++.h>
using namespace std;

void Selection_Sort(vector<int>arr)
{
    for(int i=0;i<n;i++)
    {
        int Min_Index = i;
        for(int j =i+1; j<n; j++)
        {
            if(arr[j]<arr[Min_Index])
            Min_Index = j;
        }

        swap(arr[Min_Index],arr[i]);
        
    }
}

void bubbleSort(vector<int>&arr)
{
    int n = arr.size();
    for(int i = 1; i<n ; i++)
    // for round 1 to n-1
    {
        for(int j =0; j<(n-i); j++)
        // process element till (n-i)th index
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
    }
}

void insertion_sort(int n , vector<int>&arr)
{   
    int j; 
    for(int i =1; i<n; i++)
   {

      int temp = arr[i];

    for( j = (i-1); j>=0 ; j--)
    {
        if(arr[j] > temp)
        {
            //shift
            arr[j+1] = arr[j];
        }
        else{
            break;
        }
    }
    arr[j+1] = temp;
 

   }
}



