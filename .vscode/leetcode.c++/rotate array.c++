#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>&nums,int k)
{
    int i = 0, j ,m = 0 ; int n = nums.size();
    while(i<k)
    {
        for(j=0 ; j<n;j++)
        {
            nums[i] = nums[i+1];
            nums[m] = nums[n-1];
        }

        i++;
    }


}

void print(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"  ";
    }
    cout<<endl; 
}

 
int main() {
    int i;
	vector<int>v;

    //initializing vecctor

    //1st method
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

    rotate(v,3);
    print(v);

  return 0;
}
