#include <iostream>
#include <array>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
	int tam = arr.size();
	for ( int i = 0 ; i < tam/2 ; ++i)
	{
		swap ( arr[i] , arr[tam-i-1] );
	}
}
