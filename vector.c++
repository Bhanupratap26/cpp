#include <bits/stdc++.h>
#include<vector>
using namespace std;
 
int main() {
    int i;
	vector<int>v;

    //initializing vecctor

    //1st method
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

    //2nd method
    vector<int> v2(3,50);
    //50 50 50
 
	//first method to trace elements
    for(i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}

    //2nd method
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }

    
    //3rd Method
     for(auto element:v)
    {
        cout<<element<<endl;
    }

    //use to remove the last element
    v.pop_back()
    return 0;

    //swap the elements of v amd v2
    swap(v,v2)

    int main()
{
   int n, a;
   cin >> n;
   vector<int> arr;
   for (int i = 0; i < n; i++){
       cin >> a;
       arr.push_back(a);    
   }

   // 2d vector

   #include <iostream>
#include <vector>
using namespace std;
  
int main()
{
    /*
    Below we initialize a 2D vector 
    named "vect" on line 12 and then
    we declare the values on 
    line 14, 15 and 16 respectively.
    */
      
    vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
      
    
     for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }    
        cout << endl;
    }
  
    return 0;
}