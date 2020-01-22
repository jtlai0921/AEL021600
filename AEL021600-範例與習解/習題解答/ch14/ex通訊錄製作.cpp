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
  cstr=new char[20]; //動態配置20個字元給cstr字元指標 
  address myaddr[5]={{"Claire","Taipei","1111-1111"}
  ,{"John","USA","2222-2222"},{"Emmy","China","3333-3333"}
  ,{"Fiona","Tainan","5555-5555"},{"Mar","France","6666-6666"}};
  cout << "請輸入要搜尋的姓名？";
  cin >> s;
  strcpy(cstr,s.c_str());  //將C++字串s轉成C語言字串   
  for(int i=0;i<5;i++){
    if (strcmp(myaddr[i].name,cstr) == 0){
      cout << "找到資料，姓名為" << myaddr[i].name << endl;
      cout << "地址為" << myaddr[i].address << endl;                                 
      cout << "電話為" << myaddr[i].phone << endl;
      found=1;                                       
    }
  }
  if (found == 0){
    cout <<"查無此人"<<endl;          
  }
}
