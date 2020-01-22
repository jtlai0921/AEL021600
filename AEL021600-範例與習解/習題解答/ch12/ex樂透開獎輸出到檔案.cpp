#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
  ofstream out("prize.txt");  
  srand(time(NULL));
  for(int j=0;j<100;j++){
    for (int i=0;i<6;i++){
      out << rand()%49+1  << " "; 
    }
    out << endl;
  } 
}
