double findNthRootOfM(int n, long long m) {
double error = 1e-7;

   
    double diff = 1e18;

    
    double ans = 2;

    
    while (diff > error) {

   
        double ans_1 = (pow(ans, n) * (n - 1) + m) / (n * pow(ans, n - 1));

     
        diff = abs(ans - ans_1);

        
        ans = ans_1;
    }

    
    return ans;
}
