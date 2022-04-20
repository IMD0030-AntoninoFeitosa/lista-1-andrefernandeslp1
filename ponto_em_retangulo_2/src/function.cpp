#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */
location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
	if ( ( IE.x == SD.x ) && ( IE.y == SD.y ))  return location_t::INVALID;
	
	if ( (P.x > IE.x && P.y > IE.y) && (P.x < SD.x && P.y < SD.y) ) return location_t::INSIDE;
	
	if ( (P.x < IE.x || P.y < IE.y) || (P.x > SD.x || P.y > SD.y) ) return location_t::OUTSIDE;
	
	else return location_t::BORDER;
}
