#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 20

typedef int element;
element size;

typedef struct {
	element *data;
	element capacity;
	element top;
} StackType;

void init_stack(StackType* s) {
	s->top = -1;
	s->capacity = 1;
	s->data = (element*)malloc(size * sizeof(element));
}

int is_empty(StackType* s) {
	return s->top == -1;
}

int is_full(StackType* s) {
	return s->top == (MAX_STACK_SIZE - 1);
}

void push(StackType* s, element item) {
	if (is_full(s)) {
		fprintf(stderr, "���� ��ȭ ����\n");
		return;
	}
	else
		s->data[++(s->top)] = item;
}

int pop(StackType* s) {
	if (is_empty(s)) {
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	else
		return s->data[(s->top)--];
}
void print_stack(StackType* s) {
	for (int i = 0; i <= s->top; i++) {
		printf("%d ", s->data[i]);
	}
	printf("\n");
}
void print_reverse(StackType* s) {
	printf("������ ���� �迭: ");
	for (int i = s->top; i > -1; i--) {
		printf("%d ", pop(s));
	}
}
int main(void) {
	StackType s;

	printf("���� �迭�� ũ��: ");
	scanf("%d", &size);
	init_stack(&s);
	int n = 0;
	printf("������ �Է��Ͻÿ�: ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &n);
		push(&s, n);
	}
	print_reverse(&s);
} 