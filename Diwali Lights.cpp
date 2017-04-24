#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

#define boost ios_base::sync_with_stdio(false)
typedef unsigned long long int nnn;

int main()
{
    nnn M = 100000;
    nnn t,n;
    cin>>t;

    while(t--)
    {
        nnn ans(1);
        cin>>n;
        for(nnn i = 0 ; i < n ; i++)
            ans = (2*(ans%M))%M;

        cout<<ans-1<<endl;
    }
    return 0;
}