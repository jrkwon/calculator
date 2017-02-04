#include <stdio.h>

int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);

int main(int argc, char* argv[])
{
  int op1, op2, result;
  char operator;

  printf("Enter an expression: ");
  scanf("%d %c %d", &op1, &opertor, &op2)
  switch (opertor) {
    case '+':
      result = add(op1, op2);
      break;
    case '-':
      result = sub(op1, op2);
      break;
    case '*':
      result = mult(op1, op2);
      break;
    case '/':
      result = div(op1, op2);
      break;
  }
  printf("Result is %d.\n", result);
}
