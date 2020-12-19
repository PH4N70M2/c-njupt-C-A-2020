#include<stdio.h>
#include<stdlib.h>

typedef char VARTYPE;

typedef struct st_elem {			// a stack element

	VARTYPE data;					// actual data stored in the element
	struct st_elem* prev;			// the pointer to the previous element

} Stack_Element;

typedef struct st_ptr {

	Stack_Element* top;				// the top pointer of the stack

} Stack_Eigen;

// the declaration of the stack manuever functions 

int isemptyStack(Stack_Eigen* st);
int Stack_Size(Stack_Eigen* st);
int init_St(Stack_Eigen* st);
int push_St(Stack_Eigen* st, VARTYPE obj);
VARTYPE* pop_St(Stack_Eigen* st);

int main() {

	Stack_Eigen stk;				// the specific stack
	init_St(&stk);					// initialization

	VARTYPE ch;
	/*
		do {

			scanf("%c", &ch);
			push_St(&stk, ch);

		} while(ch != '\n');
	*/
	while (~scanf("%c", &ch)) {		// the inverse of -1 is 0 

		push_St(&stk, ch);			// push in a new element

	}

	VARTYPE* chp;

	while (!isemptyStack(&stk)) {	// while the stack has elements

		chp = pop_St(&stk);			// pop up the top element
		printf("%c", *chp);

		free(chp);					// release the space

	}

	return 0;

}

int isemptyStack(Stack_Eigen* st) {

	return st->top == NULL;			// the stack is empty if the top pointer has nothing to point to

}

int Stack_Size(Stack_Eigen* st) {

	int cnt = 0;					// assume an empty stack

	Stack_Element* ptr = st->top;	// declare a pointer pointing to the top of the stack

	while (ptr != NULL) {			// while the pointer does not exceed the bottom

		cnt++;						// add 1 to the counter

		ptr = ptr->prev;			// move forward the pointer

	}

	return cnt;

}

int init_St(Stack_Eigen* st) {

	st->top = NULL;					// point the top pointer to nothing, since it is empty at first

	return 0;

}

int push_St(Stack_Eigen* st, VARTYPE obj) {

	Stack_Element* newElem = (Stack_Element*)calloc(1, sizeof(Stack_Element));
									// assign new space for the new (top) element
	newElem->data = obj;			// fill in data
	newElem->prev = st->top;		// the new element will be the new top of the stack

	st->top = newElem;				// move the top pointer to the new element

	return 0;

}

VARTYPE* pop_St(Stack_Eigen* st) {

	if(isemptyStack(st)){

		return NULL;				// return nothing if the queue is empty

	}

	VARTYPE* Ans = (VARTYPE*)calloc(1, sizeof(VARTYPE));
									// assign new space for the data of the top element
	Stack_Element* targetElem = st->top;
									// an alternative pointer to the current top element

	*Ans = targetElem->data;		// transfer the data
	st->top = targetElem->prev;		// move the top pointer to its previous element

	free(targetElem);				//release the space

	return Ans;

}
