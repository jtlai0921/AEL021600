#include <iostream>
using namespace std;
int main(){
  int score[6]={56,68,89,78,44,99};
  int sum=0;  
  for(int i=0;i<6;i++){                    
    sum =  sum + score[i];
    cout << "��" << i+1 << "��P�Ǧ��Z��" << score[i] << endl; 
  }
  cout << "�`����" << sum << endl;           
}

