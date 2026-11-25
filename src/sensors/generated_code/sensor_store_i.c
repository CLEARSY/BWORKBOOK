/* WARNING if type checker is not performed, translation could contain errors ! */

#include "sensor_store.h"

/* Clause SEES */
#include "sctx.h"

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
/* Clause CONCRETE_VARIABLES */

static int32_t sensor_store__val[sctx__NBSENSOR+1];
static bool sensor_store__known[sctx__NBSENSOR+1];
/* Clause INITIALISATION */
void sensor_store__INITIALISATION(void)
{
    
    unsigned int i = 0;
    for(i = 0; i <= sctx__NBSENSOR;i++)
    {
        sensor_store__val[i] = 0;
    }
    for(i = 0; i <= sctx__NBSENSOR;i++)
    {
        sensor_store__known[i] = false;
    }
}

/* Clause OPERATIONS */

void sensor_store__set_one(int32_t ss, int32_t vv)
{
    sensor_store__val[ss] = vv;
    sensor_store__known[ss] = true;
}

void sensor_store__query(int32_t ss, int32_t *vv)
{
    (*vv) = sensor_store__val[ss];
}

void sensor_store__is_known(int32_t ss, bool *bb)
{
    (*bb) = sensor_store__known[ss];
}

void sensor_store__clear(void)
{
    int32_t kk;
    
    kk = 0;
    while((kk) <= (sctx__NBSENSOR))
    {
        sensor_store__known[kk] = false;
        kk = kk+1;
    }
}

