#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
using namespace __gnu_cxx;
template <typename T>
using oset = tree<T, null_type, less<T>,rb_tree_tag, tree_order_statistics_node_update>;
mt19937 rng(chrono::system_clock::now().time_since_epoch().count());
uniform_int_distribution<int> random(1, 1000000);
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ok cout<<"ok"<<endl<<flush;
#define endl '\n'
#define INF 1e16
const ll M =1e9+7;
const ll N =1e5+1;
void debug(vector<ll>&v){for(auto it:v){cout<<it<<" ";}cout<<endl;}
ll n,m;
int32_t main()
{
    fast
    ll i,j,k,p,q,tc=1,cs=0;cin >> tc;
    while(tc--)
    {
        cin>>n;
        ll mn=LLONG_MAX,mx=0,sum=0;
        vector<ll>v(n);
        i=0;
        for(auto &it:v)
        {
            cin>>it;
            i++;
            sum+=it;
            mn=min(mn,sum/i);
        }i=0;sum=0;
        reverse(v.begin(),v.end());
        for(auto &it:v)
        {
            i++;
            sum+=it;
            mx=max(mx,sum/i+(sum%i?1:0));
        }
        cout<<mx-mn<<endl;
    }
}
/*
Idea from Rashed.23 s code
এই প্রবলেমটায় অপারেশন এমন,যে আগের যেকোন ইন্ডেক্স থেকে xকমায়ে পরের যেকোন ইন্ডেক্সের সাথে 
x যোগ করা যাবে। 

তারমানে আগের গুলা কখনোই বাড়বে না, আর পরের গুলা কখনোই কমবে না টাইপ সিচুয়েশন। 
এই ক্ষেত্রে মিনিমাম ডিফারেন্স নির্ণয়ের টেকনিকটা অনেক কাজে আসবে।
*/
