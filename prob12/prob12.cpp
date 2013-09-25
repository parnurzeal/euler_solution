#include<iostream>
#include<vector>

using namespace std;

long long triangle_number(long long nth){
  int sum =0;
  for(int i = 1;i<=nth;i++){
    sum+=i;
  }
  return sum;
}

vector<long long> find_factor(long long nth){
  vector<long long> a;
  return a;
}


int main(void){
  // input
  int N;cin>>N;
  long long sum=0;
  for(int i =1;i<=N;i++){
    sum+=i;
    vector<long long> factor = find_factor(sum);
    cout<<sum<<endl;
  }
  return 0;
}
