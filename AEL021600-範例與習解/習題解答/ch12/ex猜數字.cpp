#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
  srand(time(NULL));
  int count=0;  //count�Ω��x�s���ͤF�X��� 
  int target[4];  //�x�s�q���H�����ͪ��Ʀr 
  target[count]=rand()%10; //�����ͲĤ@�ӼƦr 
  count=count+1;   //count�[1
  string guess;
  int A,B,gs[4]; 
  while (count<4){   
    target[count]=rand()%10; //���ͲĤG��H�᪺�Ʀr 
    count=count+1;  //count�[1  
    for (int j=0;j<count-1;j++){  //�ˬd�Ʀr�O�_���� 
      if (target[j]==target[count-1]){  //�Y������ 
         count=count-1;    //count��@�A���s���� 
         break;                       
      }  
    } 
  }
  while(1){
    A=0,B=0;
    cout << "�п�J�|��ơA�C�ӼƦr����0��9�B�Ҥ��P�H";
    cin >> guess;
    for(int i=0;i<4;i++){
      gs[i]=guess.at(i)-'0';  //�N�C�Ӧr�ꤤ�r���ন�Ʀr 
      if (target[i]==gs[i]){  //�P�ɶ��p��A���Ӽ� 
        A++;                      
      }
    }
    for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
        if (target[i]==gs[j]){
          B++;  //��B�ȥ]�t�Ʀr�P��m�ۦP��A                    
        }
      }
    }
    B=B-A;  //���B�ȻݱNB�Ӽƻݴ�hA�Ӽ� 
    cout << A << "A" <<B << "B" << endl;  //��X�XA�XB          
    if (A==4){
      break;   //A����4��ܲq��         
    }          
  }
}
