
#include "CDLL.h"

static Node* newNode( int x )
{
}

CDLL* CDLL_New()
{
}

void CDLL_Delete( CDLL** this )
{
}

bool CDLL_Insert( CDLL* this, int x )
{
}

bool CDLL_Insert_front( CDLL* this, int x )
{
}

bool CDLL_Insert_back( CDLL* this, int x )
{
}

void CDLL_Remove( CDLL* this )
{
}

void CDLL_Remove_front( CDLL* this )
{
}

void CDLL_Remove_back( CDLL* this )
{
}

int CDLL_Get( CDLL* this )
{
}

void CDLL_Cursor_front( CDLL* this )
{
}

void CDLL_Cursor_back( CDLL* this )
{
}

void CDLL_Cursor_next( CDLL* this )
{
}

void CDLL_Cursor_prev( CDLL* this )
{
}

bool CDLL_IsEmpty( CDLL* this )
{
}

size_t CDLL_Len( CDLL* this )
{
}

void CDLL_MakeEmpty( CDLL* this )
{
}

// recorre la this y ejecuta la función fn en la parte de datos de cada
// elemento de la misma
void CDLL_Traverse( CDLL* this, void (*fn)( int item ) )
{
	if( NULL == this ){ return; }

	Node* t = this->first;
   // ¡NO PODEMOS PERDER A FIRST!  
   
   while( t != NULL ){

		fn( t->datos );

		t = t->next;
   }
}

