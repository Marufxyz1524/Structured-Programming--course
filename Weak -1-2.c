#include <stdio.h>
/*int main()
{
    int a, b, c;
    printf("Enter your three numbers: ");
    scanf("%d , %d ,%d", &a, &b, &c);

    (a > b && a > c) ? printf("Max number is --> A") : (b > a && b > c) ? printf("Max number is --> B")
                                                                        : printf("Max number is --> C");

    return 0;
}
    */
int main()
{
    double A, B, avrg;
    scanf("%lf %lf ", &A, &B);
    avrg = (A + B) / 2;
    printf("MEDIA = %.4lf", avrg);

    return 0;
}