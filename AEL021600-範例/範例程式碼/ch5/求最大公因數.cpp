#include <iostream>
using namespace std;
int main(){
  int A,B,R;
  cout << "叫块材计A";
  cin >> A;
  cout << "叫块材计B";
  cin >> B;
  do{
     cout << A << "籔" << B << "程そ计讽―";
     R=A%B; 
     A=B;
     B=R; 
     cout << A << "籔" << B << "程そ计"  << endl; 
  }while(R != 0);
  cout << A << "程そ计" << endl;  
}
