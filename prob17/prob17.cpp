#include<iostream>
#include<string>
#include<vector>

using namespace std;


int main(void){
  string one_to_twenty[21] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty"};
  vector<string> special(one_to_twenty,one_to_twenty+sizeof(one_to_twenty)/sizeof(string));
  int sum=0;
  for(int i=1;i<=20;i++){
    sum+=special[i].length();
  }
  for(int i=21;i<=29;i++){
    int temp = i%10;
    sum += special[20].length()+special[temp];
  }
  string thirty="thirty";
  sum+=thirty.length();
  for(int i=31;i<=39;i++){
    int temp = i%10;
    sum+=thirty+special[temp];
  }
  sum+=thirty.length();
  for(int i=31;i<=39;i++){
    int temp = i%10;
    sum+=thirty+special[temp];
  }


  for(int i=1;i<=999;i++){
   
  
  }
  // one thousand
  sum+=11;
  cout<<sum;
  return 0;
}
