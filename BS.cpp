#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int R[T];
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        vector<int> A;
        int a, m1, m2, i1;
        for (int j = 0; j < N; j++)
        {
            cin >> a;
            A.push_back(a);
        }
        for (int k = 0; k < N; k++)
        {
            if (*max_element(A.begin(), A.end()) == A[k])
            {
                m1 = A[k];
                i1 = k;
                break;
            }
        }
        sort(A.begin(), A.end());
        int minDiff = A[1] - A[0];

        for (int i = 2; i < A.size(); i++)
        {
            int currentDiff = A[i] - A[i - 1];
            minDiff = min(minDiff, currentDiff);
            
        }
        A.erase(A.begin()+i1);
        m2=*max_element(A.begin(),A.end());
        R[i] = ((m2 + m1) - minDiff) - 1;
    }
    for (int j = 0; j < T; j++)
    {
        cout << R[j] << "\n";
    }
    return 0;
}
