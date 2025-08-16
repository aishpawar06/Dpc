#include <stdio.h>

int missingNumber(const int *arr, int len) {
    int n = len + 1;
    int x = 0;
    for (int i = 1; i <= n; i++) x ^= i;
    for (int i = 0; i < len; i++) x ^= arr[i];
    return x;
}

int main(void) {
    int a1[] = {1,2,4,5};   printf("%d\n", missingNumber(a1,4));
    int a2[] = {2,3,4,5};   printf("%d\n", missingNumber(a2,4));
    int a3[] = {1,2,3,4};   printf("%d\n", missingNumber(a3,4));
    int a4[] = {1};         printf("%d\n", missingNumber(a4,1));
    return 0;
}
