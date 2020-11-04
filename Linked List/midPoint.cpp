/*
PROBLEM STATEMENT:
Find the mid point of linked list.

Most basic technique:
Find the length of linked list and iterate till length/2. This takes O(n) time.
Here linked list is iterated 2 times.

RUNNER TECHNIQUE:
There are 2 horses one is faster and other slower. Faster one takes 2 steps at a time
while slower takes 1. When the faster reach destination , the slower would be at
midpoint.
Here we iterate over linked list only once.
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

node* midPoint(node* head) {

	if (head == NULL or head -> next == NULL)
		return head;

	node* slow = head;
	node* fast = head -> next;

	while (fast != NULL and fast -> next != NULL) {
		fast = fast -> next -> next; //fast will move 2 steps
		slow = slow -> next; //slow will move one step at a time
	}

	return slow;
}

void printLinkedList(node* head) {
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

	int d;
	node* head = NULL;
	while (cin >> d) {
		insertAtHead(head, d);
	}

	printLinkedList(head);
	cout << endl;

	cout << "Mid point of above linked list is ";
	node* mid = midPoint(head);
	cout << mid -> data << endl;
}