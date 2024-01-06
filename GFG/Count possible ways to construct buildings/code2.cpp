class Solution{
public:
    int TotalWays(int n)
    {
        // Code here
        long bCount = 1 , sCount = 1;
        int mod=1000000007;

        for(int i = 2 ; i <= n ;i++){

            long newbCount = sCount;
            long newsCount = bCount%mod+sCount%mod;

            bCount =  newbCount;
            sCount =  newsCount;
        }

        long total = sCount+bCount;
        return (int)(total%mod*total%mod)%mod;
    }
};