
// Definition of the function (Function body)
unsigned long factorial(int n){
   unsigned long fct = 1;
   for(int i = 2; i<=n; i++)
      fct *=i;
   return fct;
}
