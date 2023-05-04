#include <iostream>
using namespace std;

int main ()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int op = 5;
    int ans = 0 ;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            ans = (a[i]+ a[j]) % 5 ;
     
            cout << ans << " ";
        }
        cout << endl;
    }

    return 0;
    }