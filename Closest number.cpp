#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

#define boost ios_base::sync_with_stdio(false)

long int power(long int x,long int n)
{
    if(n == 0 || x == 1)
        return 1;

    if(n%2 == 0)
        return power(x*x,n/2);

    else
        return x*power(x*x,(n-1)/2);
}

int main()
{
    long int t,a,b,x;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>x;

        if(b < 0 && a != 1)
            cout<<"0\n";
            
        else if(b < 0 && a == 1 && x == 1)
            cout<<"1\n";
        
        else if(b < 0 && a == 1 && x != 1)
            cout<<"0\n";

        else
        {
            long int val = power(a,b);
            long int quo = val/x;

            if(abs(quo*x - val) <= abs((quo+1)*x - val))
                cout<<quo*x<<endl;

            else
                cout<<(quo+1)*x<<endl;
        }
    }
    return 0;
}