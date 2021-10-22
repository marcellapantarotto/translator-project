int main() {
  if (1 < 2) x = 2; else if (2 < 3) x = 3; else x = 4;
  if (1 < 2) if (2 < 3) if (3 < 4) x = 1; else x = 2;
  if (1 < 2) x = 2; else if (2 < 3) if (3 < 4) x = 1; else x = 2;
}
