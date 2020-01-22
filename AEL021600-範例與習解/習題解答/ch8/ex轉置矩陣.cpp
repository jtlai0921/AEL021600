#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
  int A[3][3],AT[3][3];
  srand(time(NULL));  
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){                     
      A[i][j]=rand()%9+1;
      AT[j][i]=A[i][j];
    }          
  }
  cout << "轉換前" << endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){                     
      cout << A[i][j] << " ";  
    }
    cout << endl;          
  }
  cout << "轉換後" << endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout << AT[i][j] << " ";  
    }
    cout << endl;          
  } 
}
