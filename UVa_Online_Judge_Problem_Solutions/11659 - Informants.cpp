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
#define seti(a, x)      (a|=(1<<x))
#define check(a, x)     (a & (1<<x))
using namespace std;
typedef long long int lint;
typedef double dbl;

int main()
{
//    freopen("input.txt", "r", stdin);
////    freopen("output.txt", "w", stdout);
    int t, tst = 1;
    int n, m;
    while(sf2(n, m)==2)
    {
        if(n==0 && m==0) return 0;
        int ara[n+1];
        mem(ara, 0);
        FOR(i, m)
        {
            int u, v;
            sf2(u, v);
            if(v<0){
                v = -v;
                ara[v] = 1;
            }
        }
        int sum = 0;
        FOR1(i, n) sum += !ara[i];
        pf1(sum);
    }
    return 0;
}














