#include <iostream>
using namespace std;
int main(){
  int n,sum,sumAll=0;
  cout << "½Ð¿é¤Jn­È¡H";
  cin >> n;
  for(int i=1;i<=n;i=i+1){
    sum=0;
    for(int j=1;j<=i;j=j+1){
      sum=sum+j;
    }
    cout << "i=" << i << ",sum=" << sum << endl;
    sumAll=sumAll+sum;        
  }
  cout << "1+(1+2)+(1+2+3)+...+(1+2+3+...+n)=" << sumAll <<endl;
}
