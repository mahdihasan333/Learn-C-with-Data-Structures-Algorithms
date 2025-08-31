#include <iostream>
using namespace std;

// Practice Question ===> Print all Primes in a Range from 2 to n.

bool isPrime(int n){
    if(n == 1){
        return false;
    }

    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void allPrimes(int n){
    for(int i = 1; i <= n; i++){
        if(isPrime(i)){     // true
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    allPrimes(50);
    return 0;
}