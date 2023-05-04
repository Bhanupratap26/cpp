#include <iostream>
using namespace std;

int main() {
	// input of 2d Array
    int i,j,m,n;
    cin>>m>>n;
    int Array[n][m];

    for (i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
          cin>>Array[i][j];

       }
    }
    
    
    cout<<"output"<<"\n";
    for (i=1;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
          cout<<Array[i][j]<<" ";
          }
    cout<<"\n";
    }

   return 0;
}