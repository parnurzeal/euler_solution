#include<iostream>
#include<map>

using namespace std;

map<long long, long long > chain;

long long find_chain(long long num){
  if(num==1) return 1;
  if(chain[num]) return chain[num];
  if(num%2==0) return 1 + find_chain(num/2);
  return 1+find_chain(3*num+1);
}


int main(void){
  
  long long num=999999;
  long long max_chain = 0;
  long long max_number=0;
  while(num>333333){
    long long tmp_candidate = find_chain(num);
    if(tmp_candidate>max_chain){
      max_chain = tmp_candidate;
      max_number=num;
    }
    num--;
  }
  cout<<max_number;
  
  return 0;
}
