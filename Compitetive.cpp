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

int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_map<string,int> mp;
        for(auto &i: wordList)
        {
          mp[i]++;
        }
        if(mp[endWord]==0)
        {
          return 0;
        }
        queue<string>q;
        q.push(beginWord);
        int depth=0;
        while(!q.empty())
        {
          depth++;
          //cout<<depth<<endl;
          ll level=q.size();
          while(level>0)
          {
          string t=q.front();q.pop();
          if(t==endWord)
          {
            return depth+1;
          }
          for(int i=0;i<t.length();i++)
          { char g=t[i];
            for(char c='a';c<='z';c++)
            {
              if(c==g)
              continue;
              t[i]=c;
              if(mp[t]==1)
              {
                mp.erase(t);
                q.push(t);
              }

            }
            t[i]=g;
          }
          level--;
          }
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
    vector<string> v={"hot","dot","dog","lot","log","cog"};
    string b="hot",e="cog";

    while(t--)
    {
      cout<<ladderLength(b,e,v);
    }


    return 0;
}
