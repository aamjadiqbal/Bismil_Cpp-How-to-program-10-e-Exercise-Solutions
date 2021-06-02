#include <iostream>

using namespace std;

void encryptData(int digit) {
   digit += 7;
   digit %= 10;
   cout <<digit;
}

int main() {
   unsigned int number{ 0 }, x, y, z, m;
  
   while (!number) {
      cout << "Enter 4 digit number: ";
      cin >> number;
      if (number < 1000 || number > 9999) {
         number = 0;
      }
   }
   
   cout << "New Number is: ";
   x = number / 1000; 
   encryptData(x);
   y = number % 1000 ;
   z = y;
   y /= 100;
   encryptData(y);
   z %= 100;
   m = z;
   z /= 10;
   encryptData(z);
   m %= 10;
   encryptData(m);
   
}