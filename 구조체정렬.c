#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100
#define MAX_STRING 100

typedef struct {
	int student_no;
	char name[MAX_STRING];
	char address[MAX_STRING];
} element; // element라는 구조체 생성

element stack[MAX_STACK_SIZE];
int top = -1; 

int is_empty2() {
	return top == -1;
}

int is_full2() {
	return top == (MAX_STACK_SIZE - 1);
}

void push2(element item) {
	if (is_full2()) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else
		stack[++top] = item;
}

element pop2() {
	if (is_empty2()) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else
		return stack[top];
}

element peek2() {
	if (is_empty2()) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else
		return stack[top];
}

int main(void) {
	element ie = { 2071463, "Hong" , "Seoul" };
	element oe;

	push2(ie);
	oe = pop2();

	printf("학번 : %d\n", oe.student_no);
	printf("이름 : %s\n", oe.name);
	printf("주소 : %s\n", oe.address);
}

