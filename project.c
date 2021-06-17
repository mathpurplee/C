#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* link;
} node;   // struct node = node

node *new_node = NULL,   *head = NULL, *temp = NULL;  // 전역변수 -  stack area

int main(void) {
	int num;
	printf("*new_node의 주소 = %d, 값 = %x\n", &new_node, new_node);
	printf("*head의 주소 = %d, 값 = %x\n", &head, head);
	printf("*temp의 주소 = %d, 값 = %x\n", &temp, temp);

	new_node = (node*)malloc(sizeof(node));
	new_node->data = 1;
	new_node->link = NULL;
	head = temp = new_node;

	printf("*head->data = %d, *temp->data = %d\n", &head->data, &temp->data);
	printf("new_node->data의 주소 = %d, 값 = %d\n", &new_node->data, new_node->data);
	
	num = 2;
	while (num <= 10) {
		new_node = (node*)malloc(sizeof(node));  // 새로운 주소로 동적 메모리 할당
		if (new_node == NULL) {
			printf("memory allocation error\n");
			return(0);
		}
		new_node->data = num; 
		new_node->link = NULL;
		temp->link = new_node;  // 새로 동적 메모리 할당한 주소(포인터 new_node의 값)를 temp->link에 임시저장
		temp = new_node; // 
		num += 1;
		printf("new_node->data의 주소 = %d, 값 = %d\n", &new_node->data, new_node->data);
	 }
	 
	temp = head;
	while (temp != NULL) {
		printf("temp->data의 주소 = %d, 값 = %d\n", &temp->data, temp->data);
		temp = temp->link;
	}
}