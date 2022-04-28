#include <stdio.h>
#include <stdlib.h>

// typedef struct linked_list
// {
// 	int data;
// 	struct linked_list* next;
// } element;

// TYPE
struct linked_list {
	int data;
	struct linked_list * next;
};

typedef struct linked_list element;

typedef element* elementptr;



void printLL(elementptr first) {
	elementptr current = first;
	int element_num = 0;

	while (current != NULL) {
		printf("Element Number: %d - Data: %d\n", element_num, current -> data);
		current = current -> next;
		element_num++;
	}
}



int main() {

	/// Remember to declare the pointers you need to use
	elementptr current, first, last;

	/// Create your first node
	current = (elementptr) malloc(sizeof(element));
	current -> data = 10;

	// These steps are specific to setting up the first element
	first = current;
	last = current;

	/// Create second node: This code is general to any insert at the end of the LL!!
	last -> next = (elementptr) malloc(sizeof(element)); // create new object
	last = last -> next;								 // move last pointer to the element you just made
	last -> next = NULL;								 // set the last element to point to NULL
	last -> data = 20;									 // change data of the new element

	/// Create 3rd node (same code as above)
	last -> next = (elementptr) malloc(sizeof(element));
	last = last -> next;
	last -> next = NULL;
	last -> data = 30;

	/// Create 4th node (same code as above)
	last -> next = (elementptr) malloc(sizeof(element));
	last = last -> next;
	last -> next = NULL;
	last -> data = 40;

	printf("All FOUR elements have been inserted now.\n");// Now, current points to the element you want to delete
	printLL(first);

	// DELETING THE LAST ELEMENT
	elementptr delete_this = last;
	// find the new last element (which is right before the element that last points to right now)
	current = first;
	while (current->next != last) {
		current = current -> next;
	}
	// Now, current points to the element before last
	current -> next = NULL;
	free(delete_this);

	/// THERE ARE THREE ELEMENTS IN THE LL NOW
	printf("\nThere are three elements in the LL now.\n");
	printLL(first);


	/// Deleting A MIDDLE element whose data is 20
	elementptr delete_this_now, prev;
	current = first -> next;
	prev = first;
	// find the element to delete
	while (current -> data != 20) {
		prev = current;
		current = current -> next;
	}
	delete_this_now = current;			// Now, current points to the element you want to delete

	// Link the LL around the node you are going to delete
	prev -> next = current -> next;
	free(delete_this_now);

	printf("\nThere are two elements in the LL now.\n");
	printLL(first);

	/// Deleting the first element of the LL now (data == 10)
	elementptr delete_this_three;
	delete_this_three = first;
	first = first->next;
	free(delete_this_three);

	printf("\nThere is 1 element now.\n");
	printLL(first);



	return 0;
}