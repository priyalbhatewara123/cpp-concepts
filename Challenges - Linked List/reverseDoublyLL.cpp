/*
(1)
Reverse a doubly Linked List.
Eg:
Input: 1<--> 2 <--> 3 <--> 4 <--> 5 <-->6
Output: 6 <--> 5 <--> 4 <--> 3 <--> 2 <--> 1

*/

#include<bits/stdc++.h>
using namespace std;

class node {
public:
	int data;
	node* next;
	node* prev;

	node(int d) {
		data = d;
		next = NULL;
		prev = NULL;
	}
};

//function insert() inserts the data into the beginning of the doubly linked list.
void insertAtHead(node* &head , int d) {

	if (head == NULL) {
		head = new node(d);
		return;
	}

	node* n = new node(d);
	n -> next = head;
	n -> prev = NULL;
	head -> prev = n;
	head = n;
}


//reverse a doubly LL
void reverse(node* &head)
{
	node *temp = NULL; //temp is used to store previous element
	node *current = head;

	while (current !=  NULL)
	{
		temp = current->prev;
		current->prev = current->next;
		current->next = temp;
		current = current->prev;
	}

	if (temp != NULL )
		head = temp->prev;
}

//to display the LL
void printLinkedList(node* head) {
	while (head->next != NULL) {
		cout << head->data << " <-> ";
		head = head -> next;
	}
	cout << head -> data;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int d;
	node* head = NULL;
	while (cin >> d) {
		insertAtHead(head , d);
	}

	printLinkedList(head);
	cout << endl;

	reverse(head);
	printLinkedList(head);
	cout << endl;
	return 0;
}