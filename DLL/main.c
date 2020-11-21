
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

	// Ve recorriendo el condicional #if 0 conforme vas avanzando en la
	// codificación de las diferentes funciones. No olvides comenzar con las
	// funciones privadas.
	
#if 0 
	printf( "=== 1 === \n" );
	for( size_t i = 0; i < 5; ++i ){ DLL_Insert_front( unaLista, i ); }
	DLL_Traverse( unaLista, Print );

	printf( "=== 2 === \n" );
	for( size_t i = 5; i > 0; --i ){ DLL_Insert_back( unaLista, i ); }
	DLL_Traverse( unaLista, Print );

	printf( "=== 3 === \n" );
	for( size_t i = 0; i < 5; ++i ){ DLL_Insert( unaLista, i + 10 ); }
	DLL_Traverse( unaLista, Print );

	printf( "Hay %ld elementos en la lista\n", DLL_Len( unaLista ) );
	DLL_Cursor_front( unaLista );
	for( size_t i = 0; i < DLL_Len( unaLista ); ++i ){
		printf( "%d, ", DLL_Get( unaLista ) );
		DLL_Cursor_next( unaLista );
	}
	printf( "\n" );

	printf( "=== 4 === \n" );
	printf( "Hay %ld elementos en la lista\n", DLL_Len( unaLista ) );
	for( size_t i = 0; i < 5; ++i ){ DLL_Remove_front( unaLista ); }
	DLL_Traverse( unaLista, Print );

	printf( "=== 5 === \n" );
	printf( "Hay %ld elementos en la lista\n", DLL_Len( unaLista ) );
	for( size_t i = 0; i < 5; ++i ){ DLL_Remove_back( unaLista ); }
	DLL_Traverse( unaLista, Print );

	printf( "=== 6 === \n" );
	printf( "Hay %ld elementos en la lista\n", DLL_Len( unaLista ) );
	DLL_Cursor_front( unaLista );
	while( DLL_IsEmpty( unaLista ) == false ){
		DLL_Remove( unaLista );
	}
	printf( "\n" );

	printf( "=== 7 === \n" );
	printf( "Hay %ld elementos en la lista\n", DLL_Len( unaLista ) );
#endif  

	DLL_Delete( &unaLista );
	return 0;
}
