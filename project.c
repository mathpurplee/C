#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* link;
} node;   // struct node = node

node *new_node = NULL,   *head = NULL, *temp = NULL;  // �������� -  stack area

int main(void) {
	int num;
	printf("*new_node�� �ּ� = %d, �� = %x\n", &new_node, new_node);
	printf("*head�� �ּ� = %d, �� = %x\n", &head, head);
	printf("*temp�� �ּ� = %d, �� = %x\n", &temp, temp);

	new_node = (node*)malloc(sizeof(node));
	new_node->data = 1;
	new_node->link = NULL;
	head = temp = new_node;

	printf("*head->data = %d, *temp->data = %d\n", &head->data, &temp->data);
	printf("new_node->data�� �ּ� = %d, �� = %d\n", &new_node->data, new_node->data);
	
	num = 2;
	while (num <= 10) {
		new_node = (node*)malloc(sizeof(node));  // ���ο� �ּҷ� ���� �޸� �Ҵ�
		if (new_node == NULL) {
			printf("memory allocation error\n");
			return(0);
		}
		new_node->data = num; 
		new_node->link = NULL;
		temp->link = new_node;  // ���� ���� �޸� �Ҵ��� �ּ�(������ new_node�� ��)�� temp->link�� �ӽ�����
		temp = new_node; // 
		num += 1;
		printf("new_node->data�� �ּ� = %d, �� = %d\n", &new_node->data, new_node->data);
	 }
	 
	temp = head;
	while (temp != NULL) {
		printf("temp->data�� �ּ� = %d, �� = %d\n", &temp->data, temp->data);
		temp = temp->link;
	}
}