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
		if(((x[1]==1 && x[4]==1 && x[0]==0) ||(x[1]==1 && x[6]==1 && x[2]==0) ||(x[1]==1 && x[7]==1 && x[3]==0) ||(x[2]==1 && x[8]==1 && x[0]==0) ||(x[2]==1 && x[9]==1 && x[1]==0) ||(x[2]==1 && x[11]==1 && x[3]==0) ||(x[3]==1 && x[12]==1 && x[0]==0) ||(x[3]==1 && x[13]==1 && x[1]==0) ||(x[3]==1 && x[14]==1 && x[2]==0) ||(x[4]==1 && x[1]==1 && x[5]==0) ||(x[4]==1 && x[2]==1 && x[6]==0) ||(x[4]==1 && x[3]==1 && x[7]==0) ||(x[6]==1 && x[8]==1 && x[4]==0) ||(x[6]==1 && x[9]==1 && x[5]==0) ||(x[6]==1 && x[11]==1 && x[7]==0) ||(x[7]==1 && x[12]==1 && x[4]==0) ||(x[7]==1 && x[13]==1 && x[5]==0) ||(x[7]==1 && x[14]==1 && x[6]==0) ||(x[8]==1 && x[1]==1 && x[9]==0) ||(x[8]==1 && x[2]==1 && x[10]==0) ||(x[8]==1 && x[3]==1 && x[11]==0) ||(x[9]==1 && x[4]==1 && x[8]==0) ||(x[9]==1 && x[6]==1 && x[10]==0) ||(x[9]==1 && x[7]==1 && x[11]==0) ||(x[11]==1 && x[12]==1 && x[8]==0) ||(x[11]==1 && x[13]==1 && x[9]==0) ||(x[11]==1 && x[14]==1 && x[10]==0) ||(x[12]==1 && x[1]==1 && x[13]==0) ||(x[12]==1 && x[2]==1 && x[14]==0) ||(x[12]==1 && x[3]==1 && x[15]==0) ||(x[13]==1 && x[4]==1 && x[12]==0) ||(x[13]==1 && x[6]==1 && x[14]==0) ||(x[13]==1 && x[7]==1 && x[15]==0) ||(x[14]==1 && x[8]==1 && x[12]==0) ||(x[14]==1 && x[9]==1 && x[13]==0) ||(x[14]==1 && x[11]==1 && x[15]==0))
){
	if ( x[11] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
if ( x[2] <= 0.5 ) {
if ( x[6] <= 0.5 ) {
if ( x[12] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
assert (0);
} else {
if ( x[13] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
}
} else {
if ( x[14] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
assert (0);
} else {
if ( x[13] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
}
} else {
assert (10);
}
}
} else {
assert (0);
}
} else {
if ( x[8] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
assert (0);
} else {
if ( x[14] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
} else {
if ( x[4] <= 0.5 ) {
assert (10);
} else {
if ( x[12] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
assert (0);
}
}
}
}
} else {
if ( x[8] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
if ( x[12] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
assert (0);
} else {
if ( x[6] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
}
} else {
assert (10);
}
} else {
assert (0);
}
} else {
if ( x[6] <= 0.5 ) {
assert (10);
} else {
if ( x[13] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
if ( x[12] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
assert (0);
}
} else {
if ( x[12] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
}
} else {
if ( x[0] <= 0.5 ) {
assert (10);
} else {
if ( x[10] <= 0.5 ) {
assert (10);
} else {
if ( x[5] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
if ( x[6] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
if ( x[6] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
} else {
if ( x[6] <= 0.5 ) {
assert (0);
} else {
if ( x[4] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
}
}
}
}
} else {
if ( x[2] <= 0.5 ) {
if ( x[6] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
assert (0);
} else {
if ( x[8] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
} else {
if ( x[13] <= 0.5 ) {
assert (10);
} else {
if ( x[12] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
assert (0);
}
}
}
} else {
if ( x[5] <= 0.5 ) {
assert (10);
} else {
if ( x[10] <= 0.5 ) {
assert (10);
} else {
if ( x[14] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
if ( x[13] <= 0.5 ) {
assert (10);
} else {
if ( x[4] <= 0.5 ) {
assert (0);
} else {
if ( x[8] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
}
}
}
}
} else {
assert (10);
}
}
} else {
if ( x[4] <= 0.5 ) {
if ( x[6] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
if ( x[12] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
assert (0);
} else {
if ( x[14] <= 0.5 ) {
assert (0);
} else {
if ( x[13] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
} else {
if ( x[13] <= 0.5 ) {
assert (10);
} else {
if ( x[14] <= 0.5 ) {
if ( x[2] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
assert (0);
}
}
}
} else {
if ( x[9] <= 0.5 ) {
assert (10);
} else {
if ( x[13] <= 0.5 ) {
if ( x[12] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
if ( x[2] <= 0.5 ) {
assert (0);
} else {
if ( x[10] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
} else {
assert (10);
}
} else {
assert (10);
}
} else {
if ( x[2] <= 0.5 ) {
if ( x[12] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
assert (0);
}
} else {
if ( x[10] <= 0.5 ) {
assert (10);
} else {
if ( x[0] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
}
}
}
} else {
if ( x[2] <= 0.5 ) {
assert (10);
} else {
if ( x[8] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
if ( x[12] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
assert (10);
}
} else {
assert (0);
}
} else {
if ( x[5] <= 0.5 ) {
assert (10);
} else {
if ( x[10] <= 0.5 ) {
assert (10);
} else {
if ( x[14] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
assert (0);
}
}
}
}
} else {
assert (10);
}
}
}
} else {
if ( x[5] <= 0.5 ) {
assert (10);
} else {
if ( x[0] <= 0.5 ) {
assert (10);
} else {
if ( x[8] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
if ( x[10] <= 0.5 ) {
assert (0);
} else {
if ( x[15] <= 0.5 ) {
if ( x[2] <= 0.5 ) {
assert (0);
} else {
if ( x[6] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
} else {
assert (0);
}
}
} else {
if ( x[12] <= 0.5 ) {
assert (10);
} else {
if ( x[2] <= 0.5 ) {
assert (0);
} else {
if ( x[6] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
}
} else {
assert (10);
}
} else {
if ( x[9] <= 0.5 ) {
assert (10);
} else {
if ( x[2] <= 0.5 ) {
if ( x[6] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
assert (0);
} else {
if ( x[13] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
} else {
assert (10);
}
} else {
if ( x[10] <= 0.5 ) {
assert (10);
} else {
if ( x[6] <= 0.5 ) {
assert (10);
} else {
if ( x[13] <= 0.5 ) {
assert (0);
} else {
if ( x[14] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
}
}
}
}
}
}
}
}
} else {
if ( x[1] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
if ( x[2] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
if ( x[12] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
assert (0);
}
} else {
if ( x[12] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
assert (0);
} else {
if ( x[6] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
} else {
if ( x[10] <= 0.5 ) {
assert (10);
} else {
if ( x[0] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
} else {
assert (10);
}
}
} else {
if ( x[6] <= 0.5 ) {
assert (10);
} else {
if ( x[8] <= 0.5 ) {
if ( x[12] <= 0.5 ) {
assert (0);
} else {
if ( x[4] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
} else {
if ( x[12] <= 0.5 ) {
assert (10);
} else {
if ( x[4] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
}
}
} else {
if ( x[5] <= 0.5 ) {
assert (10);
} else {
if ( x[15] <= 0.5 ) {
assert (10);
} else {
if ( x[4] <= 0.5 ) {
if ( x[12] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
assert (0);
} else {
if ( x[6] <= 0.5 ) {
assert (10);
} else {
if ( x[8] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
}
}
} else {
assert (10);
}
} else {
if ( x[12] <= 0.5 ) {
assert (10);
} else {
if ( x[2] <= 0.5 ) {
assert (0);
} else {
if ( x[14] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
}
}
}
}
} else {
assert (10);
}
} else {
assert (10);
}
}
} else {
if ( x[8] <= 0.5 ) {
if ( x[12] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
if ( x[2] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
if ( x[6] <= 0.5 ) {
assert (0);
} else {
if ( x[1] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
}
} else {
assert (10);
}
} else {
if ( x[6] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
assert (0);
} else {
if ( x[14] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
}
} else {
assert (0);
}
}
} else {
if ( x[1] <= 0.5 ) {
assert (10);
} else {
if ( x[7] <= 0.5 ) {
if ( x[2] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
if ( x[6] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
assert (10);
}
} else {
if ( x[14] <= 0.5 ) {
if ( x[6] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
assert (0);
}
}
} else {
if ( x[5] <= 0.5 ) {
assert (10);
} else {
if ( x[15] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
}
}
} else {
if ( x[7] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
if ( x[6] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
if ( x[2] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
assert (10);
}
} else {
assert (0);
}
} else {
if ( x[5] <= 0.5 ) {
assert (10);
} else {
if ( x[13] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
}
}
} else {
if ( x[2] <= 0.5 ) {
assert (10);
} else {
if ( x[1] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
} else {
assert (10);
}
}
} else {
if ( x[7] <= 0.5 ) {
assert (10);
} else {
if ( x[13] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
assert (0);
} else {
if ( x[0] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
} else {
if ( x[2] <= 0.5 ) {
assert (10);
} else {
if ( x[6] <= 0.5 ) {
assert (10);
} else {
if ( x[1] <= 0.5 ) {
assert (0);
} else {
if ( x[5] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
}
}
} else {
assert (10);
}
} else {
assert (10);
}
}
}
} else {
if ( x[15] <= 0.5 ) {
assert (10);
} else {
if ( x[0] <= 0.5 ) {
assert (10);
} else {
if ( x[9] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
assert (0);
} else {
if ( x[2] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
} else {
if ( x[7] <= 0.5 ) {
assert (10);
} else {
if ( x[10] <= 0.5 ) {
assert (0);
} else {
if ( x[6] <= 0.5 ) {
assert (0);
} else {
if ( x[14] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
}
}
} else {
assert (10);
}
} else {
if ( x[1] <= 0.5 ) {
assert (10);
} else {
if ( x[7] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
if ( x[2] <= 0.5 ) {
if ( x[6] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
assert (0);
}
} else {
assert (10);
}
} else {
if ( x[4] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
}
} else {
if ( x[4] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
if ( x[6] <= 0.5 ) {
if ( x[5] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
assert (0);
} else {
if ( x[1] <= 0.5 ) {
assert (10);
} else {
if ( x[10] <= 0.5 ) {
assert (0);
} else {
if ( x[14] <= 0.5 ) {
assert (0);
} else {
if ( x[2] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
}
}
} else {
assert (0);
}
} else {
if ( x[10] <= 0.5 ) {
assert (10);
} else {
if ( x[13] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
if ( x[14] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
assert (10);
}
} else {
assert (0);
}
}
}
} else {
assert (10);
}
} else {
assert (10);
}
}
}
}
}
} else {
assert (10);
}
}
} else {
if ( x[14] <= 0.5 ) {
if ( x[6] <= 0.5 ) {
if ( x[2] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
if ( x[12] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
assert (0);
} else {
if ( x[9] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
assert (0);
}
} else {
assert (10);
}
} else {
if ( x[3] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
assert (0);
}
}
}
} else {
if ( x[1] <= 0.5 ) {
if ( x[5] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
assert (0);
} else {
if ( x[8] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
} else {
if ( x[7] <= 0.5 ) {
assert (10);
} else {
if ( x[9] <= 0.5 ) {
assert (0);
} else {
if ( x[8] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
}
} else {
assert (0);
}
} else {
if ( x[5] <= 0.5 ) {
assert (10);
} else {
if ( x[0] <= 0.5 ) {
assert (10);
} else {
if ( x[3] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
assert (0);
}
}
}
}
}
} else {
if ( x[8] <= 0.5 ) {
assert (10);
} else {
if ( x[1] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
assert (0);
} else {
if ( x[0] <= 0.5 ) {
assert (10);
} else {
if ( x[15] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
} else {
assert (10);
}
}
}
} else {
if ( x[9] <= 0.5 ) {
assert (10);
} else {
if ( x[7] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
if ( x[12] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
assert (0);
}
} else {
if ( x[1] <= 0.5 ) {
assert (10);
} else {
if ( x[12] <= 0.5 ) {
assert (0);
} else {
if ( x[0] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
}
} else {
if ( x[12] <= 0.5 ) {
assert (10);
} else {
if ( x[8] <= 0.5 ) {
assert (10);
} else {
if ( x[3] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
}
}
}
} else {
if ( x[5] <= 0.5 ) {
assert (10);
} else {
if ( x[15] <= 0.5 ) {
assert (10);
} else {
if ( x[12] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
if ( x[8] <= 0.5 ) {
assert (10);
} else {
if ( x[0] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
assert (0);
}
}
}
}
}
}
}
}
} else {
if ( x[3] <= 0.5 ) {
assert (10);
} else {
if ( x[12] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
assert (0);
} else {
if ( x[1] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
} else {
if ( x[10] <= 0.5 ) {
assert (10);
} else {
if ( x[0] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
} else {
if ( x[9] <= 0.5 ) {
assert (10);
} else {
if ( x[1] <= 0.5 ) {
assert (10);
} else {
if ( x[7] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
assert (0);
} else {
if ( x[10] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
} else {
if ( x[15] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
}
}
} else {
assert (10);
}
} else {
assert (10);
}
}
}
} else {
if ( x[7] <= 0.5 ) {
assert (10);
} else {
if ( x[13] <= 0.5 ) {
if ( x[12] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
assert (0);
} else {
if ( x[4] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
} else {
if ( x[2] <= 0.5 ) {
if ( x[5] <= 0.5 ) {
assert (10);
} else {
if ( x[10] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
} else {
assert (10);
}
}
} else {
if ( x[2] <= 0.5 ) {
assert (10);
} else {
if ( x[3] <= 0.5 ) {
assert (10);
} else {
if ( x[0] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
} else {
assert (10);
}
} else {
assert (0);
}
}
}
}
} else {
if ( x[2] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
if ( x[4] <= 0.5 ) {
assert (10);
} else {
if ( x[8] <= 0.5 ) {
assert (10);
} else {
if ( x[9] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
assert (0);
} else {
if ( x[0] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
} else {
if ( x[10] <= 0.5 ) {
assert (10);
} else {
if ( x[5] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
}
}
} else {
assert (10);
}
} else {
assert (10);
}
}
} else {
assert (10);
}
}
}
} else {
if ( x[15] <= 0.5 ) {
assert (10);
} else {
if ( x[10] <= 0.5 ) {
assert (10);
} else {
if ( x[12] <= 0.5 ) {
if ( x[8] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
if ( x[6] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
assert (0);
} else {
if ( x[2] <= 0.5 ) {
assert (10);
} else {
if ( x[4] <= 0.5 ) {
assert (0);
} else {
assert (10);
}
}
}
} else {
assert (10);
}
} else {
assert (0);
}
} else {
assert (10);
}
} else {
if ( x[4] <= 0.5 ) {
if ( x[9] <= 0.5 ) {
assert (10);
} else {
if ( x[1] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
assert (0);
} else {
if ( x[6] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
} else {
assert (10);
}
} else {
assert (0);
}
}
} else {
assert (10);
}
}
} else {
assert (10);
}
} else {
if ( x[8] <= 0.5 ) {
assert (10);
} else {
if ( x[6] <= 0.5 ) {
if ( x[7] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
if ( x[2] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
assert (0);
} else {
if ( x[9] <= 0.5 ) {
assert (10);
} else {
if ( x[4] <= 0.5 ) {
assert (0);
} else {
if ( x[5] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
}
} else {
assert (10);
}
} else {
if ( x[0] <= 0.5 ) {
assert (10);
} else {
if ( x[2] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
} else {
assert (10);
}
} else {
if ( x[4] <= 0.5 ) {
assert (10);
} else {
if ( x[9] <= 0.5 ) {
if ( x[13] <= 0.5 ) {
if ( x[1] <= 0.5 ) {
if ( x[3] <= 0.5 ) {
assert (0);
} else {
if ( x[2] <= 0.5 ) {
assert (10);
} else {
if ( x[0] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
} else {
assert (10);
}
} else {
assert (10);
}
} else {
if ( x[1] <= 0.5 ) {
assert (10);
} else {
if ( x[0] <= 0.5 ) {
assert (10);
} else {
if ( x[3] <= 0.5 ) {
assert (10);
} else {
assert (0);
}
}
}
}
}
}
}
}
}
}
}
}
}
}