#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
  int number;
  do{
    srand(time(NULL));
    number=rand()%6+1;
    cout << "�Y��l�I�Ƭ�" << number << endl;
    if (number == 6){
      break;           
    } 
  }while(1);  
}
