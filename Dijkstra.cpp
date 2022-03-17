#include<bits/stdc++.h>
#define rep(i,a,n)     for(ll i=a;i<n;i++)
#define rep3(n)        for(ll i=0;i<n;i++)
#define ll             long long
#define ll            long long
#define pb             push_back
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
#define elasped_time   1.0 * clock() / CLOCKS_PER_SEC
using namespace std;
const int inf = INT_MAX;



ll pranj()
{
  ll n,m;cin>>n>>m;
  vector<int> dist(n+1,inf);
  vector<vector<pair<int,int>>> graph(n+1);
  rep3(m)
  {
    ll u,v,w;cin>>u>>v>>w;
    graph[u].pb({v,w});
    graph[v].pb({u,w});

  }
  int so;cin>>so;
  dist[so]=0;
  set<pair<int,int>>s;
  s.insert({0,so});
  while(!s.empty()){
    auto x=*(s.begin());
    s.erase(x);
    for(auto i:graph[x.second])
    {
      if(dist[i.first]>dist[x.second]+i.second)
      {
        s.erase({dist[i.first],i.first});
        dist[i.first]=dist[x.second]+i.second;
          s.insert({dist[i.first],i.first});
      }
    }

  }
  for(int i=1;i<=n;i++)
  {
    cout<<dist[i]<<" ";
  }



return 0;




}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #ifdef NCR
    init();
    #endif
    ll t=1;//cin>>t;
    while(t--)
    {
      pranj();
    }


    return 0;
}



/*
#include<bits/stdc++.h>
#define rep(i,a,n)     for(ll i=a;i<n;i++)
#define rep3(n)        for(ll i=0;i<n;i++)
#define ll             long long
#define ll            long long
#define pb             push_back
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
#define elasped_time   1.0 * clock() / CLOCKS_PER_SEC
using namespace std;
const int inf = INT_MAX;
typedef pair<int, int> pi;

int networkDelayTime(vector<vector<int>>& times, int n, int k) {
priority_queue<pi, vector<pi>, greater<pi> > q;
vector<vector<int,int>> v(n+1);
int ans[n+1];memset(ans,-1,sizeof(ans));
vector<vector<int,int>> c(n+1);
for(int i=0;i<(int)times.size();i++)
        {
            v[times[i][0]].pb(times[i][1]);
            c[times[i][0]].pb(times[i][2]);
        }
        q.push({k,0});
while(!q.empty())
{
  auto t=q.top();q.pop();
  if(ans[t.second]!=-1)
  continue;

  ans[t.second]=t.first;
  for(int i=0;i<v[t.second];i++)
  {
    q.push({t.first+c[t.second][i],v[t.second][i]})
  }

}
int p=-1;
rep3(n+1)
{
  p=max(p,ans[i]);
}

return p;

}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #ifdef NCR
    init();
    #endif
    ll t=1;//cin>>t;
    vector<vector
    while(t--)
    {
      pranj();
    }


    return 0;
}

*/
