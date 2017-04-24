#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

#define boost ios_base::sync_with_stdio(false)
typedef unsigned long long int nnn;

int main()
{
    nnn M = 1000000007;
    nnn t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        nnn Sn = ((n%M)*(n%M))%M;
        cout<<Sn<<endl;
    }
    return 0;
}