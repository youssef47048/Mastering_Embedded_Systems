/*EX7:
it is an interview trick

Write Source Code to Swap Two Numbers without temp variable.
*/
#include <stdio.h>
void swap(float &a, float &b)
{
}
int main()
{
    float n, m;
    printf("Enter value of n: ");
    fflush(stdout);
    fflush(stdin);
    scanf("%f", &n);
    printf("Enter value of m: ");
    fflush(stdout);
    fflush(stdin);
    scanf("%f", &m);
    n = n + m;
    m = n - m;
    n = n - m;

    printf("After swapping, value of n = %f \n", n);
    printf("After swapping, value of m = %f", m);
    return 0;
}