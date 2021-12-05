#include<../inc/defns.h>
#include<../inc/src_func_defns.h>

void call_func_one(int *app, int **cfg) 
{

  printf("\n entered call_func_one \n");

  printf("[call_func_one]  app : %d; cfg = %d \n", *app, **cfg);

  call_func_two(app, cfg);

  return;

}



void call_func_two(int *app, int **cfg)
{

  printf("\n entered call_func_two \n");

  printf("[call_func_two]  app : %d; cfg = %d \n", *app, **cfg);

  *app  += 10;
  **cfg += 10; 

  return;

}
