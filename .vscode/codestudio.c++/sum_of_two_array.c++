#include<bits/stdc++.h>

using namespace std;

vector<int>fin(vector<int>&a,int n , vector<int>&b , int m)
{
int i = n-1;
int j = m-1;

int carry = 0;

while(i>=0 && j>=0)
{
    int val1 = a[i];
    int val2 = b[j];

    int sum = val1 + val2 + carry;
    carry = sum/10;
    sum= sum%10; 
}
}
