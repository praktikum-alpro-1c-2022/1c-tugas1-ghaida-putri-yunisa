#include <iostream>
using namespace std;
int main (){
//TUGAS 2
    //Menggunakan variabel sementara
    int x = 89;
    int y = 60;

    int z = x;
    x = y;
    y = z;

   cout <<"Menggunakan Variabel Sementara" << endl;
   cout <<"Hasil x = " << x << endl;
   cout <<"Hasil y = " << y << endl;
      return 0;

}
