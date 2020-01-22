#include <iostream>
using namespace std;
int main(){
  int found=0,score[5]={60,90,44,98,50};  
  for(int i=0;i<5;i++){
    cout << "score[" << i << "]=" << score[i] << endl; 
    if (score[i] == 59){
      found=1;
      break;             
    }
  }    
  if (found == 1){
    cout << "找到59分的成績" << endl;          
  }else{
    cout << "找不到59分的成績" << endl;     
  } 
}
