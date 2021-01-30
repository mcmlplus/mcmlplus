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
     if(!((x[0] == 1 && x[5] == 1 && x[10] == 1 && x[15] == 1)
&&
(!((x[1]==1  && x[4]==1)  || (x[2]==1  && x[8]==1)  || (x[3]==1  && x[12]==1)  || (x[6]==1  && x[9]==1)  || (x[7]==1  && x[13]==1)  || (x[11]==1  && x[14]==1)))
&&
(!((x[1]==1 && x[4]==1 && x[0]==0) ||(x[1]==1 && x[6]==1 && x[2]==0) ||(x[1]==1 && x[7]==1 && x[3]==0) ||(x[2]==1 && x[8]==1 && x[0]==0) ||(x[2]==1 && x[9]==1 && x[1]==0) ||(x[2]==1 && x[11]==1 && x[3]==0) ||(x[3]==1 && x[12]==1 && x[0]==0) ||(x[3]==1 && x[13]==1 && x[1]==0) ||(x[3]==1 && x[14]==1 && x[2]==0) ||(x[4]==1 && x[1]==1 && x[5]==0) ||(x[4]==1 && x[2]==1 && x[6]==0) ||(x[4]==1 && x[3]==1 && x[7]==0) ||(x[6]==1 && x[8]==1 && x[4]==0) ||(x[6]==1 && x[9]==1 && x[5]==0) ||(x[6]==1 && x[11]==1 && x[7]==0) ||(x[7]==1 && x[12]==1 && x[4]==0) ||(x[7]==1 && x[13]==1 && x[5]==0) ||(x[7]==1 && x[14]==1 && x[6]==0) ||(x[8]==1 && x[1]==1 && x[9]==0) ||(x[8]==1 && x[2]==1 && x[10]==0) ||(x[8]==1 && x[3]==1 && x[11]==0) ||(x[9]==1 && x[4]==1 && x[8]==0) ||(x[9]==1 && x[6]==1 && x[10]==0) ||(x[9]==1 && x[7]==1 && x[11]==0) ||(x[11]==1 && x[12]==1 && x[8]==0) ||(x[11]==1 && x[13]==1 && x[9]==0) ||(x[11]==1 && x[14]==1 && x[10]==0) ||(x[12]==1 && x[1]==1 && x[13]==0) ||(x[12]==1 && x[2]==1 && x[14]==0) ||(x[12]==1 && x[3]==1 && x[15]==0) ||(x[13]==1 && x[4]==1 && x[12]==0) ||(x[13]==1 && x[6]==1 && x[14]==0) ||(x[13]==1 && x[7]==1 && x[15]==0) ||(x[14]==1 && x[8]==1 && x[12]==0) ||(x[14]==1 && x[9]==1 && x[13]==0) ||(x[14]==1 && x[11]==1 && x[15]==0)))))


 {
  float layer0[3];
  layer0[0]=-0.09302733838558197 + (-0.13087940216064453)*x[0] + (-0.013991258107125759)*x[1] + (-0.4741862118244171)*x[2] + (-0.41636645793914795)*x[3] + (0.05782853066921234)*x[4] + (-0.05623108521103859)*x[5] + (-0.11027930676937103)*x[6] + (-0.24342571198940277)*x[7] + (-0.7487858533859253)*x[8] + (-0.3409135043621063)*x[9] + (0.024888405576348305)*x[10] + (0.21820686757564545)*x[11] + (-0.10602272301912308)*x[12] + (-0.04528582841157913)*x[13] + (-0.5594977140426636)*x[14] + (-0.18865086138248444)*x[15];
  layer0[1]=-0.15493838489055634 + (0.5179809927940369)*x[0] + (-0.3598019480705261)*x[1] + (0.07980664819478989)*x[2] + (-0.5050256252288818)*x[3] + (-0.3037503659725189)*x[4] + (-0.1198016032576561)*x[5] + (-0.8903961181640625)*x[6] + (-0.03597790002822876)*x[7] + (0.02694796212017536)*x[8] + (-0.2860451936721802)*x[9] + (0.6074464917182922)*x[10] + (0.12089385837316513)*x[11] + (0.33076128363609314)*x[12] + (0.14181385934352875)*x[13] + (0.44224247336387634)*x[14] + (0.038450688123703)*x[15];
  layer0[2]=0.24165701866149902 + (-1.0124164819717407)*x[0] + (0.35139548778533936)*x[1] + (0.6079111099243164)*x[2] + (0.21252849698066711)*x[3] + (0.4990757703781128)*x[4] + (-1.324114203453064)*x[5] + (0.24856612086296082)*x[6] + (0.4167352616786957)*x[7] + (0.41789570450782776)*x[8] + (0.5433538556098938)*x[9] + (-0.9358205795288086)*x[10] + (0.833648145198822)*x[11] + (0.8634929656982422)*x[12] + (0.837291419506073)*x[13] + (0.6602608561515808)*x[14] + (-1.0052741765975952)*x[15];

  //  layer 1: dense_2
  float layer1[2];
  layer1[0]=0.13111215829849243 + (-0.20373626053333282)*layer0[0] + (-0.8947163224220276)*layer0[1] + (1.331528663635254)*layer0[2];
  layer1[1]=-0.13111215829849243 + (0.38773855566978455)*layer0[0] + (0.09671403467655182)*layer0[1] + (-0.3717239797115326)*layer0[2];
 



  if(layer1[0]>layer1[1])  {
    assert(0);
  }
  else
  {
	assert(1);
  }
}
}