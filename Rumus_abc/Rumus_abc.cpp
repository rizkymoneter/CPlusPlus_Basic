#include <iostream>
#include <math.h>

using namespace std;

int main()

{
  float a,b,c,D,x1,x2;

  cout << "PROGRAM AKAR - AKAR PERSAMAAN KUADRAT RUMUS ABC" << '\n';
  cout << "<===================================>  " << '\n';
  cout << "" << '\n';
  cout << "x^2 + bx + c = 0" << '\n';
  cout << "Masukkan nilai a, b, dan c pada inputan di bawah." << '\n';
  cout << "" << '\n';


  cout << "Nilai  a : ";                                          /* Inputan Nilai a */
  cin >> a;

  cout << "Nilai  b : ";                                          /* Inputan Nilai b */
  cin >> b;

  cout << "Nilai  c : ";                                          /* Inputan Nilai c */
  cin >> c;



  D = pow(b,2) - 4 * a * c;                                        /* Menganalisa nilai Diskriminan */


        if (a == 0)
                {
                      cout <<'\n'<< "Nilai a tidak boleh 0 " << '\n';                 /* Inputan apabila nilai a nol maka program akan kluar */

                //  exit (1);
                }

        else
              {

                      if (D < 0) cout << "Persamaan kuadrat memiliki akar akar imajiner" << '\n';     /* Menganalisa jika nilai D<0 maka bentuk bilangan imajiner*/

                      else if (D == 0)                /* Menganalisa jika nilai D=0 maka menggunakan rumus {-b / (2*a)} */
                {
                      x1 = -b / (2 * a);
                      cout << "Persamaan kuadrat memiliki akar kembar, yaitu " << x1 << '\n';
                }

                      else                          /* Menganalisa jika nilai D bukan D<0 dan D=0 maka D>0 menggunakan rumus abc */
                {
                      x1 = (-b + sqrt(D)) / (2 * a);
                      x2 = (-b - sqrt(D)) / (2 * a);
                      cout << "Akar-akar persamaan kuadrat adalah " << x1 << " dan " << x2 << '\n';
                }

            }

  return 0;
}
