#include<iostream>
#include<cmath>
#include<vector> 

using namespace std;

vector<int> prime;


void sieve(){
  for(int i =10;i<20;i++){
    if(i%2==0) continue;
    if(i%3==0) continue;
    int square_root = sqrt(i);
    bool is_prime=true;
    for(int j = 5;j<square_root;j+=6){
      if(i%j==0){ is_prime=false; break;}
      if(i%(j+2)==0) {is_prime=false;break;}
    }
    if(is_prime) prime.push_back(i);
  }
}


int main(void){

  sieve();
  for(int i=0;i<prime.size();i++){
    cout<<prime[i]<<" ";
  }

  return 0;
}
