    #include<bits/stdc++.h>
    using namespace std;
     
    const long long size = 1e6+5;
    long long mod = 1e9+7;
     
    long long dp[size];
     
    int main()
    {
            long long n,k;
            cin>>n>>k;
            k--;
            long long a[n];
            long long answer=1;
            long long total=0;
            for(long long i=0;i<n;i++){
                cin>>a[i];
                total += a[i];
                answer *= 2;
                answer %= mod;
            }
            dp[0] = 1;
            for(long long i=0;i<n;i++){
                for(long long j=k-a[i];j>=0;j--){
                    dp[j+a[i]] += dp[j];
                    dp[j+a[i]] %= mod;
                }
            }
            long long temp=0;
            for(long long i=0;i<=k;i++){
                long long rem = total - i;
                if(rem <= k){
                    temp += dp[i];
                    temp %= mod;
                }
                else{
                    temp += 2*dp[i];
                    temp %= mod;
                }
            }
            answer = (answer - temp + mod)%mod;
            cout << answer << endl;
           
        return 0;
    }