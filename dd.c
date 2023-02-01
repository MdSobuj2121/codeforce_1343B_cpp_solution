#include<iostream>
using namespace std;
int main()
{
    system("COLOR F2");
    int t, i;
    cin>>t;
    while(t--)
    {
        int n, last;
        cin>>n;
        int a[n-1];
        int s = 2;
        int ls = s;
        for(i=0; i<n/2; i++)
        {
            a[i] = s;
            s = s+2;
            ls = ls+s;
        }
        ls = ls-s;
        int d =1;
        int rs =d;
        for(i=n/2; i<n-1; i++)
        {
            a[i] = d;
            d = d+2;
            rs = rs+d;
        }
    int c=0;
    last = d;
    for(i=0; ls>=rs; i=i++)
    {
        if(ls==rs)
        {
            c++;
            break;
        }
        rs = rs+2;
        last = last+2;
    }
    if(c==0)
    {
        printf("NO\n");
    }
    if(c==1)
    {
        printf("YES\n");
        for(i=0; i<n-1; i++)
        {
            printf("%d ",a[i]);
        }
        printf("%d\n",last);

    }
}
}