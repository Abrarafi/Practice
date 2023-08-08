  #include<bits/stdc++.h>
  using namespace std;

long long binpow(long long a, long long b,long long n) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%n;
        a = (a * a)%n;
        b >>= 1;
    }
    return res;
}

  int main()
  {
    int t;cin>>t;
    while(t--)
    {
        long long x,y,n;cin>>x>>y>>n;
        long long ans=binpow(x,y,n);
        cout<<ans<<endl;

    }
    int o;cin>>o;
    return o;
  }