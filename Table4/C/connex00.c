#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <math.h>
void check()
{

    __CPROVER_bool x[16];
		if(!((x[1]==1  || x[4]==1)  &&  (x[2]==1  || x[8]==1)  &&  (x[3]==1  || x[12]==1)  &&  (x[6]==1  || x[9]==1)  && (x[7]==1  || x[13]==1)  &&  (x[11]==1  || x[14]==1))
){

	if ( x[5] <= 0.5 ) {
assert (0);
} else {
if ( x[15] <= 0.5 ) {
assert (0);
} else {
if ( x[0] <= 0.5 ) {
assert (0);
} else {
if ( x[10] <= 0.5 ) {
assert (0);
} else {
if ( x[13] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
assert (0);
} else {
if ( x[11] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
assert (0);
} else {
if ( x[4] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
} else {
assert (1);
}
}
} else {
if ( x[8] <= 0.5 ) {
if ( x[2] <= 0.5 ) {
assert (0);
} else {
if ( x[4] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
} else {
assert (1);
}
}
} else {
assert (1);
}
}
}
} else {
if ( x[9] <= 0.5 ) {
if ( x[6] <= 0.5 ) {
assert (0);
} else {
if ( x[2] <= 0.5 ) {
assert (1);
} else {
if ( x[4] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
} else {
if ( x[12] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
} else {
assert (1);
}
}
}
}
} else {
if ( x[11] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
assert (0);
} else {
assert (1);
}
} else {
assert (1);
}
}
}
}
}
}
}
}
	
}