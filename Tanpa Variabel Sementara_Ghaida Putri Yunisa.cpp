#include <iostream>
using namespace std;
int main (){
//TUGAS 2
//Tiidak menggunakan variabel sementara
   int x1 = 77;
   int y1 = 88;

   x1 = x1 - y1;
   y1 = x1 + y1;
   x1 = y1 - x1;

   cout << "Tidak menggunakan variabel sementara" << endl;
   cout << "Hasil x1 = " << x1 << endl;
   cout << "Hasil y1 = " << y1 << endl;
   return 0;

}
