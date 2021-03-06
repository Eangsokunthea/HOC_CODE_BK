#include<iostream>
using namespace std;
long long exp_mod(long long a, long long b, long long mod){
    
    if(b==1) return a % mod; 
    long long t=exp_mod(a, b/2, mod);
    t = t*t % mod; // left part and right part.
    if (b%2) t=t*a% mod;
    return t;
}
int main(){
    long long a, b;
    scanf("%lld", &a);
    scanf("%lld", &b);
    cout<< exp_mod(a, b, 1000000007);
}
//#include<bits/stdc++.h>
//using namespace std;
//int fast_pow(long long base, long long n,long long M)
//{
//    if(n==0)
//       return 1;
//    if(n==1)
//    return base;
//    long long halfn=fast_pow(base,n/2,M);
//    if(n%2==0)
//        return ( halfn * halfn ) % M;
//    else
//        return ( ( ( halfn * halfn ) % M ) * base ) % M;
//}
//int findMMI_fermat(int n,int M)
//{
//    return fast_pow(n,M-2,M);
//}
//int main()
//{
//    long long fact[100001];
//    fact[0]=1;
//    int i=1;
//    int MOD=1000000007;
//    while(i<=100000)
//    {
//        fact[i]=(fact[i-1]*i)%MOD;
//        i++;
//    }
//    while(1)
//    {
//        int n,r;
//        printf("Enter n: ",n);
//        scanf(" %d",&n);
//        printf("Enter r: ",r);
//        scanf(" %d",&r);
//        long long numerator,denominator,mmi_denominator,ans;
//        //I declared these variable as long long so that there is no need to use explicit typecasting
//        numerator=fact[n];
//        denominator=(fact[r]*fact[n-r])%MOD;
//        mmi_denominator=findMMI_fermat(denominator,MOD);
//        ans=(numerator*mmi_denominator)%MOD;
//        printf("%lld\n",ans);
//    }
//    return 0;
//}
