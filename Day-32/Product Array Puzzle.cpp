#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int n = a.size();
        vector<int> r(n, 1);

        int p = 1;
        for (int i = 0; i < n; i++) {
            r[i] = p;
            p *= a[i];
        }

        int s = 1;
        for (int i = n - 1; i >= 0; i--) {
            r[i] *= s;
            s *= a[i];
        }

        return r;
    }
};