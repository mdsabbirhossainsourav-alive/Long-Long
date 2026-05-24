#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;
        long long max_sum = 0;
        int min_op = 0;
        bool ng = false;
        for(int i=0; i<n; i++) 
        {
            long long x;
            cin >> x;
            max_sum += abs(x);
            if(x < 0) 
            {
                if(!ng) 
                {
                    min_op++;
                    ng = true;
                }
            }
            else if(x > 0) 
            {
                ng = false;
            }
        }
        cout << max_sum << " " << min_op << endl;
    }
    return 0;
}