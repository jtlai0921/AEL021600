#include <iostream>
using namespace std;
int main(){
  double L,W,cir,area;
  cout << "請輸入長度？";
  cin >> L;
  cout << "請輸入寬度？";
  cin >> W;
  cir=2*(L+W);
  cout << "周長為" << cir << endl;
  area=L*W;
  cout << "面積為" << area << endl; 
}
