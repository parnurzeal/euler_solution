#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<limits>
#include<sstream>

using namespace std;

int main(void){
  long long sum=0;
  vector<string> input;
  for(int i = 0;i<100;i++){
    string a; cin>>a;
    input.push_back(a);
  }

  for(int i=0;i<42;i++){
    for(int j = 0;j<100;j++){
      
    
    }
  }

  // input
/*  vector<string> input;
  for(int i =0;i<100;i++){
    string a; cin>>a;
    input.push_back(a);
  }
  // translated number
  vector<long long> number;
  for(int i =0;i<100;i++){
    stringstream ss(input[i].substr(0,9));
    long long temp;
    ss>>temp;
    number.push_back(temp);
  }
  cout<<numeric_limits<long long>::max();
  // output
  long long sum=0;
  for(int i = 0;i<100;i++){
    sum+=number[i];
    cout<< number[i]<<endl;
  }
  stringstream sum_str;sum_str<<sum;
  for(int i=0;i<10;i++) cout<<sum_str.str()[i];
*/
  return 0;
}
