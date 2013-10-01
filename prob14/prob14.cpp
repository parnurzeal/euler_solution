#include<iostream>
#include<unordered_map>

using namespace std;

unorderd_map<long long, long long> chain;

long long find_chain(long long num){
  if(num==1) return 1;
  if(chain.
  if(num%2==0) return find_chain(num/2);
  return find_chain(3*num+10);
}


int main(void){
  
  long long num=1000000;
   
  
  return 0;
}
