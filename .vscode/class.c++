#include <iostream>
using namespace std;

int main() {
	int n , number;
	cin>>n;
	string name;
	unordered_map<string,int>marks;
	for(int i = 0; i<n; i++)
	{
		cin>>name>>number;
		marks[name] = number;
	}
	
	cout<<"marks"<<marks["dev"]<<endl;
	
	
	
	
	return 0;
}