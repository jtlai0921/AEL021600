#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
  int count=0,prize[6]; 
  srand(time(NULL));
  prize[count]=rand()%49+1;//���ͲĤ@��Ʀr
  count=count+1;   //count�[1 
  while (count<6){   
    prize[count]=rand()%49+1; //���ͲĤG��H�᪺�Ʀr
    count=count+1;  //count�[1  
    for (int j=0;j<count-1;j++){  //�ˬd�Ʀr�O�_���� 
      if (prize[j]==prize[count-1]){  //�Y������ 
         count=count-1;    //count��@�A���s���� 
         break;                       
      }  
    } 
  }
  for (int i=0;i<6;i++){
    cout << prize[i]  << " "; 
  }
  cout << endl;
}
