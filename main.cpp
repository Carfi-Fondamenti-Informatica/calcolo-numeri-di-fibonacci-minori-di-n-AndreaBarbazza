#include <iostream>
using namespace std;

int main() {
   
   int n=0;
   int a=0, b=1, c=a+b;
   cin >> n; 
   
   if (n==0){
      return 0;
   }else{
      cout << b << endl;
   }
   
   for (int i=1; i<=n; i++){
      
      c=a+b;
      a=b;
      b=c;
      
      if (c>n){
         return 0;
      }else{
         cout << c << endl;
      }
   }
   
   return 0;
}
