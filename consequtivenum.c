#include <stdio.h>

long gcd(long x, long y)
{
  if (x == 0)
  {
    return y;
  }

  while (y != 0) {
    if (x > y) {
      x = x - y;
    }
    else {
      y = y - x;
    }
  }

  return x;
}

int main()
{
  long long n, k, hcf, lcm,value=1;
  int i=0;

  scanf("%lld", &n);

  long long int arr[n];

  for(i=0;i<n;i++)
  {
      scanf("%lld", &arr[i]);
  }

  scanf("%lld",&k);

  for(i=0;i<n;i++)
  {
     hcf = gcd(value, arr[i]);
     value = (value*arr[i])/hcf;
  }

//printf("%lld\n",value);
  printf("%lld\n",(value*k)%1000000007);

  return 0;
}


