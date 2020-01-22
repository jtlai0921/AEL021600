#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
  srand(time(NULL));
  int count=0;  //count用於儲存產生了幾位數 
  int target[4];  //儲存電腦隨機產生的數字 
  target[count]=rand()%10; //先產生第一個數字 
  count=count+1;   //count加1
  string guess;
  int A,B,gs[4]; 
  while (count<4){   
    target[count]=rand()%10; //產生第二位以後的數字 
    count=count+1;  //count加1  
    for (int j=0;j<count-1;j++){  //檢查數字是否重複 
      if (target[j]==target[count-1]){  //若有重複 
         count=count-1;    //count減一，重新產生 
         break;                       
      }  
    } 
  }
  while(1){
    A=0,B=0;
    cout << "請輸入四位數，每個數字介於0到9且皆不同？";
    cin >> guess;
    for(int i=0;i<4;i++){
      gs[i]=guess.at(i)-'0';  //將每個字串中字元轉成數字 
      if (target[i]==gs[i]){  //同時間計算A的個數 
        A++;                      
      }
    }
    for(int i=0;i<4;i++){
      for(int j=0;j<4;j++){
        if (target[i]==gs[j]){
          B++;  //此B值包含數字與位置相同的A                    
        }
      }
    }
    B=B-A;  //實際B值需將B個數需減去A個數 
    cout << A << "A" <<B << "B" << endl;  //輸出幾A幾B          
    if (A==4){
      break;   //A等於4表示猜中         
    }          
  }
}
