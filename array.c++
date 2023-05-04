#include<iostream>
using namespace std;

int main()
{

//initiaalizing array

/*  method 1
  int array[5] = {5,10,11,44,56};
    cout<<array[4]<<endl;
*/

/*method 2
 int array[0]=5;
 int array[1]=10;

 int array[2]=11;
  return 0;   
}*/

/*int n,i;
cin>>n;
int array[n];

for(i=0;i<n;i++)
{
    cin>>array[i];
    
}


    cout<<array[1];
    



return 0;
}*/

int n,i,sum=0,s;
cin>>n;
int array[n];

for(i=0;i<n;i++);
{
    cin>>array[i];
}

for(i=0;i<n;i++);

{
    sum = sum + array[i];
}
cout<<sum<<endl;
return 0;

}