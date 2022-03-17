#include<bits/stdc++.h>
#define rep(i,a,n)     for(ll i=a;i<n;i++)
#define rep3(n)        for(ll i=0;i<n;i++)
#define ll             long long
#define ll            long long
#define pb             push_back
#define pf             push_front
#define all(v)         v.begin(),v.end()
#define endl           "\n"
#define eb             emplace_back
#define x              first
#define y              second
#define gcd(a,b)       __gcd(a,b)
#define mem1(a)        memset(a,-1,sizeof(a))
#define mem0(a)        memset(a,0,sizeof(a))
#define pres(a,x)      a.find(x)!=a.end()
#define sz(a)          (ll)a.size()
#define pii            pair<ll,ll>
#define mod            998244353
#define M              1000000007
#define elasped_time   1.0 * clock() / CLOCKS_PER_SEC
using namespace std;
const int inf = INT_MAX;


int pranj(){
  ll n,k;cin>>n>>k;
  string s;cin>>s;ll ans=0;
  rep3(n)
  {
    ll c=0;
    if(s[i]==0)
    {
      while(s[i]!=1&&i<n)
      {
        i++,c++;
      }
      ans+=c/k;
    }

  }
  cout<<ans<<endl;

  return 0;
}



signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #ifdef NCR
    init();
    #endif
    ll t;cin>>t;


    while(t--)
    {
      pranj();
      //cout<<endl;
    }


    return 0;
}
/*
1
10
0010110110
*/
