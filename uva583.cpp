#include<bits/stdc++.h>
using namespace std;
const int N=1e5+123;
bool isprime[N];
vector<int> prime;
void primegen(int n)
{
    n+=100;
    isprime[2]=1;prime.push_back(2);
    for(int i=3;i<=n;i+=2)isprime[i]=1;

    for(int i=3;i<sqrt(n);i+=2)
    {
        if(isprime[i]==1)
        {
           for(int j=i*i;j<=n;j+=(i+i))isprime[j]=0;
        }
    }

    for(int i=3;i<=n;i+=2)
    {
        if(isprime[i])
        {
            prime.push_back(i);
        }
    }
}

vector<long long> prime_factors(long long n)
{
    vector<long long> ret;
    for(auto p:prime)
    {
        if(1LL*p*p>n)break;

        while(n%p==0)
        {
            ret.push_back(p);
            n/=p;
        }
    }
    if(n>1)ret.push_back(n);
    return ret;
}

int main()
{
    long long n;
    primegen(1e5);
    while(cin>>n && n!=0)
    {
        cout<<n<<" = ";
        if(n<0)
        {
            cout<<"-1"<<" x ";
            n*=-1;
        }
        vector<long long>ans=prime_factors(n);
        
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]; i!=ans.size()-1?cout<<" x ":cout<<endl;;
        }
    }
}