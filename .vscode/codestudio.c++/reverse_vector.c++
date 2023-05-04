#include<iostream>
using namespace std;
#include<vector>

void reverse(vector<int> v)
{
    int s= 0 , e = v.size()-1;
    while(s<=e)
    {
        swap(v[s],v[e]);
        cout<<s<<"  "<<e<<endl;
        s++;
        e--;
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


int main()
{

     int n, a;
   cin >> n;
   vector<int> arr;
   for (int i = 0; i < n; i++){
    cin >> a;
    arr.push_back(a);    
   }

   vector<int> reverse(arr);

   print(arr);
   return 0;
}

