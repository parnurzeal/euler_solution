#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>

using namespace std;

int max(int v1, int v2){
  return v1>v2?v1:v2;
}

int main(int argc, char* argv[]){
  vector<int> triangle;
  ifstream fin;
  fin.open(argv[1],ios::in);
  int temp=0;
  while(fin>>temp){
    triangle.push_back(temp);
  }
  fin.close();
  fin.open(argv[1],ios::in);
  int N_ROW=count(istreambuf_iterator<char>(fin),istreambuf_iterator<char>(),'\n');

  vector<int> sum;
  sum.push_back(triangle[0]);
  for(int i = 1;i<N_ROW;i++){
    for(int j =0;j<=i;j++){
      int pre_first_pos = (i-1)*(i)/2;
      int cur_first_pos = (i)*(i+1)/2;
      int pre_last_pos = cur_first_pos-1;
      if(j==0){
        sum.push_back(sum[pre_first_pos] + triangle[cur_first_pos+j]);
      }else if(j==i){
        sum.push_back(sum[pre_last_pos] + triangle[cur_first_pos+j]);
      }else{
        int max_val = max(sum[pre_first_pos+j-1],sum[pre_first_pos+j]);
        sum.push_back(max_val+triangle[cur_first_pos+j]);
      }
    }
  }
  for(int i =0;i<N_ROW;i++){
    for(int j=0;j<=i;j++){
      int cur_first_pos = i*(i+1)/2;
      cout<<sum[cur_first_pos+j]<<" ";
    }
    cout<<endl;
  }

  int last_first_pos = (N_ROW-1)*N_ROW/2;
  int answer=sum[last_first_pos];
  for(int i =last_first_pos;i<sum.size();i++){
    if(answer<sum[i]){
      answer=sum[i];
    }
  }
  cout<<"ANSWER: "<<answer<<endl;
  return 0;
}
