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
 
 if(!(!((x[1]==1  && x[4]==1)  || (x[2]==1  && x[8]==1)  || (x[3]==1  && x[12]==1)  || (x[6]==1  && x[9]==1)  || (x[7]==1  && x[13]==1)  || (x[11]==1  && x[14]==1))))
 {
  float layer0[3];
  layer0[0]=-1.089691400527954 + (0.24764476716518402)*x[0] + (0.2624315619468689)*x[1] + (0.31942400336265564)*x[2] + (-0.032587163150310516)*x[3] + (0.32093119621276855)*x[4] + (-0.09128398448228836)*x[5] + (0.501388430595398)*x[6] + (0.12827114760875702)*x[7] + (0.024445166811347008)*x[8] + (0.5545010566711426)*x[9] + (0.21798235177993774)*x[10] + (0.38242796063423157)*x[11] + (0.3529762029647827)*x[12] + (0.5814177989959717)*x[13] + (0.5961683988571167)*x[14] + (0.2066326141357422)*x[15];
  layer0[1]=-1.1982262134552002 + (0.042282965034246445)*x[0] + (0.7774353623390198)*x[1] + (0.21150456368923187)*x[2] + (0.5151585340499878)*x[3] + (0.34918689727783203)*x[4] + (-0.5565125346183777)*x[5] + (0.4698564112186432)*x[6] + (0.6852078437805176)*x[7] + (0.7706397771835327)*x[8] + (0.13643525540828705)*x[9] + (0.13717859983444214)*x[10] + (0.7148824334144592)*x[11] + (0.5749856233596802)*x[12] + (0.01659339666366577)*x[13] + (0.09340450167655945)*x[14] + (0.24702700972557068)*x[15];
  layer0[2]=0.9782706499099731 + (0.4147361218929291)*x[0] + (0.02655171975493431)*x[1] + (-0.29563382267951965)*x[2] + (-0.5198974013328552)*x[3] + (-0.23974741995334625)*x[4] + (-0.5525397658348083)*x[5] + (0.13136273622512817)*x[6] + (-0.1839311718940735)*x[7] + (-0.2858264744281769)*x[8] + (-0.0904981940984726)*x[9] + (0.3739759027957916)*x[10] + (0.10831909626722336)*x[11] + (-0.028769737109541893)*x[12] + (-0.09246252477169037)*x[13] + (-0.0703640878200531)*x[14] + (0.4586673974990845)*x[15];

  //  layer 1: dense_4
  float layer1[2];
  layer1[0]=-1.016649842262268 + (0.9973136782646179)*layer0[0] + (0.05204324424266815)*layer0[1] + (-0.8604312539100647)*layer0[2];
  layer1[1]=1.016649842262268 + (-1.080655813217163)*layer0[0] + (-1.1683313846588135)*layer0[1] + (0.7522605061531067)*layer0[2];
 



  if(layer1[0]>layer1[1])  {
    assert(10);
  }
  else
  {
	assert(0);
  }
}
}