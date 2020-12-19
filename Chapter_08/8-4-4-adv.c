#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef char VARTYPE;

typedef struct node {

	VARTYPE data;
	struct node* next;			// pointer to the next node

} Queue_Node;

typedef struct queue_ptr {		// queue pointer

	Queue_Node* head;			// head pointer of the queue
	Queue_Node* tail;			// tail pointer of the queue

} Queue_Eigen;					// name forked from linear algebra

// declare before definition

int isDigit(VARTYPE x);
int isEmptyQueue(Queue_Eigen* q);
int Queue_Size(Queue_Eigen* q);
int initQue(Queue_Eigen* q);
int enQue(Queue_Eigen* q, VARTYPE obj);
VARTYPE* deQue(Queue_Eigen* q);

int main() {

	Queue_Eigen que;					// declare a new queue

	initQue(&que);						// initialize the queue

	VARTYPE ch;							// declare a char for input temp

	while (~scanf("%c", &ch)) {			// the inverse of -1 is 0

		if (isDigit(ch)) {

			enQue(&que, ch);			// if it is number, enqueue it

		}

	}

	VARTYPE* chp;						// a char* to receive pointer from function deQue()

	while (!isEmptyQueue(&que)) {		// if the queue is not empty

		chp = deQue(&que);				// pop out the first real node
		printf("%c", *chp);

		free(chp);						// release the temporary space

	}
}

int isDigit(VARTYPE x) {

	return x >= '0' && x <= '9';

}

int isEmptyQueue(Queue_Eigen* q) {

	return q->head == q->tail;			// the queue is empty if both pointer point to the empty head node

}

int Queue_Size(Queue_Eigen* q) {

	Queue_Node* ptr = q->head->next;	// declare a new pointer following the head

	int cnt = 0;						// initialize the counter

	while (ptr != NULL) {				// while the pointer does not exceed the tail

		cnt++;							// add the counter

		ptr = ptr->next;				// move forward the counter

	}

	return cnt;

}


int initQue(Queue_Eigen* q) {			// initialize the queue

	q->head = (Queue_Node*)calloc(1, sizeof(Queue_Node));	
	// assign space for the reserved head node, which will remain empty and located to a fixed address.

	q->tail = q->head;					// point the tail to the head
	q->tail->next = NULL;				// There is only a element in the queue now.

	return 0;

}

int enQue(Queue_Eigen* q, VARTYPE obj) { 	// Append a node to the rear end

	Queue_Node* newnode = (Queue_Node*)calloc(1, sizeof(Queue_Node));
											// assign space for a new node, for following data store

	newnode->data = obj;					// fill in data
	newnode->next = NULL;					// it will be the new tail of the queue

	q->tail->next = newnode;				// point the "next" pointer of the current tail to the new node
	q->tail = newnode;						// move forward the tail pointer

	return 0;

}

VARTYPE* deQue(Queue_Eigen* q) { 				// remove the node following the reserved head and return it

	if(isEmptyQueue(q)){

		return NULL;							// return nothing if the queue is empty

	}

	VARTYPE* Ans = (VARTYPE*)calloc(1, sizeof(VARTYPE));
												// assign new space for the final answer
	Queue_Node* targetnode = q->head->next;		// declare a node* for temporary target node store

	*Ans = targetnode->data;					// duplicate the data, the address is not essential now
	q->head->next = targetnode->next;			// move forward pointer of the next of head, to the next node of the target

	if (q->tail == targetnode) {

		q->tail = q->head;						// reset the tail if the target is the tail, the queue will be empty after pop

	}

	free(targetnode);							// release the space occupied by the target node

	return Ans;									// return the data

}
