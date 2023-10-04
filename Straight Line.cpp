#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if((y1-y2)*(x2-x3)==(y2-y3)*(x1-x2))
        cout<<"YES";
    else
        cout<<"NO";
    
    
    return 0;
}
