/*> Description ***********************************************************************************/
/**
 * @brief CLib String implementation.
 * @file clib_string.h
 */

/*> Multiple Inclusion Protection *****************************************************************/
#ifndef CLIB_STRING_H 
#define CLIB_STRING_H

/*> Includes **************************************************************************************/
#include "clib_int.h"
#include "clib_size.h"

/*> Defines ***************************************************************************************/

/*> Type Declarations *****************************************************************************/
/**
 * @brief String struct.
 * @param length      The length of the string.
 * @param characters  Array of the characters.
 */ 
typedef struct StringS
{
  u32   length;
  char  characters[];
} StringS;

/*> Constant Declarations *************************************************************************/

/*> Variable Declarations *************************************************************************/

/*> Function Declarations *************************************************************************/
/**
 * @brief Calculates the size of the string in memory.
 * @param[in] this_p  Pointer to the string.
 * @return Size of the string in memory.
 */
static inline SizeT string_sizeof(StringS* this_p)
{
  return sizeof(this_p->length) + this_p->length * sizeof(this_p->characters[0]);
}

/*> End of Multiple Inclusion Protection **********************************************************/
#endif 
