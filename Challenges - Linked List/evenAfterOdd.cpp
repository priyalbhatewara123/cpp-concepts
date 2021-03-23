/*
(2)
Arrange elements in a Linked List such that all even numbers are
placed after odd numbers.

Sample Input
5
1 2 2 2 1

Sample Output
1 1 2 2 2

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

void insertAtTail(node* &head , int data) {

	//corner case
	if (head == NULL) {
		head = new node(data);
		return;
	}

	node* tail = head;
	while (tail-> next != NULL) {
		tail = tail -> next;
	}

	tail -> next = new node(data);
	return;
}

//to display the LL
void printLinkedList(node* head) {
	while (head->next != NULL) {
		cout << head->data << " ";
		head = head -> next;
	}
	cout << head -> data;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	node* head = NULL;
	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		int d; cin >> d;
		insertAtTail(head , d);
	}

	node* oddHead = NULL;
	node* evenHead = NULL;
	node* oddTraverse;
	node* evenTraverse;

	node* ptr = head;
	while (ptr != NULL) {
		if (ptr -> data % 2 == 0) {

			//inserting first element in even list
			if (evenHead == NULL) {
				evenHead = ptr;
				evenTraverse = evenHead;
			}
			else {
				evenTraverse -> next = ptr;
				evenTraverse = evenTraverse -> next;
			}
		}
		else {

			//inserting first element in odd list
			if (oddHead == NULL) {
				oddHead = ptr;
				oddTraverse = oddHead;
			}
			else {
				oddTraverse -> next = ptr;
				oddTraverse = oddTraverse -> next;
			}

		}
		ptr = ptr -> next;
	}

	head = oddHead;
	oddTraverse -> next = evenHead;
	evenTraverse -> next = NULL;

	printLinkedList(head);
	return 0;
}