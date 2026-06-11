#include <bits/stdc++.h>
using namespace std;

struct Student
{
    int id, marks;
    string name;
    char section;
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Student s[3];

        for (int i = 0; i < 3; i++)
        {
            cin >> s[i].id >> s[i].name >> s[i].section >> s[i].marks;
        }

        int best = 0;
        for (int i = 1; i < 3; i++)
        {
            if (s[i].marks > s[best].marks)
            {
                best = i;
            }
            else if (s[i].marks == s[best].marks && s[i].id < s[best].id)
            {
                best = i;
            }
        }

        cout << s[best].id << " " << s[best].name << " "
             << s[best].section << " " << s[best].marks << "\n";
    }

    return 0;
}
