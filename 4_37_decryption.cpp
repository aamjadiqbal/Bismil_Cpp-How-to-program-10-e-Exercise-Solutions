#include <iostream>
using namespace std;

void decryption(int digit) {
   digit += 10;
   digit -= 7;
   cout << digit;
}


int main() {
   unsigned int number{ 0 }, x , y , z , m ;

   while (!number) {
      cout << "Enter 4-digit encrypted code: ";
      cin >> number;
      if (number < 1000 || number > 9999) {
         number = 0;
      }
   }
   cout << "New Number is: ";
   x = number / 1000;
   decryption(x);
   y = number % 1000;
   z = y;
   y /= 100;
   decryption(y);
   z %= 100;
   m = z;
   z /= 10;
   decryption(z);
   m %= 10;
   decryption(m);

}