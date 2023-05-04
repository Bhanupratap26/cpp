https://www.codingninjas.com/codestudio/problems/bubble-sort_980524?leftPanelTab=1


#include <bits/stdc++.h> 
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1;i<n;i++)
    {
        for(int j = 0;j<n-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);

            }       
        }
    }
}
