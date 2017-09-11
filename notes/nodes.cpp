#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
	Node* prev;
};
Node* head;
Node* temp = new Node();
void Insert(int x) {
	//Node* temp = new Node();
	temp->data = x;
	temp->next = head;
	head = temp;
	Node* temp1 = new Node();
	temp->prev = temp1;
	temp = temp1;
}
void Print() {
	Node* temp = head;
	cout << "List is: ";
	while(temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
void nav(int choice) {
	Node* temp = head;
	if (choice == 2) {
		temp = temp->next;
		cout << "The next node is " << temp->data << "\n";
		head = temp;
	}
	else if (choice == 1) {
		temp = temp->prev;
		cout << "The previous node is " << temp->data << "\n";
		head = temp;
	}
}
int main() {
	head = NULL; // empty list
	cout << "How many numbers?\n";
	int n, i, x;
	cin >> n;
	for (i=0;i<n;i++){
		cout << "Enter the number\n";
		cin >> x;
		Insert(x);
		Print();
	}
	int choice;
	while (choice != 0) {
		cout << "Current node = " << head->data << "\n";
		cout << "0 = exit, 1 = previous, 2 = next\n";
		cin >> choice;
		nav(choice);
	}
}
