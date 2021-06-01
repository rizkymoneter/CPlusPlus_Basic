#include <iostream>
#include <math.h>

using namespace std;

int main()
{

  float karbohodirat,protein,dha;

  cout << "JUMLAH KANDUANGAN GIZI SEBUAH ROTI JIKAN DI KONSUMSI DALAM 5 HARI" << '\n';
  cout << "<================================================================>" << '\n';
  cout << "" << '\n';

  cout << "BERAT ROTI 200 grm" << '\n';
  cout << "karbohodirat 30%" << '\n';
  cout << "protein 40%" << '\n';
  cout << "DHA 30%" << '\n';


  karbohodirat = 200 * (30 / 100) * 5;
  protein = 200 * (40 / 100) * 5;
  dha = 200 * (30 / 100 )* 5;

  cout << "" << '\n';
  cout << "Total jumlah gizi karbohodirat selama 5 hari adalah : " << karbohodirat << '\n';
  cout << "Total jumlah gizi protein selama 5 hari adalah : " << protein << '\n';
  cout << "Total jumlah gizi DHA selama 5 hari adalah : " << dha << '\n';


  return 0;
}
