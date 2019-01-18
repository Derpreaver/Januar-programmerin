#ifndef _STARMAP_GENERATOR_H_
#define _STARMAP_GENERATOR_H_

#include "30010_io.h"
#include "stm32f30x_conf.h"

//In beginning of main write char starmap[30][75]
//When calling the function write stargen(level,starmap), where level is an integer and starmap calls to the initialization of starmap earlier in the script
//If the user wishes to change dimensions of the map generated, they have to change the number throughout starmap_generator.c, starmap_generator.h and main.c


void stargen(int level, char starmap[30][75]);


#endif
