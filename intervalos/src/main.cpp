/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
  int x;
  float c1=0, c2=0, c3=0, c4=0, c5=0, soma=0;
  
  while( cin >> std::ws >> x) {

    if (x>=0 && x<25){ c1++; }
    else if (x>=25 && x<50){ c2++; }
    else if (x>=50 && x<75){ c3++; }
    else if (x>=75 && x<100){ c4++; }
    else { c5++; }  
  }

  soma = c1 + c2 + c3 + c4 + c5;

  cout << setprecision(4) << 100*(c1/soma) << endl;
  cout << setprecision(4) << 100*(c2/soma) << endl;
  cout << setprecision(4) << 100*(c3/soma) << endl;
  cout << setprecision(4) << 100*(c4/soma) << endl;
  cout << setprecision(4) << 100*(c5/soma) << endl;  
  
  return 0;
}
