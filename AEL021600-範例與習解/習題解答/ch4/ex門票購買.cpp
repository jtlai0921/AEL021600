#include <iostream>
#include <math.h>
using namespace std;
int main(){
  int ticket;
  cout << "�п�J�ʶR�����ơH";
  cin >> ticket; 
  switch (ticket){
    case 1:
      cout  << "�����`���B��" << ticket*100 << endl;
      break;          
    case 2 ... 5:
      cout  << "�����`���B��" << ticket*100*0.9 << endl;
      break;      
    case 6 ... 10:
      cout  << "�����`���B��" << ticket*100*0.8 << endl;
      break;
    case 11 ... 20:
      cout  << "�����`���B��" << ticket*100*0.7 << endl;
      break;
    default:
      cout  << "�����`���B��" << ticket*100*0.6 << endl;
      break;      
  }
}
