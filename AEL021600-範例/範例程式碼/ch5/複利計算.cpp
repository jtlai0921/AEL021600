#include <iostream>
using namespace std;
int main(){
  int start,end,n,i=0;
  cout << "�п�J�s�J���B�H";
  cin >> start;
  cout << "�п�J�ؼЪ��B�H";
  cin >> end;
  cout << "�п�J�s�ڦ~�Q�v�H";
  cin >> n;
  do {
     i=i+1; 
     start=start*(1+(double)n/100); 
     cout << "��" << i << "�~��A�s�ڪ��B��" << start << endl; 
  }while(start < end); 
}
