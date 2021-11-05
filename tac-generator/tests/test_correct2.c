float minus_func(float a) {
   write("-1 * "); write(a); 
   a = -a;
   write(" = "); writeln(a);
   return a;
}

float multiply_func(float a, float b) {
   write(b); write(" * "); write(a);  
   b = b*a;
   write(" = "); writeln(b);
   return b;
}

float div_func(float a, float b) {
   write(a); write(" * "); write(b);  
   a = a / b;
   write(" = "); writeln(a);
   return a;
}

int main() {
  float x; float y; float x1; float x2; float x3;
  write("Input a float number (x): ");
  read(x);
  x1 = x; x2 = x;
  
  x1 = minus_func(x);
  write("The negative (-x) = ");
  writeln(x1);

  write("Input another float number (y): ");
  read(y);

  x2 = multiply_func(x, y);
  write("The multiplication is (y*x) = ");
  writeln(x2);

  x3 = div_func(x, y);
  write("The division is (x/y) = ");
  writeln(x3);

  write("The operation is (x*y*(-x)) = ");
  x = x2 * x1;
  writeln(x);
}