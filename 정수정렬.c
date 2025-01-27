#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100
typedef int element; // 데이터 자료형 int를 element로 호출할거임
element stack[MAX_STACK_SIZE]; // element형 스택 1차원 배열
int top = -1; // 스택의 top는 초깃값 -1

int is_empty() {
	return top == -1; // top가 == -1 이라면 return 1 , 틀리면 -1 
}

int is_full() {
	return top == (MAX_STACK_SIZE - 1);
}

void push(element item) {
	if (is_full()) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else
		stack[++top] = item; // 삽입하기전에 top 한단계 위로 올려야함
}

element pop() {
	if (is_empty()) {
		fprintf(stderr, "스택 공백 에러\n");
		return;
	}
	else
		return stack[top--]; // 반환하고 top 내려야함
}

element peek() { // 스택의 탑의 값을 구하는 함수
	if (is_empty()) {
		fprintf(stderr, "스택 공백 에러\n");
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