#include<bits/stdc++.h>
using namespace std;


int get_sum(int*arr , int size)
{
    if(size == 0)
    {
        return 0;
    }
    if(size == 1)
    {
        return arr[0];

    }

    int remainingpart = get_sum(arr+1,size-1);
    int sum = arr[0] + remainingpart;
    return sum;
}

int main()
{
    int arr[5] = {2,4,6,8,9};
    int size = 5;

    int sum = get_sum(arr,size);

    cout<<"sum is "<<sum<<endl;
    return 0;
}