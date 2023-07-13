#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

double stack[STACK_SIZE];
int top = -1;

void push(double value) {
    if (top < STACK_SIZE - 1) {
        stack[++top] = value;
    } else {
        printf("Stack overflow!\n");
        exit(1);
    }
}

double pop() {
    if (top >= 0) {
        return stack[top--];
    } else {
        printf("Stack underflow!\n");
        exit(1);
    }
}

bool isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}

double performOperation(char operator, double operand1, double operand2) {
    switch (operator) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            if (operand2 != 0)
                return operand1 / operand2;
            else {
                printf("Division by zero!\n");
                exit(1);
            }
    }
    return 0.0;
}

double evaluateRPN(char* expression) {
    double value;
    char operator;
    while (*expression != '\0') {
        if (sscanf(expression, "%lf", &value) == 1) {
            push(value);
            while (*expression != ' ' && *expression != '\0') {
                expression++;
            }
        } else if (sscanf(expression, " %c", &operator) == 1 && isOperator(operator)) {
            double operand2 = pop();
            double operand1 = pop();
            double result = performOperation(operator, operand1, operand2);
            push(result);
            while (*expression != ' ' && *expression != '\0') {
                expression++;
            }
        } else {
            printf("Invalid expression!\n");
            exit(1);
        }
        if (*expression != '\0') {
            expression++;
        }
    }
    return pop();
}

int main() {
    char expression[100];
    printf("Enter an RPN expression: ");
    fgets(expression, sizeof(expression), stdin);
    double result = evaluateRPN(expression);
    printf("Result: %lf\n", result);
    getch();
    return 0;
}
