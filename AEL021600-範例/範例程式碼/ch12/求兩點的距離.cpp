#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double x1,x2,y1,y2,dist; 
  cout << "�п�JX1�H";
  cin >> x1;
  cout << "�п�JY1�H";
  cin >> y1;
  cout << "�п�JX2�H";
  cin >> x2;
  cout << "�п�JY2�H";
  cin >> y2;
  dist=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
  cout << "���I�Z����" << dist << endl;  
}
