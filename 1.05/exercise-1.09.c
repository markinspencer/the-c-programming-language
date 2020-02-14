// Exercise 1.09
// Write a program to copy its input to its output, replacing each string of one
// or more blanks by a single blank.
#include <stdio.h>

int main() {
  int c, prev;
  while((c = getchar()) != EOF) {
    if(prev != ' ' || c != ' ') {
      putchar(c);
    }
    prev = c;
  }
}