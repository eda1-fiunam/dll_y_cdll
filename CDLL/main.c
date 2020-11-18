
#include <stdio.h>
// para printf


#include <stdlib.h>
// para malloc and friends y size_t

#include <stdbool.h>
// para bool and friends

#include "CDLL.h"


void Print( int item )
{
	printf( "%d\n", item );
}


//----------------------------------------------------------------------
//  Driver program
//----------------------------------------------------------------------
int main(void)
{
	CDLL* unaLista = CDLL_New();
	
	
	CDLL_Traverse( unaLista, Print );
	// el nombre de la función es su dirección
	
	CDLL_Delete( &unaLista );
	return 0;
}
