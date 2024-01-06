
class Solution {
public:
    int sumOfPowersOfPrimeFactors(int n) {
        int sum = 0;

        for(int i=2; i<=sqrt(n);i++) {
            while(n%i == 0) {
                n = n/i;
                sum++;
            }
        }

        if(n != 1) sum++;
        return sum;
    }

    int sumOfPowers(int a, int b){
        // Code here
        int ans = 0;
        for(int i=a; i<=b; i++) {
            ans += sumOfPowersOfPrimeFactors(i);
        }
        return ans;
    }
};