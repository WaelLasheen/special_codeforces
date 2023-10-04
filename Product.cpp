#include <iostream>
using namespace std;

int main()
{
    int l,r,x;
    cin>>l>>r>>x;
    long long p=1;
    for(int i=l;i<=r;i++)
        p= (p*i)%x;
    cout<<p;
    return 0;
}
