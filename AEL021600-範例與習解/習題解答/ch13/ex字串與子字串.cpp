#include <iostream>
#include <cstring>
using namespace std;
int str_cmp(char *,char *);
int main(){
  string s;
  char *cstr[5],*substr;
  for(int i=0;i<5;i++){
    cstr[i]=new char[101]; //�ʺA�t�m101�Ӧr����cstr�r�����а}�C
    cout << "�в�" << i+1 << "�Ӧr����פ��W�L100�Ӧr���H";
    cin >> s;
    strcpy(cstr[i],s.c_str());  //�NC++�r��s�নC�y���r�� 
  }
  substr=new char[101]; //�ʺA�t�m101�Ӧr����substr�r������
  cout << "�n�j�M���r��A���פ��W�L100�Ӧr���H";
  cin >> s; 
  strcpy(substr,s.c_str());  //�NC++�r��s�নC�y���r��  
  for(int i=0;i<5;i++){
    if (strstr(cstr[i],substr) > 0){
      cout << cstr[i] << endl;                           
    }       
  }
  for(int i=0;i<5;i++){
    delete[] cstr[i];   //����ʺA�t�m�O����cstr[i]
  }
  delete[] substr;
}
