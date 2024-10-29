#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <random>
#include <vector>
#include <string.h>



void 
setup(int64_t N, uint64_t A[])
{
   // Seed the random number generator
   std::srand(42);  // Fixed seed for reproducibility

   // Fill the array A with random values from 0 to N-1
   for (int64_t i = 0; i < N; ++i) {
        A[i] = std::rand() % N;  // Random value between 0 and N-1
   }
   printf(" inside sum_indirect problem_setup, N=%lld \n", N);
}

int64_t
sum(int64_t N, uint64_t A[])
{
   printf(" inside sum_indirect perform_sum, N=%lld \n", N);

   int64_t sum = 0;
   for (int64_t i = 0; i < N; ++i) {
        sum += A[A[i]];  // Indirect access pattern
   }

   return 0;
}

