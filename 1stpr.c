#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int totalRows = 2 * N - 1;

    for (int i = 1; i <= totalRows; i++)
    {

        int level = (i <= N) ? i : (totalRows - i + 1);
        int width = 2 * level - 1;

        // print leading spaces
        for (int s = 1; s <= N - level; s++)
        {
            printf(" ");
        }

        // choose character
        char ch;
        if (level % 2 == 1)
            ch = '#';
        else
            ch = '-';

        // print pattern characters
        for (int j = 1; j <= width; j++)
        {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}