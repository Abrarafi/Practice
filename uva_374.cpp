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
    long long b,p,m;
    while(cin>>b>>p>>m)
    {
        long long ans=binpow(b,p,m);
        cout<<ans<<endl;

    }
  }