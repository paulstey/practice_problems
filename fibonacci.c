// Fibonacci numbers using malloc() for dynamic allocation
// Author: Paul Stey
// Date: 2017-06-16
// CFLAGS: -Wall

#include <stdio.h>
#include <stdlib.h>


int fib(int n) {
    uint64_t *arr = (uint64_t *) malloc(n);
    arr[0] = 0;
    arr[1] = 1;

    printf("%llu\n", arr[1]);
    
    for (int i = 2; i <= n; i++) {
	arr[i] = arr[i-1] + arr[i-2];
	printf("%llu \n", arr[i]);
    }
    return arr[n];
}

int main(int argc, char *argv[]) {
    
    int n = atoi(argv[1]);
    uint64_t res;
    res = fib(n);
    printf("\nResult: %llu \n", res);
}

