#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#define i_sc(a) scanf("%d\n", &a)
#define f_sc(a) scanf("%f", &a)
#define ll_sc(a) scanf("%lld", &a)
#define c_sc(a) scanf("%c", &a)
#define s_sc(a) scanf("%s",a)
#define struct_s_sc(a) scanf("\n%[^\n]s]",a)
#define i_pr(a) printf("%d ",a)
#define f_pr(a) printf("%f",a)
#define ll_pr(a) printf("%lld ",a)
#define c_pr(a) printf("%c",a)
#define s_pr(a) printf("%s ",a)
#define MaxP 100001
#define Max(a,b) ((a) > (b) ? (a) : (b))
#define Min(a,b) ((a) > (b) ? (b) : (a))
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
void solve()
{
    int n; i_sc(n);
    char s1[3005];
    gets(s1);
    char s2[3005];
    gets(s2);
    char s3[3005];
    gets(s3);
    int k1=0,k2=0,k3=0;

    char *p1=strtok(s1, " ");
    char d1[1005][12];
    while(p1!=NULL)
    {
        strcpy(d1[k1++],p1);
        p1=strtok(NULL, " ");
    }
    char *p2=strtok(s2, " ");
    char d2[1005][12];
    while(p2!=NULL)
    {
        strcpy(d2[k2++],p2);
        p2=strtok(NULL, " ");
    }
    char *p3=strtok(s3, " ");
    char d3[1005][12];
    while(p3!=NULL)
    {
        strcpy(d3[k3++],p3);
        p3=strtok(NULL, " ");
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(d1[j][0]>d1[i][0])
            {
                char temp[12];
                strcpy(temp,d1[i]);
                strcpy(d1[i],d1[j]);
                strcpy(d1[j],temp);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        s_pr(d1[i]);
    }
    printf("\n");
}
int main()
{
    int t; i_sc(t);
    while(t--)
    {
        solve();
    }
}