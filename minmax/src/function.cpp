#include "function.h"

std::pair<int,int> min_max( int V[], std::size_t n )
{
	if ( n == 0 ) 
	{
		return {-1,-1};
	}

	int a = V[0], b = V[0];
	int x = 0, y = 0;
	
	for( int i = 1 ; i < n ; i++)
	{
		if ( V[i] < a )
		{
			x = i;
			a = V[i];
		}
		if ( V[i] >= b )
		{
			y = i;
			b = V[i];
		}
	}

    return {x,y};
}
