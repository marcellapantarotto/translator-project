int main()
{
   int i;
   int x;
   x = 0;
   int y;
   y = 0;
   int count;
   count = 20;
   int aux;
   aux = 3;

   for (i = 0; i < count; i = i+1)
   {
      x = x + i;
      y = aux + y;
      aux = aux +1;
   }

   if (x < y && aux < 0 )
   {
      writeln("New day");
   }

   if (x > y || 7 > 5 )
   {
      writeln("Another day");
   }

   if (x < y && aux < 0 || x > y && 7 > 5 )
   {
      writeln("The sun is shinning");
   }  

   if (5 > 2 && 3 < 4 || x < y && 7 > 5 )
   {
      writeln("The sun is hot");
   }  
  
  return 0;
}