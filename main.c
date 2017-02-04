#include <stdio.h>

int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);

int main(int argc, char* argv[])
{
  int op1, op2, ans;
  char operator;

  printf("Enter an expression: ");
  scanf("%d %c %d", &op1, &opertor, &op2)
  switch (opertor) {
    case '+':
      ans = add(op1, op2);
      break;
    case '-':
      ans = sub(op1, op2);
      break;
    case '*':
      ans = mult(op1, op2);
      break;
    case '/':
      ans = div(op1, op2);
      break;
  }
  printf("Result is %d.\n", ans);
}
