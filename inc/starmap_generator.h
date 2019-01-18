#ifndef _STARMAP_GENERATOR_H_
#define _STARMAP_GENERATOR_H_

#include "30010_io.h"
#include "stm32f30x_conf.h"

//in beginning of main write char starmap[30][75]
//when calling the function write stargen(level,starmap), where level is an integer and starmap calls to the initialization of starmap earlier in the script



void stargen(int level, char starmap[30][75]);


#endif
