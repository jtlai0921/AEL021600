#include <iostream>
using namespace std;
int main(){
  char ch;
  cout << "�п�J�@�Ӥp�g�^��r���H";
  cin >> ch; 
  switch (ch){
    case 'a':
      cout  << "a������" << endl;
      break;          
    case 'e':
      cout  << "e������" << endl;
      break;      
    case 'i':
      cout  << "i������" << endl;
      break;
    case 'o':
      cout  << "o������" << endl;
      break;      
    case 'u':
      cout  << "u������" << endl;
      break;
    default:
      cout  << ch << "���l��" << endl;
      break;      
  }
}
