//Reverse a linked list using recursion

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

void reverseUsingRecursion(node* &head , node* &P , node* &C) {

	//base case
	if (C == NULL) {
		head = P;
		return;
	}

	//recursive case
	node* N = C -> next;
	C -> next = P;
	reverseUsingRecursion(head , C , N);
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

	node* P = NULL;
	node* C = head;

	reverseUsingRecursion(head , P , C);
	printLinkedList(head);
	cout << endl;

	return 0;
}