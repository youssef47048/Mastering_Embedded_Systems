/*EX6:

Write Source Code to Swap Two Numbers

#########Console_output######
Enter value of a: 1.20
Enter value of b: 2.45

After swapping, value of a = 2.45
After swapping, value of b = 1.2
#############################
########################################################################*/
#include <stdio.h>
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
    float temp = n;
    n = m;
    m = temp;
    printf("After swapping, value of n = %f \n", n);
    printf("After swapping, value of m = %f", m);
    return 0;
}