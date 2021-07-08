#include <bits/stdc++.h>
using namespace std;
int k,n,a,c,d,b,s,num,m;
char bch,sch,symb[13] = {'!','@','#','$','%','^','&','*','(',')','<','>','?'};

main()
{
    srand(time(NULL));
    n=1;
    for(int i=1; i<=n; i++)
    {
        b=rand()%26+65;
        bch=b;
        cout<<bch;
    }
    a=1;
    for(int i=1; i<=a; i++)
    {
        s=rand()%26+97;
        sch=s;
        cout<<sch;
    }
    c=1;
    for(int i=1; i<=c; i++)
    {
        num=rand()%10;
        cout<<num;
    }
    d=1;
    for(int i=1; i<=d; i++)
    {
        cout<<symb[rand()%13];
    }
}
