#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
  int count=0,prize[6]; 
  srand(time(NULL));
  prize[count]=rand()%49+1;//產生第一位數字
  count=count+1;   //count加1 
  while (count<6){   
    prize[count]=rand()%49+1; //產生第二位以後的數字
    count=count+1;  //count加1  
    for (int j=0;j<count-1;j++){  //檢查數字是否重複 
      if (prize[j]==prize[count-1]){  //若有重複 
         count=count-1;    //count減一，重新產生 
         break;                       
      }  
    } 
  }
  for (int i=0;i<6;i++){
    cout << prize[i]  << " "; 
  }
  cout << endl;
}
