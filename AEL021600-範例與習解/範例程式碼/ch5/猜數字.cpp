#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
  int guess,target;
  srand(time(NULL));
  target=rand()%100+1;
  do{
     cout << "�вq�@�Ʀr�H";
     cin >> guess;
     if (guess > target){
       cout << "�q�p�@�I" << endl;          
     } else if (guess < target){
       cout << "�q�j�@�I" << endl;       
     } else {
       cout << "�q���F" << endl;       
     } 
  }while(guess != target); 
}
