

#include <iostream>
using namespace std;

int countPrimes(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        bool isPrime = true;
        int num = arr[i];
        if (num < 2) {
            isPrime = false;
        }
        else {
            for (int j = 2; j <= num / 2; j++) {
                if (num % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
            count++;
        }
    }
    return count;
}

void Exercise() {
    const int size = 5;
    int arr[size];
    cout << "Enter numbers: ";
    for (size_t i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int primeCount = countPrimes(arr, size);
    cout << "Number of prime numbers in the array: " << primeCount << endl;
}

int main() {
    Exercise();
    return 0;
}