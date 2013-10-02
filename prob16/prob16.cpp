#include<iostream>
#include<limits>
#include<sstream>
#include<iomanip>

using namespace std;

int main(void){
  double a = 1.0000001f;
  cout<<numeric_limits<double>::max()<<endl;
  cout<<cout.precision(302)<<numeric_limits<long long>::max()<<endl;
  cout<<a<<endl;
  double sum = 0.5f;
  for(int i = 0;i<100000000;i++){
    sum*=0.5;
    stringstream str(stringstream::in|stringstream::out);
    str<<sum;
    cout<<setprecision(302)<<str.str()<<endl;
    sleep(1);
  }
  return 0;
}
