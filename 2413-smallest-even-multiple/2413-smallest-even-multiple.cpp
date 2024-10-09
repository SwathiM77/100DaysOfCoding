class Solution {
public:
    int smallestEvenMultiple(int n) {
        int lcm, gcd;
        int m = 2;
        int a=n, b=m;
        while(n>0 && m>0){
            if(n>m) n = n%m;
            else m = m%n;
        }
        if(n == 0) gcd = m;
        else gcd = n;
        lcm = (a*b)/gcd;
        return lcm;
    }
};