#include<iostream>

using namespace std;


int main(void){
  int n;cin>>n;
  long lattice[n+1][n+1]; for(int i=0;i<n;i++) fill_n(lattice[i],n,0);
  for(int i =0;i<=n;i++){
    for(int j=0;j<=n;j++){
      if(i==0||j==0) lattice[i][j]=1;
      else lattice[i][j]=lattice[i-1][j]+lattice[i][j-1];    
    }
  }
  cout<<lattice[n][n];
  return 0;
}
