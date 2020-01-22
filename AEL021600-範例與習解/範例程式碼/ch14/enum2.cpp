#include <iostream>
using namespace std;
int main(){
  enum season {spring=4,summer=2,fall=3,winter=1};
  enum season now;
  cout << "spring=" << spring << endl;
  cout << "summer=" << summer << endl;
  cout << "fall=" << fall << endl;
  cout << "winter=" << winter << endl;
  now=fall;
  cout << "now=" << now << endl;
}
