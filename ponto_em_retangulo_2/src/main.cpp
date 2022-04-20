/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.


int main(void)
{
	location_t loc;
	int x1, x2, x3, y1, y2, y3;
  	
	while( cin >> std::ws >> x1 >> y1 >> x2 >> y2 >> x3 >> y3)
	{
	Ponto IE = {x1,y1} , SD = {x2,y2} , P = {x3,y3};
		
	loc = pt_in_rect( IE, SD, P );
	if ( loc == INSIDE ) cout << "inside" << endl;
	if ( loc == BORDER ) cout << "border" << endl;
	if ( loc == OUTSIDE ) cout << "outside" << endl;
	if ( loc == INVALID ) cout << "invalid" << endl;
	}
	
    return 0;
}
