#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int a,b,c;
  double s,area;
  cout << "�п�Ja�H";
  cin >> a;
  cout << "�п�Jb�H";
  cin >> b;
  cout << "�п�Jc�H";
  cin >> c;
  s =(a+b+c)/2.0;
  area=sqrt(s*(s-a)*(s-b)*(s-c)); 
  cout << "�T���έ��n��" << area  <<endl ;                
}
