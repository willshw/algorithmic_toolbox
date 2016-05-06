#include <iostream>
#include <stdlib.h>

long long gcd_fast(long long a, long long b){
  if(b > a) std::swap(a, b);
  if(b == 0) return a;
  return gcd_fast(b, a % b);
}

long long lcm(int a, int b) {
  //write your code here
  return abs(a*b)/gcd_fast(a, b);
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm(a, b) << std::endl;
  return 0;
}
