#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100
typedef int element; // ������ �ڷ��� int�� element�� ȣ���Ұ���
element stack[MAX_STACK_SIZE]; // element�� ���� 1���� �迭
int top = -1; // ������ top�� �ʱ갪 -1

int is_empty() {
	return top == -1; // top�� == -1 �̶�� return 1 , Ʋ���� -1 
}

int is_full() {
	return top == (MAX_STACK_SIZE - 1);
}

void push(element item) {
	if (is_full()) {
		fprintf(stderr, "���� ��ȭ ����\n");
		return;
	}
	else
		stack[++top] = item; // �����ϱ����� top �Ѵܰ� ���� �÷�����
}

element pop() {
	if (is_empty()) {
		fprintf(stderr, "���� ���� ����\n");
		return;
	}
	else
		return stack[top--]; // ��ȯ�ϰ� top ��������
}

element peek() { // ������ ž�� ���� ���ϴ� �Լ�
	if (is_empty()) {
		fprintf(stderr, "���� ���� ����\n");
		return;
	}
	else
		return stack[top];
}

int main(void) {
	push(1);
	push(2);
	push(3);
	printf("%d\n", pop());
	printf("%d\n", pop());
	printf("%d\n", pop());

}