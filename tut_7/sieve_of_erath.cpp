#include <iostream>
#include <cmath>
using namespace std;

void init_to_one(bool[], int);
void seve_of_era(bool[], int);
void print_primes(bool[], int);

int main()
{
    // prime numbers up to 20
    // index 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
    // if val in array is 1 then prime else not prime
    // initially all elements are 1 from 2 and up.
    // if prime[i] then all multiples of i to 0
    // repeat loop until iterations = sqrt(size)
    // print out all the values that are 1

    const int size = 1000;
    bool prime[size];

    // intializing all values to true
    init_to_one(prime, size);
    // setting all values that are multiples of primes to false
    seve_of_era(prime, size);
    // printing out the prime numbers
    print_primes(prime, size);
    return 0;
}

void init_to_one(bool prime[], int size)
{
    for (int i = 2; i < size; i++)
    {
        prime[i] = true;
    }
}

void seve_of_era(bool prime[], int size)
{
    for (int i = 2; i <= sqrt(size); i++)
    {
        if (prime[i])
        {
            for (int j = i; j < size; j += i)
            {
                if (j > i)
                {

                    prime[j] = false;
                }
            }
        }
    }
}

void print_primes(bool prime[], int size)
{
    cout << "The prime numbers are between 0 and " << size << " are: ";
    for (int i = 2; i < size; i++)
    {
        if (prime[i])
        {
            cout << i << " ";
        }
    }
}