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
  //  layer 0: dense_3
 
    if(((x[0] == 1 && x[5] == 1 && x[10] == 1 && x[15] == 1)
))

 {
  float layer0[3];
  layer0[0]=-3.219510555267334 + (0.3598584830760956)*x[0] + (-0.3719247877597809)*x[1] + (0.4710521399974823)*x[2] + (0.17639562487602234)*x[3] + (-0.10779105126857758)*x[4] + (1.0678237676620483)*x[5] + (0.030905047431588173)*x[6] + (-0.22661350667476654)*x[7] + (-0.5163539052009583)*x[8] + (-0.11312868446111679)*x[9] + (1.081300973892212)*x[10] + (-0.49530479311943054)*x[11] + (0.0766347348690033)*x[12] + (-0.36111825704574585)*x[13] + (-0.17914587259292603)*x[14] + (1.1821255683898926)*x[15];
  layer0[1]=-3.3820629119873047 + (1.2654012441635132)*x[0] + (0.04238281026482582)*x[1] + (-0.14878761768341064)*x[2] + (0.015024472959339619)*x[3] + (-0.19467562437057495)*x[4] + (1.009377121925354)*x[5] + (-0.2224583625793457)*x[6] + (0.21614336967468262)*x[7] + (0.2820749282836914)*x[8] + (-0.03857564926147461)*x[9] + (0.6675033569335938)*x[10] + (0.2423812747001648)*x[11] + (0.010823304764926434)*x[12] + (0.1246895045042038)*x[13] + (-0.18924908339977264)*x[14] + (1.1057873964309692)*x[15];
  layer0[2]=-3.366603374481201 + (1.3281314373016357)*x[0] + (0.43934372067451477)*x[1] + (-0.3642432689666748)*x[2] + (-0.28079402446746826)*x[3] + (0.5474534630775452)*x[4] + (0.8461966514587402)*x[5] + (0.4067400097846985)*x[6] + (-0.11836560070514679)*x[7] + (0.15846332907676697)*x[8] + (0.23986947536468506)*x[9] + (1.5207679271697998)*x[10] + (0.2093265801668167)*x[11] + (-0.13012002408504486)*x[12] + (0.25749894976615906)*x[13] + (0.6371771097183228)*x[14] + (0.48889434337615967)*x[15];

  //  layer 1: dense_2
  float layer1[2];
  layer1[0]=2.3191020488739014 + (-5.128552436828613)*layer0[0] + (-7.0640950202941895)*layer0[1] + (-3.7639522552490234)*layer0[2];
  layer1[1]=-2.3191020488739014 + (5.240611553192139)*layer0[0] + (7.805462837219238)*layer0[1] + (3.567462205886841)*layer0[2];




  if(layer1[0]>layer1[1])  {
    assert(0);
  }
  else
  {
	assert(1);
  }
}
}