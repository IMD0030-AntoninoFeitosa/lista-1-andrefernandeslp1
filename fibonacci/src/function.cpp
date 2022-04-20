#include "function.h"
#include <iostream>
#include <vector>

using namespace std;

std::vector<unsigned int> fib_below_n( unsigned int n )
{
	std::vector<unsigned int> v;
	
	if ( n > 1 )
	{
		v.push_back(1);
		v.push_back(1);
		int tam = v.size();
		unsigned int next = v[tam-2] + v[tam-1];
		while (next < n){
			
			v.push_back(next);
			next = v[tam-2] + v[tam-1];
			tam = v.size();
			}
		return v;
	}
	else
	{
		return v;
	}

}