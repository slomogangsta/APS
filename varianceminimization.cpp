    #include<bits/stdc++.h>
    using namespace std;
    int n;
    int x[10005], y[10005];
    long long fun(long long x, long long y, long long sumX, long long sumY, long long sumX2, long long sumY2)
    {
        sumX += x, sumY += y;
        sumX2 += x*x, sumY2 += y*y;
        return (sumX2 + sumY2) * n - 2LL * (sumX*sumX + sumY*sumY) + (sumX*sumX + sumY*sumY);
    }
    int main()
    {
        int t;
        scanf("%d", &t);
        while(t--)
        {
            scanf("%d", &n);
            long long xSum = 0, ySum = 0, xSum2 = 0, ySum2 = 0;
            for(int i=1; i<=n; i++)
            {
                scanf("%d %d", &x[i], &y[i]);
                xSum+= x[i], ySum+= y[i];
                xSum2+= (long long) x[i]*x[i];
                ySum2+= (long long) y[i]*y[i];
            }
            long long ans = (long long)1e18;
            for(int i=1; i<=n; i++)
            {
                long long currX = xSum - x[i];
                long long currY = ySum - y[i];
                long long currX2 = xSum2 - (long long)x[i]*x[i];
                long long currY2 = ySum2 - (long long)y[i]*y[i];
                ans = min(ans, fun(currX/(n-1), currY/(n-1), currX, currY, currX2, currY2));
                ans = min(ans, fun(currX/(n-1)+1, currY/(n-1), currX, currY, currX2, currY2));
                ans = min(ans, fun(currX/(n-1), currY/(n-1)+1, currX, currY, currX2, currY2));
                ans = min(ans, fun(currX/(n-1)+1, currY/(n-1)+1, currX, currY, currX2, currY2));
            }
            printf("%lld\n", ans);
        }
        return 0;
    }