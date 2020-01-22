#include <iostream>
using namespace std;
int main(){
  enum season {spring,summer,fall,winter};
  enum season now;
  cout << "spring=" << spring << endl;
  cout << "summer=" << summer << endl;
  cout << "fall=" << fall << endl;
  cout << "winter=" << winter << endl;
  now=fall;
  cout << "now=" << now << endl;
}
