class Solution{
public:
#define ll long long int
    const int mod = 1e9+7;
    int TotalWays(int n)
    {

        vector<ll> zero(n+1);
        vector<ll> one(n+1);
        zero[1] = one[1] = 1;

        for(int i=2;i<=n;i++) {
            zero[i] = zero[i-1]+one[i-1];
            zero[i] %= mod;
            one[i] = zero[i-1];
        }

        ll total = zero[n] + one[n];
        total %= mod;
        total = (total*total)%mod;
        return (int)total;
    }

};