#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    string S[T];

    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        string A[N];
        int num;
        vector<int> B;
        for (int m = 0; m < N; m++)
        {
            cin >> num;
            B.push_back(num);
        }
        if (B[0] == 1)
        {
            A[0] = "even";
            A[1] = "odd";
        }
        else
        {
            A[0] = "even";
            A[1] = "even";
        }

        for (int j = 1; j < N; j++)
        {
            if (j != (N - 1))
            {
                if (B[j] == 1)
                {

                    if (A[j] == "odd")
                    {
                        A[j + 1] = "even";
                    }
                    else
                    {
                        A[j + 1] = "odd";
                    }
                }
                else
                {
                    if (A[j] == "odd")
                    {
                        A[j + 1] = "odd";
                    }
                    else
                    {
                        A[j + 1] = "even";
                    }
                }
                if (B[N - 1] == 1)
                {
                    if ((A[N - 1] == "odd" && A[0] == "even") || (A[N - 1] == "even" && A[0] == "odd"))
                    {
                        S[i] = "YES";
                    }
                    else
                    {
                        S[i] = "NO";
                    }
                }
                else
                {
                    if ((A[N - 1] == "odd" && A[0] == "even") || (A[N - 1] == "even" && A[0] == "odd"))
                    {
                        S[i] = "NO";
                    }
                    else
                    {
                        S[i] = "YES";
                    }
                }
            }
            else if (N == 2)
            {

                if (B[N - 1] == 1)
                {
                    if ((A[N - 1] == "odd" && A[0] == "even") || (A[N - 1] == "even" && A[0] == "odd"))
                    {
                        S[i] = "YES";
                    }
                    else
                    {
                        S[i] = "NO";
                    }
                }
                else
                {
                    if ((A[N - 1] == "odd" && A[0] == "even") || (A[N - 1] == "even" && A[0] == "odd"))
                    {
                        S[i] = "NO";
                    }
                    else
                    {
                        S[i] = "YES";
                    }
                }
            }
            else
            {
                cout << "";
            }
        }
    }
    for (int k = 0; k < T; k++)
    {
        cout << S[k] << "\n";
    }

    return 0;
}
