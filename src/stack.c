#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

int stack[SIZE], *tos = stack, *p1 = stack;

void push(int i) {
	p1++;
	if(p1 == (tos+SIZE)) {
		printf("Stack Overflow.\n");
		exit(1);
	}
	*p1 = i;
}

int pop(void) {
	if(p1 == tos) {
		printf("Stack Underflow.\n");
		exit(1);
	}
	p1--;
	return *(p1+1);
}

int peek(void) {
	return *p1;
}


