/*
(5)
PROBLEM STATEMENT:
Find kth node from the end of linked list.
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


node* kthNode(node* head , int k) {

	node* fast = head;
	node* slow = head;

	//moving fast at kth node from begining
	int jumps = k - 1;
	while (jumps > 0) {
		fast = fast -> next;
		jumps--;
	}

	/*moving fast at last node by taking n-k steps , at the same time slow also
	moves n-k steps forward that means slow is at kth index from end */

	while (fast->next != NULL) {
		fast = fast->next;
		slow = slow->next;
	}

	return slow;
}

node* kthNodeNew(node* head , int k) {

	node* fast = head;
	node* slow = head;

	//moving fast at kth node from begining
	int jumps = k;
	while (jumps > 0) {
		fast = fast -> next;
		jumps--;
	}

	/*moving fast at last node by taking n-k steps , at the same time slow also
	moves n-k steps forward that means slow is at kth index from end */

	while (fast != NULL) {
		fast = fast->next;
		slow = slow->next;
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
		if (d == -1) {
			break;
		}
		insertAtHead(head, d);
	}

	printLinkedList(head);
	cout << endl;

	int k; cin >> k;
	cout << k << " node from end is ";
	node* n = kthNodeNew(head , k);
	cout << n-> data;

	return 0;
}