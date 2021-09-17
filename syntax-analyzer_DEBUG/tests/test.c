int gcd (int u, int v) { 
    if (v == 0) {
        return u; 
    } else {
        return gcd(v,u-u/v*v); 
      }
}

int main() { 
    int x; 
    int y;
    read(x); 
    read(y); 
    write(gcd(x,y));
}
// int main() {
//   int a;
//   a = 2;
//   if(a == 2) {
//     int b;
//     a = 3;
//   }
//   int c;
//   c = 3;
//   if(c == 2) {
//     int d;
//   }
// }