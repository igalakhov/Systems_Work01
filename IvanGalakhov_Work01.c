
// Ivan Galakhvov
// Systems period 5
// Most of these solutions are highly inefficient given the lack of good number manipulation libraries


#include <stdio.h>
#include <math.h>

// problem 1
int problem1(){
  int sum = 0;
  for(int i = 1; i < 1000; i++){
    if (i % 5 == 0 || i % 3 == 0){
      sum += i;
    }
  }
  return sum;
}
// problem 2 helper
int fib(int n){
  double phi = (sqrt(5) + 1) / 2.0;
  return round(pow(phi, n) / sqrt(5));
}
// problem 2
int problem2(){
  int sum = 0;
  int i = 1;
  int cur;
  while((i++) && (cur = fib(i)) && cur < 4000000){
    if(cur % 2 == 0){
      sum += cur;
    }
  }
  return sum;
}

// helper
int is_prime(int n){
  for(int i = 2; i < sqrt(n); i++){
    if(n % i == 0){
      return 0;
    }
  }
  return 1;
}
// problem 3
int problem3(){
  long num = 600851475143;
  int largest = 1;
  for(int i = 3; i < sqrt(num); i += 2){
    if(is_prime(i) && num % i == 0){
      largest = i;
    }
  }
  return largest;
}
// problem 4 - this one doesn't seem easily possible without using strings

//helper
int problem5_helper(int n){
  for(int si = 1; i < 21; i++){
    if(n % i > 0){
      return 1;
    }
  }
  return 0;
}
//problem 5
int problem5(){
    int i = 0;
    while(problem5_helper(++i) == 1);
    return i;
}
//problem 6
int problem6(){
  return pow(50*101, 2) - (100*101*201/6);
}

int main(){
  printf("Problem 1 solution: %d \n", problem1());
  printf("Problem 2 solution: %d \n", problem2());
  printf("Problem 3 solution: %d \n", problem3());
  printf("Problem 5 solution: %d \n", problem5());
  printf("Problem 6 solution: %d \n", problem6());

  return 0;
}
