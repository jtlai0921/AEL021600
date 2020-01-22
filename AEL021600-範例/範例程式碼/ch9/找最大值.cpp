#include <iostream>
using namespace std;
int main(){
  int A[5]={60,90,44,98,50};
  int max=A[0];
  for (int i=0;i<5;i++){
    cout << "A[" << i << "]=" << A[i] << endl; 
  }
  for (int i=1;i<5;i++){
    if (max < A[i]) {
      max=A[i];        
    }
  } 
  cout << "°}¦C³Ì¤j­È¬°" << max << endl; 
}
