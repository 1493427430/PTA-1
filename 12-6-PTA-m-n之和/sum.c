#include <stdio.h>

int sum(int m, int n);
sum(int m, int n) {
    int sum = 0,i=0;
    if (m < n) {
        i = m;
        m = n;
        n = i;
    }
    while (n < m) {
        sum += ++n;
    } 
    return sum;
}
int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    printf("sum = %d\n", sum(m, n));

    return 0;
}