/*
PROBLEM STATEMENT:
Given 2 sorted linked list. Merge them to form a single bigger sorted linked list.

We won't solve using another linked list rather just take a temperory pointer and
solve using recursion.
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

node* merge(node* head1 , node* head2) {

	//base case
	if (head1 == NULL)
		return head2;

	if (head2 == NULL)
		return head1;

	//recursive case
	node* c;
	if (head1-> data < head2 -> data) {
		c = head1;
		c -> next = merge(head1 -> next , head2);
	}

	else {
		c = head2;
		c -> next = merge(head1 , head2-> next);
	}

	return c;
}

void printLinkedList(node * head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head -> next;
	}

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	node* head1 = NULL;
	node* head2 = NULL;

	int d;
	while (cin >> d) {
		if (d == -1)
			break;
		insertAtHead(head1 , d);
	}

	cout << "First linked list: " << endl;
	printLinkedList(head1);
	cout << endl;

	while (cin >> d) {
		if (d == -1)
			break;
		insertAtHead(head2 , d);
	}

	cout << "Second linked list: " << endl;
	printLinkedList(head2);
	cout << endl;

	cout << "Merged sorted list: " << endl;
	node* newHead = merge(head1 , head2);

	printLinkedList(newHead);
	cout << endl;
}