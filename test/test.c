/*> Description ***********************************************************************************/
/**
* @brief Main for tests.
* @file test.c
*/

/*> Includes **************************************************************************************/
#include <assert.h>
#include <stdlib.h>

#include "clib_string.h"

/*> Defines ***************************************************************************************/

/*> Type Declarations *****************************************************************************/

/*> Global Constant Definitions *******************************************************************/

/*> Global Variable Definitions *******************************************************************/

/*> Local Constant Definitions ********************************************************************/

/*> Local Variable Definitions ********************************************************************/

/*> Local Function Declarations *******************************************************************/
static void test_string_sizeof();

/*> Local Function Definitions ********************************************************************/
static void test_string_sizeof()
{
  size testSize = 8;
  String* string_p = malloc(testSize);
  string_p->length = 4;
  assert(string_sizeof(string_p) == testSize);
}

/*> Global Function Definitions *******************************************************************/
int main()
{
  test_string_sizeof();

  return 0;
}