/*Reverse a given linked list
We won't perform swap operation as it is quite costly.
Rather we will change the pointers.
*/

#include<bits/stdc++.h>
using namespace std;

class node {
public:
	int data;
	node* next;

	node(int d) {
		data = d;
		next = NULL;
	}
};

void insertAtHead(node* &head , int d) {
	if (head == NULL) {
		head = new node(d);
		return;
	}

	node* n = new node(d);
	n -> next = head;
	head = n;
}

void reverse(node* &head) {
	node* prev = NULL;
	node* current = head;
	node* nexxt;

	while (current != NULL) {
		nexxt = current -> next;
		current -> next = prev;
		prev = current;
		current = nexxt;

	}

	head = prev;
}

void printLinkedList(node* head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head -> next;
	}

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int d;
	node* head = NULL;
	while (cin >> d) {
		insertAtHead(head, d);
	}

	printLinkedList(head);
	cout << endl;

	reverse(head);
	printLinkedList(head);
	cout << endl;

	return 0;
}