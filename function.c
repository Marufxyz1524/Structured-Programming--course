#include <stdio.h>

int sum(int num1, int num2)
{
    int ans = num1 + num2;
    return ans;
}

int main()
{

    int val = sum(56, 67);
    int val1 = sum(78, 89);
    printf("%d %d", val, val1);
    return 0;
}