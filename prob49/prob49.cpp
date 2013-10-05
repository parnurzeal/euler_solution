#include<iostream>
#include<vector>
#include<sstream>
#include<map>
#include<cmath>

using namespace std;

void create_perm(vector<int> *all_perm, string str, string left){
  if(left.size()==0) {
    int result_int = atoi(str.c_str());
    if(result_int>1000 && count(all_perm->begin(),all_perm->end(),result_int)==0)
      all_perm->push_back(result_int);
    return ;
  }
  for(int i = 0;i<left.size();i++){
    string left2 = left;
    string tmp_str = str+left2[i];
    left2.erase(left2.begin()+i);
    create_perm(all_perm,tmp_str,left2);
  }
  return ;
}


vector<int> perm(int num){
  stringstream ss; ss<<num;
  vector<int> *all_perm = new vector<int>();
  create_perm(all_perm,"",ss.str());
  return *all_perm;
}

bool IsPrime(int num){
  if(num==1) return false;
  if(num<4) return true;
  if(num%2==0) return false;
  if(num<9) return true;
  if(num%3==0) return false;
  int square_num = sqrt(num);
  for(int i=5;i<square_num;i+=6){
    if(num%i==0) return false;
    if(num%(i+2)==0) return false;
  }
  return true;
}

int main(void){

  for(int i =1000;i<10000;i++){
    int prime_count =0;
    vector<int> num_perm = perm(i);
    vector<int> result;
    for(int j=0;j<num_perm.size();j++){
      if(IsPrime(num_perm[j])){
        prime_count++;
        result.push_back(num_perm[j]);
      }
    }
    if(prime_count>3){
      bool good = false;
      sort(result.begin(),result.end());
      for(int j=0;j<result.size()-2;j++){
        for(int k=j+1;k<result.size()-1;k++){
          for(int l=k+1;l<result.size();l++){
            int diff1 = abs(result[j]-result[k]);
            int diff2 = abs(result[k]-result[l]);
            if(diff1==diff2){
              cout<<result[j]<<" "<<result[k]<<" "<<result[l]<<endl;
            }
          }
        }
      }
    }
  }
  return 0;
}
