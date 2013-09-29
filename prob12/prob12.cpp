#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

long long triangle_number(long long nth){
  int sum =0;
  for(int i = 1;i<=nth;i++){
    sum+=i;
  }
  return sum;
}

bool isPrime(long long n){
  if(n==1) return false;
  if(n<4) return true;
  if(n%2==0) return false;
  if(n<9) return true;
  if(n%3==0) return false;
  long long sqrt_n = sqrt(n);
  for(long long i = 5 ;i<=sqrt_n;i+=6){
    if(n%i==0) return false;
    if(n%(i+2)==0) return false;
  }
  return true;
}


vector<long long> find_factor(long long n){
  vector<long long> a;
  long long sqrt_n = sqrt(n);
  for(int i = 1;i<=sqrt_n;i++){
    if(n%i==0){
      int div1 = i;
      int div2 = n/i;
      a.push_back(div1);
      if(div1!=div2) a.push_back(div2);
    }
  }
  return a;
}
vector<long long> prime_list = vector<long long>();

long long findNextPrime(int n){
  while(true){
    n+=2;
    if(isPrime(n))
      return n;
  }
}

int findNumFactor(long long n){
  if(n==1) return 1;
  int i = 0;
  int num_factor=1;
  while(true){
    long long cur_prime = prime_list[i++];
    if(prime_list.size()<=i) prime_list.push_back(findNextPrime(cur_prime)); 
    /*cout<<"Cur_Prime_list: ";
    for(int j = 0;j<prime_list.size();j++) cout<<prime_list[j]<<" ";
    cout<<endl;*/
    int carry=1;
    while(n>1){
      if(n%cur_prime==0){
        n=n/cur_prime;
        carry++;
      }else{
        break;
      }
    }
    num_factor*=carry;
    if(n<=1) return num_factor;
  }
}

int main(void){
  prime_list.push_back(2);
  prime_list.push_back(3);
  long long sum =0;
  for(long long i=1;;i++){
    sum+=i;
    if(findNumFactor(sum)>500){
      cout<<"nth: "<<i<<", value: "<<sum<<endl;
      break;
    }
  }
  // input
  return 0;
}
