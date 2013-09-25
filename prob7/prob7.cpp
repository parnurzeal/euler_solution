#include<iostream>
#include<cmath>

using namespace std;


bool isPrime(long long number){
  if(number==1) return false;
  if(number<4) return true;
  if(number%2==0) return false;
  if(number<9) return true;
  if(number%3==0) return false;
  long long num_sqrt = sqrt(number);
  for( int i =5;i<=num_sqrt;i+=6){
    if(number%i==0) return false;
    if(number%(i+2)==0) return false;
  }
  return true;
}

int main(void){
  // input nth prime you wanna know.
  int N;cin>>N;
  
  if(N==1){
    cout<<2;
    return 0;
  }

  long long result_prime = 1;
  int count =1;
  long long n=3;
  while(count!=N){
    if(isPrime(n))
      count++;
    result_prime=n;
    n+=2;
  }
  // output
  cout<<result_prime;
  return 0;
}
