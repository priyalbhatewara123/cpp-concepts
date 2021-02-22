/*
(7)
PROBLEM STATEMENT
Sort an unsorted linked list using merge sort.
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

node* mergeSort(node* head) {

	//base case
	if (head == NULL or head-> next == NULL)
		return head;

	//recursive case
	//step 1: break about midpoint
	node* mid = midPoint(head);
	node* a = head;
	node* b = mid -> next;
	mid->next = NULL;

	//step 2: recursively sort the 2 arrays
	a = mergeSort(a);
	b = mergeSort(b);

	//step 3: merge the two sorted array
	node* c = merge(a , b);
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

	node* head = NULL;

	int d;
	while (cin >> d) {
		insertAtHead(head , d);
	}

	printLinkedList(head);
	cout << endl;

	cout << "Sorted list: " << endl;
	node* newHead = mergeSort(head);

	printLinkedList(newHead);
	cout << endl;
}