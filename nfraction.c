#include<stdio.h>
#include<stdlib.h>
struct fraction
{
int nemo;
int demo;
};
void inputfraction(struct fraction *fr,int n)
{
int i;
for(i =0;i<=n;++i)
{
scanf("%d%d",&fr[i].nemo,&fr[i].demo);
}
}
int getgcd(int a,int b)
{
while(a!=b)
{
if(a>b)
a-=b;
else
b-=a;
}
return a;
}
struct fraction addfraction(struct fraction*fract,int n)
{
int i,gcd;
struct fraction sum;
sum.demo=1;
sum.nemo=0;
for(i=0;i<=n;++i)
{
sum.demo*=fract[i].demo;
}
for(i=0;i<=n;++i)
{
sum.nemo+=(fract[i].nemo*(sum.demo/fract[i].demo));
}
gcd=getgcd(sum.nemo,sum.demo);
sum.nemo/=gcd;
sum.demo/=gcd;
return sum;
}
int main()
{
struct fraction*frac,result;
int n;
scanf("%d",&n);
frac=malloc(n*sizeof(struct fraction));
inputfraction(frac,n);
result=addfraction(frac,n);
printf("%d%d",result.nemo,result.demo);
return 0;
}