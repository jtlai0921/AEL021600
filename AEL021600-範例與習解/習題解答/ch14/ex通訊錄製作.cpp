#include <iostream>
#include <string>
#include <cstring>
using namespace std;
typedef struct _address{
  char name[20];
  char address[50];
  char phone[15];     
} address;
int main(){
  int found=0;
  string s;
  char *cstr;
  cstr=new char[20]; //�ʺA�t�m20�Ӧr����cstr�r������ 
  address myaddr[5]={{"Claire","Taipei","1111-1111"}
  ,{"John","USA","2222-2222"},{"Emmy","China","3333-3333"}
  ,{"Fiona","Tainan","5555-5555"},{"Mar","France","6666-6666"}};
  cout << "�п�J�n�j�M���m�W�H";
  cin >> s;
  strcpy(cstr,s.c_str());  //�NC++�r��s�নC�y���r��   
  for(int i=0;i<5;i++){
    if (strcmp(myaddr[i].name,cstr) == 0){
      cout << "����ơA�m�W��" << myaddr[i].name << endl;
      cout << "�a�}��" << myaddr[i].address << endl;                                 
      cout << "�q�ܬ�" << myaddr[i].phone << endl;
      found=1;                                       
    }
  }
  if (found == 0){
    cout <<"�d�L���H"<<endl;          
  }
}
