#include <iostream>
using namespace std;
int main(){
  int A[5]={60,90,44,98,50};
  int min=A[0];
  for (int i=0;i<5;i++){
    cout << "A[" << i << "]=" << A[i] << endl; 
  }
  for (int i=1;i<5;i++){
    if (min > A[i]) {
      min=A[i];        
    }
  } 
  cout << "°}¦C³Ì¤p­È¬°" << min << endl; 
}
