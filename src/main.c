#include<../inc/defns.h>
#include<../inc/src_func_defns.h>


int main()
{
   printf(" \n *** Example of passing values through double & single pointers through more than one function *** \n");

   int a=10, b=20;

   // single pointer
   int *app = &a;

   // double pointer
   int *cf   = &b;
   int **cfg = &cf;

   // calling the first func
   //call_func_one(app, cfg);
   
   call_func_one(&a, &cf);


   printf("\n [main]  app : %d; cfg = %d \n", *app, **cfg);

   return 0;
}
