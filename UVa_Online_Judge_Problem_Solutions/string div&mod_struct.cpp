#include<stdio.h>

struct div_mod
{
    int mod;
    char div[1010];

};
div_mod str_mod(char ara[], int n);
int main()
{
    int t,n;
    div_mod b;
    char str[1010];

    scanf("%d",&t);
    while(t--)
    {

        scanf("%s %d",str, &n);
        b=str_mod(str,n);
        printf("%s %d\n",b.div,b.mod);

    }
    return 0;
}

div_mod str_mod(char ara[], int n)
{
    int i,j,flag=0,temp,div;
    div_mod a;
    a.mod=0;
    for(i=0,j=0; ara[i]; i++)
    {
        temp=((a.mod*10)+ara[i]-'0');
        div=temp/n;
        if(!flag && div)flag=1;
        if(flag)
        {
            a.div[j]=div+'0';
            j++;
        }
        a.mod=temp%n;
    }
    if(j==0){a.div[j]='0';j++;}
    a.div[j]=0;
    return a;
}
