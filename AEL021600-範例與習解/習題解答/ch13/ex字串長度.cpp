#include <iostream>
#include <cstring>
using namespace std;
int main(){
  string s;
  char *cstr;
  int len=0;
  cstr=new char[101]; //�ʺA�t�m101�Ӧr����cstr�r������ 
  cout << "�Цr����פ��W�L100�Ӧr���H";
  cin >> s;
  strcpy(cstr,s.c_str());  //�NC++�r��s�নC�y���r�� 
  while (*(cstr+len) != '\0'){  //'\0'���C�y���r�굲�� 
    len=len+1;   //�Y���O'\0'�h����len�[1     
  }
  cout << "�r��" << s <<"�����׬�" << len << endl;
  delete[] cstr;   //����ʺA�t�m�O����cstr 
}

