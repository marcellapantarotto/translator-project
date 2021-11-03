int read_func(int a, int b, int c) {
  writeln(a);
  writeln(b);  
  writeln(c);  
  return a;
}

int read_func2(int a, int b, int c) {
  writeln(a);
  writeln(b);  
  writeln(c);  
  return a;
}

int main() {
  // write("Hello ");
  // writeln("World");
  int x;
  x = 2;
  read_func(x, 1, 4);
  read_func2(x, 1, 4);
  return 0;
}

























// int i;

// int fib(int i){
//   if (i == 1) return 1;
//   else if (i == 2) return 1;
//   else return fib(i-1) + fib(i-2);
// }

// int main() {
//   int i; i = 0;

//   read(i);
//   if (i >0) write(fib(i));
// }
///////////////////////////////////////////////////////////////
// int main() {

//   float list notas;
//   notas = NIL;
//   int n;

//  writeln("Qual o número de provas?"); read(n);

//  int i;

//  for (i = 0; i < n; i = i + 1) {
//    float nota;

//    write("Digite a nota da prova "); write(n); writeln(":");
//    read(nota);
//    notas = nota : notas;
//  }

//  float soma; soma = 0;
//  float list AUX;

//  for (AUX=notas; AUX != NIL; AUX = !AUX)
//     soma = soma + ?AUX;

//  float media1; float media2;

//  media1 = soma/n - 10 * (1/10);
//  media2 = soma/n;

//  if (media1 != media2) writeln("Há um problema no cálculo da média");
//  else if (media1 == media2
//     && media1 >= 5) writeln("Parabéns!");
// }
/////////////////////////////////////////
// int main() {
//   int i;
//   float f;
//   int list il;
//   float list fl;

//   i = i + il;
//   i = i + l;
//   i = x + !fl;
//   i = x + %fl;
//   il = il + fl;
//   il = il : fl;
//   il = !%?fl;
//   return 4.5;
// }
////////////////////////////////////////////
// int a;

// int func1(int x, int y) {
//   a = 3;
//   return -a*2 + x/4 - x+4/y*3;
// }

// int func2(int x) {
//   a = 1;
//   if(x / 2 == 0) { writeln("number is even"); }
//   else { writeln("number is odd"); }

//   if(!(x != 0)) { writeln("number is zero"); }

//   return x+a;
// }

// int main() {
//   a = 7;
//   int x;
//   write("Input a number: ");
//   read(x);

//   func2(x);
//   func1(x, x+a);

//   return 0;
// }
//////////////////////////////////////////////////
// float list my_list;
// int list my_other_list;

// int succ(int i) {
// 	return i+1;
// }

// int main()
// {
//   int i;
//   int x;
//   my_list = NIL;
//   for (i = 0; i < 10; i = i + 1) {
//       // int x;
// 		writeln("Write 10 elements to the my_list: ");
// 		read(x);
// 		my_list = x : my_list;
// 	}

//    my_other_list = succ >> my_list;

//    for (i = 0; i < 10; i = i + 1) {
//     x = 2 + i;
//     my_other_list = x : my_other_list;
// 	}

//    if(my_list != NIL && my_list != NIL) {
//       writeln("Lists are not empty!");
//    }
   
//    if (my_list == NIL ) {
//       writeln("My list is empty");
//    } else if (my_list != NIL ) {
//       writeln("My list is not empty");
//    } else {
//       writeln("We have a list");
//    }

//    my_list = succ << my_list;

//    writeln(! my_list);
//    writeln(% my_other_list);

//    return 0;
// }
///////////////////////////////////////////////

// int func1(float y) {
//   int x; int i;
//   read(x);
//   writeln(x);
//   x = 0.5 + 3;

//   for (i = 0; i < 20; i = i+1)
//   {
//     y = x-3.4+72 > 0.3*29-37/i;
//     write("Y = "); writeln(y);
//     return y;
//   }
// }

// int func2(int x, float y) {
//   int i;
//   read(x);
//   writeln(x);
  
//   for (i = 0; i < 20; i = i+1)
//   {
//     x = y*93-15/0.32+86*i-0.3/5.7;
//     write("X = "); writeln(x);
//     return x;
//   }
// }

// int main() {
//   float x; int a;
//   a = 7;
//   write("Input a number: ");
//   read(x);

//   func2(x, x+a);
//   func1(x);

//   return 0;
// }
///////////////////////////////////////////
// int                  list              i;

// int fib(int i){

// if (i == 1) return 1;

// else if (i == 2) return 1;

// else return fib(i-1) + fib(i-2);

// }

// int main() {

// float i;

// read(i);

// if (i < 0) {

// write("Forneça um número maior do que zero.");

// return ! (1 + 5) <= 10 - 3 - 2 && (!1 + !5 <= 10 + (-3 - 2));

// } else i = fib(i);

// write("O resultado é:");
// writeln(i);

// return -1/2/3/4/5 - 0;

// }
//////////////////////////////////////////////////
// int a;

// int fn(int a) {
//     read(a);
//     write("local a: ");
//     writeln(a);
//     return a + 3.65 * 2.5 - ?(!(1 : 2 : 3 : NIL)) / 8;
// }

// int main() {
//     a = 10;
//     if (a) {
//         int b;
//         b = fn(a);
//         int a;
//         for (a = b; a >= 0; a = a - 2) {
//             writeln(a);
//         }
//         write("if scope a: ");
//         writeln(a);
//     }
//     if(a == 10) {
//         write("global a remains ");
//         writeln(a);
//     }
//     else writeln("something's not right");
// }
/////////////////////////////////////////////
// int a;

// int fn(int a) {
//     read(a);
//     write("local a: ");
//     writeln(a);
//     return a + 3.65 * 2.5 - ?(!(1 : 2 : 3 : NIL)) / 8;
// }

// float c(float k) {
//     return k * k+1 --2 ++3 -k--k + ?!(7: 5.3 : NIL);
// }

// int main() {
//     a = 10;
//     int b;
//     int i;
//     for (i = fn(a); (i + 3 - ?!!(7 : (9 >= 4) : c(i) : NIL) <= c(a + i)) && i >= 0; i = i - 4) {
//         write("i = ");
//         writeln(i);
//         return 0;
//     }
// }
///////////////////////////////////////
// int c(int k) {
//     return k * 2 - 4;
// }

// float a1f(int j) {
//     return j + 1.5;
// }

// int n35(float l) {
//     return l - 3.5;
// }

// int main() {
//     float list b;
//     b = n35 << a1f >> c >> a1f >> c >> ((6 < 4) : (2 == 1) : (4 >= 32) : 5 + !3 : -8*-5 : n35(a1f(c(3))) : NIL);
//     writeln(?b);
// }