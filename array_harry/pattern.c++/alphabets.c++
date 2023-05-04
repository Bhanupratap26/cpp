#include<iostream>
using namespace std;


/*int main()
{
    int n ;
    cin>>n;

    int row =1;
    while(row<=n)
    {
      int col = 1;
        while(col<=n)
        {
         char ch = 'A' +  row - 1;
         cout<<ch<<"  ";
         col = col + 1 ;
        }
        cout<<endl;
        row = row + 1;
    } 
}*/

int main()
{
    int i , j  , n ;
    cin>>n;
    i=1;

    while(i<=n)
    {
        j=1;
      while(j<=n)
      {
        char ch = 'A'+j-1;
        cout<<ch<<"  ";
        j=j+1;
      } 
      cout<<endl; 

      i=i+1;
    }

}
