
class Solution{
public:
    long long int maxSumWithK(long long int a[], long long int n, long long int k)
    {
        long long int ans = -1e6;
        long long int leftPointer = 0;
        long long int rightPointer = k;
        long long int kadanesArray[n];
        kadanesArray[0] = a[0];
        long long int currentMax = a[0];

        for(long long int index = 1; index < n; index++) {
            currentMax = max(a[index], currentMax+a[index]);
            kadanesArray[index] = currentMax;
        }
        long long int currentWindow = 0;
        for(long long int index = 0; index < k; index++) {
            currentWindow += a[index];
        }

        ans = max(ans, currentWindow);

        while(rightPointer < n && leftPointer < n) {
            currentWindow = currentWindow - a[leftPointer++] + a[rightPointer++];
            ans = max(ans, currentWindow);
            ans = max(ans, currentWindow + kadanesArray[leftPointer-1]);
        }

        return ans;
    }
};