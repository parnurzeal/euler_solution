#include<iostream>
#include<cmath>
#include<fstream>
#include<vector>
#include<algorithm>

using namespace std;

bool IsPrime(int num){
  if(num==1) return false;
  if(num<4) return true;
  if(num%2==0) return false;
  if(num<9) return true;
  if(num%3==0) return false;
  int square_root = sqrt(num);
  for(int i =5 ;i<=square_root;i+=6){
    if(num%i==0) return false;
    if(num%(i+2)==0) return false;
  }
  return true;
}

int main(void){
  vector<int> primes;
  fstream fout;
  fout.open("primes.txt",ios::out);
  for(int i =1;i<1000000;i++){
    if(IsPrime(i)){
      fout<<i<<" ";
      primes.push_back(i);
    }
  }
  fout.close();
  
  int max_prime=0;
  int max_prime_num=0;
  int NUM_BELOW=1000000;
  int BOUND=10000;
  int bound_index = 0;
  for(int i=0;i<primes.size();i++){
    if(primes[i]>BOUND){
      bound_index=i-1;
      break;
    }
  }
  for(int i=0;i<bound_index, bound_index-i>max_prime_num;i++){
    int sum=0;
    int j=i;
    while(sum+primes[j]<NUM_BELOW){
      sum+=primes[j];
      if(count(primes.begin(),primes.end(),sum)!=0){
        if(j-i+1 > max_prime_num){
          max_prime=sum;
          max_prime_num=j-i+1;
        }
      }
      j++;
    }
  }

  cout<<max_prime<<" "<<max_prime_num<<endl;

  return 0;
}

