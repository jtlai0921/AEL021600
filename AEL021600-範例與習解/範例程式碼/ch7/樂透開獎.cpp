#include <iostream>
#include <ctime>
#include <cstdlib> 
using namespace std;
int main(){
  int prize[6];
  int repeat[48];
  int pz,count=1;
  srand(time(NULL));
  for(int i=0;i<48;i++){
    repeat[i]=0;        
  }  
  do {                     
    pz=rand()%48+1;
    if (repeat[pz] == 0){
      repeat[pz]=1;
      prize[count-1]=pz;
      count++;                          
    }else {
      continue;      
    }
  } while (count <= 6);
  for(int i=0;i<6;i++){
    cout << "��" << i+1<< "�ӱo�����X�O" << prize[i] << endl;         
  } 
}
