#include <stdio.h>

int main(int argc, char **argv) {
  if (argc < 2) {
    printf("No command line argument provided, please provide a name.");
    return 1;
  }
  printf("Hello %s, how is your day today?", argv[1]);

  return 0;
}
