#include <stdio.h>
#include <stdlib.h>

void push(int i) {
	printf("push(%d): unimplemented\n", i);
}

int pop(void) {
	printf("pop: unimplemented\n");
	return 0;
}

int peek(void) {
	printf("peek: unimplemented\n");
	return 0;
}

/*
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
*/
