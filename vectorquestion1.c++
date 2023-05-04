
#include<vector>
using namespace std;
int main()
{
  int n,m;
cin>>n>>m;
vector<int>X(m);
  vector<vector<int>>A(n,X);

for(int i=0;i<n;i++)
{
 for(int j=0;j<=i;j++)
 {
   cin>>A[i][j];
}
}

for(int i=0;i<m;i++)
{
  for(int j=0;j<n;j++)
  {
  	if(j<i)
  	{
  		j=i;
  	}
    cout<<A[j][i]<<" ";
  }
  cout<<"\n";
  
}

    return 0;
}