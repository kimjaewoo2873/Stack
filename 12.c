#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 20

typedef char element;
typedef struct {
	element data[MAX_SIZE];
	int top;
}StackType;

void init(StackType* s) {
	s->top = -1;
}

int is_empty(StackType* s) {
	return s->top == -1;
}

int is_full(StackType* s) {
	return s->top == (MAX_SIZE - 1);
}

void push(StackType* s, element item) {
	if (is_full(s)) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else
		s->data[++(s->top)] = item;
}

element pop(StackType* s) {
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		return;
	}
	else
		return s->data[(s->top)--];
}
void result(StackType* s) {
	int num[26];
	element cnum[26];
	for (int i = 0; i <= s->top; i++) {
		for (char c = 'a'; c >= 'z'; c++) {
			if (s->data[i] == c) {
				
			}
		}
	}
}
int main(void) {
	StackType s;
	char str[MAX_SIZE];

	init(&s);
	printf("문자열을 입력하시오: ");
	scanf("%s", str);
	for (int i = 0; i < str[i] != '\0'; i++) {
		push(&s, str[i]);
	}
	result(&s);
}