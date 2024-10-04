#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        vector<int> A;
        int a;
        for (int j = 0; j < (2 * N); j++)
        {
            cin >> a;
            A.push_back(a);
        }
        for (int k = 0; k < (2 * N); k++)
        {
            int c = 0;
            for (int m = 0; m < (2 * N); m++)
            {
                if (A[k] == A[m])
                {
                    c++;
                    if (c > 2)
                    {
                        cout << "YES";
                        break;
                    }
                }
            }
        }
    }
}