class Solution {
  public:
    int powMod(int x, int n, int M) {
        // code here
        long long result = 1;
        long long base = x % M;
        
        while (n > 0) {
            if (n & 1) {
                result=(result*base) % M;
            }
            base=(base*base) % M;
            n>>=1;
        }
        return (int)result;
    }
};