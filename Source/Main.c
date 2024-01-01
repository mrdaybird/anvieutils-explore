#include <stdio.h>
#include <Anvie/Containers/Vector.h>

/* if this program works, then includes work properly */

int main() {
    /* create an Int32 vector */
    I32_Vector* vec = i32_vector_create();

    /* use vector */

    /* always remember to  destroy objects after use */
    i32_vector_destroy(vec, NULL);
}
