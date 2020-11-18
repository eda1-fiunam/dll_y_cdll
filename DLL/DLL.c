
#include "DLL.h"

static Node* newNode( int x )
{
}

DLL* DLL_New()
{
}

void DLL_Delete( DLL** this )
{
}

bool DLL_Insert( DLL* this, int x )
{
}

bool DLL_Insert_front( DLL* this, int x )
{
}

bool DLL_Insert_back( DLL* this, int x )
{
}

void DLL_Remove( DLL* this )
{
}

void DLL_Remove_front( DLL* this )
{
}

void DLL_Remove_back( DLL* this )
{
}

int DLL_Get( DLL* this )
{
}

void DLL_Cursor_front( DLL* this )
{
}

void DLL_Cursor_back( DLL* this )
{
}

void DLL_Cursor_next( DLL* this )
{
}

void DLL_Cursor_prev( DLL* this )
{
}

bool DLL_IsEmpty( DLL* this )
{
}

size_t DLL_Len( DLL* this )
{
}

void DLL_MakeEmpty( DLL* this )
{
}

// recorre la this y ejecuta la función fn en la parte de datos de cada
// elemento de la misma
void DLL_Traverse( DLL* this, void (*fn)( int item ) )
{
	if( NULL == this ){ return; }

	Node* t = this->first;
   // ¡NO PODEMOS PERDER A FIRST!  
   
   while( t != NULL ){

		fn( t->datos );

		t = t->next;
   }
}

