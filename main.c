#include <stdio.h>

int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);

int main(int argc, char* argv[])
{
  int a, b, c;
  char operator;

  printf("Enter an expression.");
  scanf("%d %c %d", &a, &opertor, &b)
  switch (opertor) {
    case '+':
      c = add(a, b);
      break;
    case '-':
      c = sub(a, b);
      break;
    case '*':
      c = mult(a, b);
      break;
    case '/':
      c = div(a, b);
      break;
  }
}
