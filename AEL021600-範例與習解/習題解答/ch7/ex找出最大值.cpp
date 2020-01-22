#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
  int score[10];
  int max=0;
  srand(time(NULL)); 
  for(int i=0;i<10;i++){                     
    score[i]=rand()%101;
    cout << "第" << i+1 <<"位同學的成績為" << score[i] << endl; 
  }
  for(int i=0;i<10;i++){
    if (max < score[i]){
      max=score[i];        
    }       
  }
  cout << "最高分為" << max << endl; 
}
