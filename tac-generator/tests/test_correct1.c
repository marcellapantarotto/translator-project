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

int main() {
  int x; int y;
  write("Input a integer number: ");
  read(x);
  write("Input another integer number: ");
  read(y);
  x = add_func(x, y);
  write("The result is: ");
  writeln(x);
}