#include <iostream>
#include <math.h>
using namespace std;
int main(){
  int ticket;
  cout << "叫块潦禦布计";
  cin >> ticket; 
  switch (ticket){
    case 1:
      cout  << "布羆肂" << ticket*100 << endl;
      break;          
    case 2 ... 5:
      cout  << "布羆肂" << ticket*100*0.9 << endl;
      break;      
    case 6 ... 10:
      cout  << "布羆肂" << ticket*100*0.8 << endl;
      break;
    case 11 ... 20:
      cout  << "布羆肂" << ticket*100*0.7 << endl;
      break;
    default:
      cout  << "布羆肂" << ticket*100*0.6 << endl;
      break;      
  }
}
