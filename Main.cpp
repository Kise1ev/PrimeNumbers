#include "PrimeNumbers.h"

int main() {
    int max = 0;

    cout << "What max would you like to count primes up to? Assume the first prime is 2: ";
    cin >> max;

    if (max < 2) {
        cout << "Invalid input. The first prime number is 2." << endl << endl;
        system("pause");
        return 1;
    }

    vector<int> primes;
    vector<bool> isPrime(max + 1, true);
    int sqrtMax = sqrt(max);

    for (int i = 2; i <= sqrtMax; i++) 
        if (isPrime[i])
            for (int j = i * i; j <= max; j += i)
                isPrime[j] = false;

    for (int i = 2; i <= max; i++) 
        if (isPrime[i])
            primes.push_back(i);

    cout << "The prime numbers up to " << max << " are: ";
    for (int prime : primes) 
        cout << prime << " ";

    cout << endl << endl;

    system("pause");
    return 0;
}
