/*
(8)
Circular Linked List:
1. Insertion at head
2. Delete
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

//Insertion
void insertAtHead(node* &head , int d) {

	node* n = new node(d);
	node* temp = head;
	n -> next = head;

	if (temp != NULL) {
		while (temp->next != head)
			temp = temp -> next;

		temp -> next = n;
	}
	else {
		n -> next = n;
	}

	head = n;
}

//Delete
node* getNodeToDelete(node* head , int key) {

	node* temp = head;
	if (head != NULL) {
		do {
			if (temp -> data == key)
				return temp;

			temp = temp -> next;
		}
		while (temp != head);
	}

	return NULL;
}

void deleteNode(node* &head , int key) {
	node* del = getNodeToDelete(head , key);

	if (del == NULL)
		return;

	if (head == del) {
		head = head -> next;
	}

	node* temp = head;
	//stop one step behind to be deleted
	while (temp -> next != del) {
		temp = temp -> next;
	}

	temp -> next = del -> next;

	delete del;
}

void printLinkedList(node* head) {
	node *temp = head;
	if (head != NULL)
	{
		do
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		while (temp != head);
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	node* head = NULL;

	insertAtHead(head , 60);
	insertAtHead(head , 50);
	insertAtHead(head , 40);
	insertAtHead(head , 30);
	insertAtHead(head , 20);
	insertAtHead(head , 10);

	printLinkedList(head);

	cout << endl;
}