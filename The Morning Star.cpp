#include <bits/stdc++.h>
 
using namespace std;
 
void fastIO(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
 
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--){
        int n;
        long long m=0;
        cin>>n;
        map<int, int>freq_x ,freq_y ,freq_sum ,freqx_sub ;
        for(int i=0;i<2*n;i +=2){
            int x,y;
            cin>>x>>y;
            // freq_x & freq_y  for the four cardinal directions (N, S, E, W)
            /* freq_sum & freqx_sub for combination (NW, NE, SW, SE) 
            note : the 2 point will equal in one of them if that happen it will be one of combination (NW, NE, SW, SE)*/
            m +=freq_x[x];
            freq_x[x]++;
            
            m +=freq_y[y];
            freq_y[y]++;
            
            m +=freq_sum[x+y];
            freq_sum[x+y]++;
            
            m +=freqx_sub[x-y];
            freqx_sub[x-y]++;
        }
        
        cout<<2*m<<'\n';
    }
 
    return 0;
}
