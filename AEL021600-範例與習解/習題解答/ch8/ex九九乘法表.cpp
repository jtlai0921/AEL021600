#include <iostream>
using namespace std;
int main(){
  int A[9][9];
  for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){                     
      A[i][j]=(i+1)*(j+1);
    }          
  }
  for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){                     
      cout << A[i][j] << " ";
    }
    cout << endl;          
  }
}

