// factorial upto 2
long long factorial(long long n) {
    if(n == 0 || n == 1) return 1;
    if(n == 2) return 2;
}

// multiply from start to end
long long mul(long long start, long long end) {
    long long ans = 1;
    for(long long num = start; num<= end; num++) {
        ans *= num;
    }
    return ans;
}

//
long long int countStr(long long int n){
    //complete the function here
    long long ans = 0;

    for(long long i = 0; i <= 1; i++) {
        for(long long j = 0; j <= 2; j++) {
            long long start = n-i-j+1;
            long long end = n;
            long long current = 0;
            if(start <= end) {
                current = mul(start,end)/factorial(j);
            }
            ans += current;
            //   cout << "i, j , cuurent" << i << ", " << j << ", " << current << endl;
        }
    }

    return ans+1;
}