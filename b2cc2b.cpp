#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int n , i = 0 , bit , ans =0;

  cin>> n;
   while(n!=0){
    
       bit = n & 1;
        ans = ans + (pow(10 , i++)*bit)   ;
        //ans = ans + (pow(10 , i)*bit);``
      n =  n >> 1;
     // i++;
   }
   cout << ans << endl;
}

#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int n, bit,i= 0, ans=0;
  cin>> n;
  while( n!=0){
     bit = n % 10;
      if( bit == 1){
         ans = ans + pow(2 ,i);
        
      }
       n = n  / 10;
       i++;
  }
  cout<< ans;
}