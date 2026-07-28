#include <vector>
using namespace std;

class Solution {
  public:
  
    double power(double b, int e) {

        // Base Case
        if (e == 0)
            return 1.0;

        long long exp = e;

        // Handle negative exponent
        if (exp < 0) {
            b = 1 / b;
            exp = -exp;
        }

        return solve(b, exp);
    }

  private:

    double solve(double b, long long e) {

        if (e == 0)
            return 1.0;

        double half = solve(b, e / 2);

        if (e % 2 == 0)
            return half * half;

        return b * half * half;
    }
};