#include <iostream>
#include <cstdlib> 
using namespace std;
int main(){
  int *p=(int *)malloc(10*sizeof(int));
  for(int i=0;i<10;i++){
    cout << "p+" << i << "=" << p+i << endl;      
  }
  free(p);
}

