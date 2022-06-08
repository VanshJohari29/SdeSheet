// Using direct approach ( built in function )
class Solution {
public:
    double myPow(double x, int n) {
        
        double  ans = pow(x,n);
        return ans;
        
    }
};
//using 2 approach
class Solution {
public:
    double myPow(double x, long int n) {
        double res=1;
        int sign=1;
        if(n<0){
            n=-n;
            sign = -1;
        }
        while(n>0){
            if (n % 2 == 1)
            {
                res *= x;
            }
            x *= x;
            n /= 2;
        }
        if(sign == -1) res = 1/res;
        return res;  
    }
};
