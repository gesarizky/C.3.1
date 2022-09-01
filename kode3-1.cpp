/**********************************************************
*  PEMROGRAMAN C++: MUDAH & CEPAT MENJADI MASTER C++      *
*                                                         *
*  Oleh    : Budi Raharjo                                 *
*  Email   : mbraharjo@gmail.com                          *
*                                                         *
*  Website : www.best-informatic.com                      *
*                                                         *
***********************************************************/
/*DI Tingkatkan kembali oleh
/**********************************************************
*  PEMROGRAMAN C++                                        *
*                                                         *
*  Author  : Gesa Rizky Nugraha                           *
*  Email   : gesarizkynugraha@gmail.com                   *
*                                                         *
*  Website : karenabelajar.blogspotcom                    *
*                                                         *
***********************************************************/

#include <iostream>

using namespace std;

int main()
{
  // deklarasi variabel
  int angka1;
  double angka2;
  char huruf1;
  char *huruf2;

  // mengisi nilai ke dalam variabel
  angka1 = 88;
  angka2 = 4.675;
  huruf1 = 'C';
  huruf2 = (char *) "Contoh string";

  // menampilkan nilai variabel
  cout<<"Nilai Type data int   : "<<angka1<<endl;
  cout<<"Nilai Type data double: "<<angka2<<endl;
  cout<<"Nilai Type data char  : "<<huruf1<<endl;
  cout<<"Nilai type data char *: "<<huruf2<<endl;

  return 0;	
}
