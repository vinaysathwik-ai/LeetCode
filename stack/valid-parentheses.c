#include <stdbool.h>
#include <string.h>

char stack[10000];  // increased size as per constraints
int top = -1;

void push(char ch) {
    stack[++top] = ch;
}

char pop() {
    return stack[top--];
}

bool isValid(char* s) {
    top = -1; // reset

    if (strlen(s) % 2 != 0) return false;

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if (ch == '(' || ch == '[' || ch == '{') {
            push(ch);
        } else {
            if (top == -1) return false;

            char check = pop();

            if ((ch == ')' && check != '(') ||
                (ch == ']' && check != '[') ||
                (ch == '}' && check != '{')) {
                return false;
            }
        }
    }

    return top == -1;
}