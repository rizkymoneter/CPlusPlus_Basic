#include <iostream>

using namespace std;

int main()
{

 double ketinggian;
 cout <<"Masukkan ketinggian: ";
 cin >>ketinggian;

    if (ketinggian >=0 )

            {
              if ((ketinggian >=0) && (ketinggian <=2))
              cout << "Aman" <<endl;

              else if ((ketinggian >=2) && (ketinggian <=4))
              cout << "Siaga" <<endl;

              else if ((ketinggian >=4))
              cout << "Bahaya" <<endl;
            }

      else

          {
              cout << "Maaf angka tidak boleh kurang dari nol" <<endl;
          }

 return 0;
}
