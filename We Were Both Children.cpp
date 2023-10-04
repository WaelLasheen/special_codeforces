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
        int n,m=0;
        cin>>n;
        map<long long,int> freq,jumps;
        for(int i=0;i<n;i++){
            long long jump;
            cin>>jump;
            freq[jump]++;
        }
        for(auto i:freq){
            for(int j=i.first;j<=n;j +=i.first){
                jumps[j] +=i.second;
                m=max(m,jumps[j]);
            }
        }
        cout<<m<<'\n';
    }
 
    return 0;
}
