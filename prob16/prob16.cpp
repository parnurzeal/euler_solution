/* 
 * Please note, follow is very bad solution 
 * you can just use 1 array box for one digit which is far easier than this
 * 
 */

#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

int main(void){
  int N;cin>>N;
  long long maximum_value = pow(10.0,15)-1;
  vector<long long> sums;
  sums.push_back(1);
  for(int i = 0;i<N;i++){
    bool carry=false;
    for(int j=0;j<sums.size();j++){
      long long tmp = sums[j]*2;
      if(tmp>maximum_value){
        if(j==sums.size()-1){
          sums.push_back(1);
          sums[j]=tmp-(maximum_value+1);
          if(carry){
            sums[j]+=1;
            carry=false;
          }
          break;
        }else{
          sums[j] = tmp-(maximum_value+1);
          if(carry){
            sums[j]+=1;
            carry=false;
          }
          carry=true;
        }
      }else{
        sums[j]=tmp; 
        if(carry){
          sums[j]+=1;
          carry=false;
        }
      }
    }
  }
  // calculate sum digits
  int sum_digit =0;
  for(int i=0;i<sums.size();i++){
    long long tmp = sums[i];
    cout<<sums[i]<<endl;
    while(tmp!=0){
      sum_digit += tmp%10;
      tmp/=10;
    }
  }
  cout<<sum_digit;
  return 0;
}
