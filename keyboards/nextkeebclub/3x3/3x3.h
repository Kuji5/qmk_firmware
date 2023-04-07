#pragma once

#include "quantum.h"

#define LAYOUT_ortho_3x3( K00, K01, K02, K04, K05, K06, K08, K09, K10, K11) \
{ 	{ K00,  K01,  K02 },  \
	{ K04,  K05,  K06 },  \
	{ K08,  K09,  K10,  K11 }   \
}
