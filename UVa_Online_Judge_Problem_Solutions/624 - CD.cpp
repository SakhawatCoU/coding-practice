/*
OVISHEK PAUL, CSE - 15, SUST

*/

#include<bits/stdc++.h>
#define pii             pair<int,int>
#define mkp             make_pair
#define fs              first
#define sc              second
#define pb              push_back
#define ppb             pop_back()
#define pf              printf
#define pf1(a)          printf("%d\n",a)
#define hi              printf("hi!\n");
#define sf              scanf
#define sf1(a)          scanf("%d",&a)
#define sf2(a,b)        scanf("%d %d",&a,&b)
#define sf3(a,b,c)      scanf("%d %d %d",&a,&b,&c)
#define sf1ll(a)        scanf("%lld",&a)
#define sf2ll(a,b)      scanf("%lld %lld",&a,&b)
#define sf3ll(a,b,c)    scanf("%lld %lld %lld",&a,&b,&c)
#define pcase(x)        printf("Case %d: ",x)
#define MOD             1000000007
#define inf             1000000007
#define pi              acos(-1.0)
#define mem(arr,x)      memset((arr), (x), sizeof((arr)));
#define FOR(i,x)        for(int i=0;i<(x); i++)
#define FOR1(i,x)       for(int i=1;i<=(x); i++)
#define mx              100007

using namespace std;
typedef long long int lint;
typedef double dbl;
int n, m;
int maxi = 0;
vector<int> ans, vt;
int ara[70];
void rec(int pos, int sum)
{
    if(pos==n)
    {
        if(maxi<sum && sum<=m)
        {
            maxi = sum;
            ans = vt;
        }
        return;
    }
    vt.pb(ara[pos]);
    rec(pos+1, sum+ara[pos]);
    vt.ppb;

    rec(pos+1, sum);
}
int main()
{
    int t, tst = 1;
    while(sf2(m, n)==2)
    {
        FOR(i, n) sf1(ara[i]);
        ans.clear();
        maxi = 0;
        rec(0, 0);
        FOR(i, ans.size()) {
            pf("%d ", ans[i]);
        }
        pf("sum:%d\n", maxi);
    }

    return 0;
}














