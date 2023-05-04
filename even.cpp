#include<iostream>
using namespace std;

/*
int main()
{   int n;
   for(n=0;n<=10;n++)
    {


        if(n%2==0)
        {
            cout<<n<<" is even"<<"\n";
        }
        else
        {
            cout<<n<<" is odd"<<"\n";
        }

       

    }
}

int main()
{
    int n=0;

    while(n<=10)
    {


        if(n%2==0)
        {
            cout<<n<<" is even"<<"\n";
        }
        else
        {
            cout<<n<<" is odd"<<"\n";
        }

      n++;
    }

}   */



const int N=100;
 
//countNumberOfTimesTargetIsInDiagonal containing row, col
int countNumberOfTimesTargetIsInDiagonal(int n, int A[][N], int row, int col, int target){
	int ans=0;
    for(int i = row,j=col;i>0,j<n;i++,j++)
    {
        if(A[i][j]==target)
        {
            ans++;
        }
    }

    for(int i = row,j=col;i<n,j>=0;i++,j++)
    {
        if(A[i][j]==target)
        {
            ans++;
        }
    }

	return ans;
}
 
int main() {
	int n;
	cin>>n;
	int A[N][N];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            cin>>A[i][j];
        }
    }
	cout<<"Ans: "<<countNumberOfTimesTargetIsInDiagonal(n, A, 1, 2, 2)<<endl;
	return 0;
}
