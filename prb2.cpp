#include <bits/stdc++.h>
using namespace std;

int *sort_it(int n)
{
    int *A = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    sort(A, A + n, greater<int>());

    return A;
}

int main()
{
    int n;
    cin >> n;

    int *result = sort_it(n);

    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            cout << " ";
        cout << result[i];
    }
    cout << endl;

    delete[] result;
    return 0;

    return 0;
}
