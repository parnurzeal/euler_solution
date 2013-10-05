#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

// A - Z --> 65 - 90
// a - z --> 97 - 122

int main(int argc, char *argv[]){
  cout<<endl;
  printf("%c %d\n",'!','!');
  printf("%c %d\n",' ',' ');
  printf("%c %d\n",'a','a');
  printf("%c %d\n",'z','z');

  fstream fin;
  fin.open(argv[1],ios::in);
  vector<int> encrypted;
  int c_tmp=0;
  while(fin>>c_tmp){
    encrypted.push_back(c_tmp);
  }
  vector<int> key;
  // find key;
  for(int k=0;k<3;k++){
    for(int i =97;i<=122;i++){
      bool good=true;
      for(int j=k;j<encrypted.size();j+=3){
        int xor_tmp = i^encrypted[j];
        if(!(xor_tmp>=32&&xor_tmp<=122)){
         good=false;
         break;
        }
      }
      if(good){ cout<<i<<" "; key.push_back(i);}
    }
  }
  int sum=0;
  for(int i=0;i<encrypted.size();i++){
    printf("%c",key[i%3]^encrypted[i]);
  }
  cout<<"SUM: "<<sum<<endl; 

  return 0;
}
