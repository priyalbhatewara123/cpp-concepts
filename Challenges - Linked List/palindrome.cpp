/*
(5)
Check if a linked list is a palindrome.( Boolean return type )
*/

#include <bits/stdc++.h>
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

node* reverse(node* head) {
	node* pre = NULL;
	node* nexxt;

	while (head != NULL) {
		nexxt = head -> next;
		head -> next = pre;
		pre = head;
		head = nexxt;
	}
	return pre;
}


bool isPalindrome(node* head) {

	if (head == NULL or head -> next == NULL)
		return true;
	node* slow = head;
	node* fast = head;

	//first finding mid point
	while (fast -> next != NULL and fast -> next -> next != NULL) {
		slow = slow -> next;
		fast = fast -> next -> next;
	}

	//reverse the second half of linked list
	slow -> next = reverse(slow -> next);
	slow = slow -> next;

	while (slow != NULL) {
		if (slow -> data != head -> data)
			return false;

		slow = slow -> next;
		head = head -> next;
	}

	return true;
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

	cout << isPalindrome(head);

	return 0;
}


/*
2 pointer recursive solution

class Solution {
public:
    ListNode* left;
    bool isPalindrome(ListNode* head) {
        left = head;
        return palindrome(head);
    }

    bool palindrome(ListNode* right){
        if(right == NULL)
            return true;
        bool ans = false;
        if(palindrome(right -> next) and left -> val == right -> val)
            ans = true;
        left = left -> next;
        return ans;
    }
};

*/