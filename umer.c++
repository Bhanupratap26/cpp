#include <bits/stdc++.h>
#include <iostream>
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

     for(i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
    

    return 0;
}

