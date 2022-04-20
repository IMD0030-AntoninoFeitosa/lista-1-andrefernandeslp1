/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
	int aux, m, n, soma;
	
	while ( cin >> std::ws >> m >> n )
	{

	    soma = m;
	    aux = m;
	    if ( n > 0 ){
	        while ( n > 1 ){
	            soma = soma + (++aux);
	            n--;
	        }
	    }
	    if ( n < 0 ){
	        n*=-1;
	        while ( n > 1 ){
	            soma = soma + (--aux);
	            n--;
	        }
	    }
	    cout << soma << endl;
	}
    return 0;
    return 0;
}
