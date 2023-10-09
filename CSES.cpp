#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve(int n,vector<string>ans)
{
    for(int i=0; i<(1<<n) ;i++)
    {
        int value = (i^(i/2));
        bitset<32>bt(value);
        string s = bt.to_string();
        cout<<s.substr(32-n)<<'\n';
        //ans.push_back(s.substr(32-n));
    }
}
signed main() {
    int n;cin>>n;
    vector<string>ans;
    int size = ans.size();
    solve(n,ans);
    // for(int i=0;i<size;i++)
    // {
    //     cout<<ans[i]<<'\n';
    // }
}
