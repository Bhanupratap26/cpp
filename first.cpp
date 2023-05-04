#include <iostream>
#include <cstdio>
using namespace std;

//int max_of_four(int , int , int , int);

int max_of_four(int a , int b, int c , int d )
{
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                cout<<a<<endl;
            }
            else
            {
                cout<<d<<endl;
            }
        }   
         else
         {
             if(c>d)
            {
                cout<<c<<endl;
            }
            else
            {
                cout<<d<<endl;
            }
         }   
        
    }
    
    
    else
    {
       if(b>c)
        {
            if(b>d)
            {
                cout<<b<<endl;
            }
            else
            {
                cout<<d<<endl;
            }
        }   
         else
         {
             if(c>d)
            {
                cout<<c<<endl;
            }
            else
            {
                cout<<d<<endl;
            }
         }   
        
    } 
    
}

int main() {
    int p, q, r, s;
    cin>>p>>q>>r>>s;
    int ans = max_of_four(p,q,r,s);
    cout<<ans<<endl;
    
    return 0;
}
