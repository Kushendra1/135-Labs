#include "funcs.h"
#include <iostream>
#include <list>


// Write all your functions in here
bool isDivisibleBy(int n, int d) {
  if (n % d == 0) {
    // std::cout<< n << " is divisible by " << d << "\n";
    return true;
  }
  else {
    // std::cout<< n << " is not divisible by " << d << "\n";
    return false;
  }
}

bool isPrime(int n) {
  for (int i = 2; i < n; i++){
		if (isDivisibleBy(n, i)){
      // std::cout << n << " is not a prime number" << "\n";
			return false;
		}
	}
  // std::cout<< n << " is a prime number" << "\n";
	return true;
}

int nextPrime(int n) {
	n++;

	while (!isPrime(n)){
		n++;
	}
  // std::cout<< "THe next prime is " << n << "\n";
	return n;
}

int countPrimes(int a, int b) {
  int primes = 0;
  for (int i = a+1; i > a && i < b; i++) {
    if (isPrime(i)) {
      primes+=1;
    }
  }
  // std::cout << "The number of primes between interval is " << primes << "\n";
  return primes;
}

bool isTwinPrime(int n) {
  if (n == 2){
		return false;
	}

	return isPrime(n) && (isPrime(n - 2) || isPrime(n + 2));
}

int nextTwinPrime(int n) {
  n++;
  for (int i = 0; i < n; i++) {
    if (!isTwinPrime(n)) {
      n++;
    }
  }
  return n;
}

int largestTwinPrime(int a, int b) {
  int val = a;
  if (isTwinPrime(b)) {
    return b;
  }
  if (nextTwinPrime(a) > b) {
    return -1;
  }

  while (a < b) {
		a = nextTwinPrime(a);
    if (a > val) {
			val = a;
		}
		a++;
	}
	return val;
}
