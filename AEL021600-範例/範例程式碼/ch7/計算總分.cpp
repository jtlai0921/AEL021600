#include <iostream>
using namespace std;
int main(){
  int score[6]={56,68,89,78,44,99};
  int sum=0;  
  for(int i=0;i<6;i++){                    
    sum =  sum + score[i];
    cout << "第" << i+1 << "位同學成績為" << score[i] << endl; 
  }
  cout << "總分為" << sum << endl;           
}

