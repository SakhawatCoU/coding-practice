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
int dp[1005][2];
int flag[1005];
int ara[1007];
int n;
int rec(int pos)
{
    if(pos>=n) return 0;
    int sig = 0;
    if(flag[0]==1) {
            if(pos==n-1) return 0;
            sig = 1;
    }
    int &ret = dp[pos][sig];
    if(ret!=-1) return ret;

    ret = -inf;
    for(int i = 1; i<= n-pos+1 ; i++)
    {
        ret = max(ret, rec(pos+i));
        if(i>1){
                flag[pos] = 1;
                ret = max(ret, ara[pos] + rec(pos+i));
                flag[pos] = 0;
        }
    }
    return ret;
}

int main()
{
#ifdef OVI
        // freopen("input.txt", "r", stdin);
        // freopen("output.txt", "w", stdout);
#endif // OVI

    int t, tst = 1;
    sf1(t);
    while(t--)
    {
        sf1(n);
        FOR(i, n) sf1(ara[i]);
        pcase(tst++);
        mem(dp, -1);
        pf1(rec(0));
    }
    return 0;
}














