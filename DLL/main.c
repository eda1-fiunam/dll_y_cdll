
#include <stdio.h>
// para printf


#include <stdlib.h>
// para malloc and friends y size_t

#include <stdbool.h>
// para bool and friends

#include "DLL.h"


void Print( int item )
{
	printf( "%d\n", item );
}


//----------------------------------------------------------------------
//  Driver program
//----------------------------------------------------------------------
int main(void)
{
	DLL* unaLista = DLL_New();
	
	
	DLL_Traverse( unaLista, Print );
	// el nombre de la función es su dirección
	
	DLL_Delete( &unaLista );
	return 0;
}
