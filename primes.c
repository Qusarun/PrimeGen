#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num, int* primes, int primeCount) {
        if (num == 0 || num == 1)
                return false;

        if (num < 0)
                return is_prime(-num, primes, primeCount);

        for (int i = 0; i < primeCount; i++) {
                if (num % primes[i] == 0)
                        return false;
        }

        return true;
}

int main() {
        int primes[10000];
        int primeCount = 0;
        for (int i = 0; i < 10000; i++) {
                if (is_prime(i, primes, primeCount)) {
                        primes[primeCount++] = i;
                        printf("%d\n", i);
                }
        }

        return 0;
}
