#include <iostream>
#include <cstring>
using namespace std;
int str_cmp(char *,char *);
int main(){
  string s;
  char *cstr1,*cstr2;
  int result;
  cstr1=new char[101]; //動態配置101個字元給cstr1字元指標 
  cstr2=new char[101]; //動態配置101個字元給cstr2字元指標 
  cout << "請第一個字串長度不超過100個字元？";
  cin >> s;
  strcpy(cstr1,s.c_str());  //將C++字串s轉成C語言字串 
  cout << "請第二個字串長度不超過100個字元？";
  cin >> s;
  strcpy(cstr2,s.c_str());  //將C++字串s轉成C語言字串 
  result=str_cmp(cstr1,cstr2);
  cout << "字串比較的結果為" << result << endl;
  delete[] cstr1;   //釋放動態配置記憶體cstr1 
  delete[] cstr2;   //釋放動態配置記憶體cstr2
}
int str_cmp(char *str1,char *str2){
  int n1,n2;
  n1=strlen(str1);
  n2=strlen(str2);
  if (n1<n2){  
    n1=n2;     //n1設定為兩字串長度較長者      
  }   
  for(int i=0;i<n1;i++){
    if (str1[i]!=str2[i]){    //找到第一個不相等的字元 
      if (str1[i] > str2[i]){
        return 1;       //若字串1大於字串2，回傳1 
      } else {
        return -1;      //若字串1小於於字串2，回傳-1   
      }                   
    }        
    if ((i==(n1-1))&&(str1[i]==str2[i])){
      return 0;         //若兩字串都到最後一個字元，且兩字元相等，回傳0                            
    }      
  }  
}
