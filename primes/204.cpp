class Solution {
public:
    int countPrimes(int n) {
       int count = 0;
        vector<bool> pre(n, true);
        for(int i=2; i<=sqrt(n); i++){
            if(pre[i]){
                for(int j=i*i; j<=n; j += i) pre[j] = false;
            }
        }
        for(int i=2; i<n; i++)
            if(pre[i]) count++;
        return count;
    }
};
