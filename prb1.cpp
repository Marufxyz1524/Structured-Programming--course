#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            cout << " ";
        cout << A[i];
    }
    cout << "\n";

    sort(A.begin(), A.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (i > 0)
            cout << " ";
        cout << A[i];
    }
    cout << "\n";

    return 0;
}
