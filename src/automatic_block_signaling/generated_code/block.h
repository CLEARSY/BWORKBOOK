#ifndef _block_h
#define _block_h

#include <stdint.h>
#include <stdbool.h>
/* Clause IMPORTS */
#include "acquisition_bs.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#define block__SIGNALS__max 3
#define block__BLOCKS__max 3
/* Clause SETS */
typedef int block__SIGNALS;
typedef int block__BLOCKS;
typedef enum
{
    block__ACQUISITION,
    block__CONTROLE
    
} block__PHASE;
#define block__PHASE__max 2

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */

/* Array and record constants */
extern const block__BLOCKS block__NEXT[block__BLOCKS__max+1];

/* Clause CONCRETE_VARIABLES */

extern void block__INITIALISATION(void);

/* Clause OPERATIONS */

extern void block__actualise_occupation(void);
extern void block__controle_light(void);
extern void block__is_occupied(block__BLOCKS xx, bool *bb);
extern void block__is_red(block__BLOCKS xx, bool *bb);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _block_h */
