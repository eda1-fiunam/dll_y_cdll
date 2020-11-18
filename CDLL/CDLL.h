
#ifndef  CDLL_INC
#define  CDLL_INC

#include <stdlib.h>
// para malloc and friends y size_t

#include <stdbool.h>
// para bool and friends

typedef struct Node
{
	int datos;
	struct Node* next;
	struct Node* prev;
} Node;

typedef struct
{
	Node* first;
	Node* last;
	Node* cursor;
	size_t len;
} CDLL;


/**
 * @brief Crea una lista doblemente enlazada
 *
 * @return Una referencia a la nueva lista
 * @post Una lista existente en el heap
 */
CDLL* CDLL_New();

void CDLL_Delete( CDLL** this );

bool Insert_front( CDLL* this, int x );
bool Insert_back( CDLL* this, int x );

/**
 * @brief Inserta un elemento a la derecha del cursor.
 *
 * @param lista Una referencia a la lista de trabajo
 * @param x El elemento a insertar
 *
 * @return true si el valor se insertó en la lista; false en caso
 * contrario. Esto podría suceder si la memoria se agotó.
 */
bool CDLL_Insert( CDLL* this, int x );

/**
 * @brief Remueve el elemento al frente de la lista.
 *
 * @param this Referencia a una lista.
 *
 * @post El cursor se mantiene en la posición en la que estaba cuando entró la
 * función.
 */
void CDLL_Remove_front( CDLL* this );

/**
 * @brief Remueve el elemento al fondo de la lista.
 *
 * @param this Referencia a una lista.
 *
 * @post El cursor se mantiene en la posición en la que estaba cuando entró la
 * función.
 */
void CDLL_Remove_back( CDLL* this );

/**
 * @brief Remueve el elemento apuntado por el cursor
 *
 * @param this Referencia a una lista.
 *
 * @post El cursor se mueve al elemento a la derecha del nodo borrado.
 */
void CDLL_Remove( CDLL* this );

/**
 * @brief Devuelve una copia del valor apuntado por el cursor.
 *
 * @param this Una referencia a la lista de trabajo
 *
 * @return El valor apuntado por el cursor
 */
int CDLL_Get( CDLL* this );

/**
 * @brief Manda al cursor al inicio de la lista
 *
 * @param lista Una referencia a la lista de trabajo
 */
void CDLL_Cursor_front( CDLL* this );

void CDLL_Cursor_back( CDLL* this );
void CDLL_Cursor_next( CDLL* this );
void CDLL_Cursor_prev( CDLL* this );

bool CDLL_IsEmpty( CDLL* this );
size_t CDLL_Len( CDLL* this );

/**
 * @brief Elimina todos los elementos de la lista sin eliminar la lista.
 *
 * @param this Referencia a una lista.
 */
void CDLL_MakeEmpty( CDLL* this );

/**
 * @brief Recorre la lista y hace algo en cada uno de sus elementos
 *
 * @param lista Una referencia a la lista de trabajo
 * @param fn Esta función hace algo con el campo de datos 
 */
void CDLL_Traverse( CDLL* this, void (*fn)( int item ) );


#endif   /* ----- #ifndef CDLL_INC  ----- */
