int add_func(int a, int b) {
  int c;
  write(a);  
  write(" + ");
  write(b);
  write(" = ");   

  c = a + b;
  writeln(c);

  return c;
}

int sub_func(int a, int b) {
  int c;
  write(a);  
  write(" - ");
  write(b);
  write(" = ");   

  c = a - b;
  writeln(c);

  return c;
}

int minus_func(int a) {
   write("-1 * "); write(a); 
   a = -a;
   write(" = "); writeln(a);
   return a;
}

int main() {
  int x; int y; int x1; int x2; int x3;

  write("Input a integer number (x): ");
  read(x);

  x1 = minus_func(x);
  write("The negative (-x) = ");
  writeln(x1);

  write("Input another integer number (y): ");
  read(y);

  x2 = add_func(x, y);
  write("The addition is (x+y) = ");
  writeln(x2);

  x3 = sub_func(x1, y);
  write("The subtraction is (x-y) = ");
  writeln(x3);

  write("The operation is (x-(-x)) = ");
  x = x - x1;
  writeln(x);
}