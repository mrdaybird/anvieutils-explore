#ifndef ANVIE_TEMPLATE_COMMON_H
#define ANVIE_TEMPLATE_COMMON_H

/*
 * include this header file in all other files,
 * if you don't want to do this, then wherever
 * you include HelperDefines.h, define the MODULE_NAME
 * macro above all other headers.
 *
 * To see it's instant example, build project and run
 * tests and anvutils_tests one by one. You'll see the set
 * module name.
 */

/* this will be used when printing error messages */
#define MODULE_NAME "Template"

#include <Anvie/Types.h>
#include <Anvie/HelperDefines.h>
#include <Anvie/Error.h>

#endif // ANVIE_TEMPLATE_COMMON_H
