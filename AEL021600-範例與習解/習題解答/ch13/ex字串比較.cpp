#include <iostream>
#include <cstring>
using namespace std;
int str_cmp(char *,char *);
int main(){
  string s;
  char *cstr1,*cstr2;
  int result;
  cstr1=new char[101]; //�ʺA�t�m101�Ӧr����cstr1�r������ 
  cstr2=new char[101]; //�ʺA�t�m101�Ӧr����cstr2�r������ 
  cout << "�вĤ@�Ӧr����פ��W�L100�Ӧr���H";
  cin >> s;
  strcpy(cstr1,s.c_str());  //�NC++�r��s�নC�y���r�� 
  cout << "�вĤG�Ӧr����פ��W�L100�Ӧr���H";
  cin >> s;
  strcpy(cstr2,s.c_str());  //�NC++�r��s�নC�y���r�� 
  result=str_cmp(cstr1,cstr2);
  cout << "�r���������G��" << result << endl;
  delete[] cstr1;   //����ʺA�t�m�O����cstr1 
  delete[] cstr2;   //����ʺA�t�m�O����cstr2
}
int str_cmp(char *str1,char *str2){
  int n1,n2;
  n1=strlen(str1);
  n2=strlen(str2);
  if (n1<n2){  
    n1=n2;     //n1�]�w����r����׸�����      
  }   
  for(int i=0;i<n1;i++){
    if (str1[i]!=str2[i]){    //���Ĥ@�Ӥ��۵����r�� 
      if (str1[i] > str2[i]){
        return 1;       //�Y�r��1�j��r��2�A�^��1 
      } else {
        return -1;      //�Y�r��1�p���r��2�A�^��-1   
      }                   
    }        
    if ((i==(n1-1))&&(str1[i]==str2[i])){
      return 0;         //�Y��r�곣��̫�@�Ӧr���A�B��r���۵��A�^��0                            
    }      
  }  
}
