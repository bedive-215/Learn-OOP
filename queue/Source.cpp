#include <iostream>

using namespace std;

struct node {
	int data;
	struct node* next;
};

typedef struct node node;

node* makenode(int x) {
	node* newnode = new node();
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void push(node** queue, int x) {
	node* newnode = makenode(x);
	if (*queue == NULL) {
		*queue = newnode;
		return;
	}
	node* temp = *queue;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = newnode;
}

void pop(node** queue) {
	if (*queue == NULL) {
		return;
	}
	node* tmp = *queue;
	(*queue) = (*queue)->next;
	delete tmp;
}

int size(node* queue) {
	int ans=0;
	while (queue != NULL) {
		ans++;
		queue = queue->next;
	}
	return ans;
}

int front(node* queue) {
	return queue->data;
}

bool empty(node* queue) {
	return queue == NULL;
}

void duyet(node* queue) {
	while (queue != NULL) {
		cout << queue->data << ' ';
		queue = queue->next;
	}
	cout << endl;
}

int main() {
	node* queue = NULL;
	while (1) {
		cout << "--------------------------------------\n";
		cout << "1.Push\n";
		cout << "2.Pop\n";
		cout << "3.Front\n";
		cout << "4.Size\n";
		cout << "5.isEmpty\n";
		cout << "6.duyet\n";
		cout << "7.Thoat\n";
		cout << "--------------------------------------\n";
		int lc; cout << "Nhap luoc chon : "; cin >> lc;
		switch (lc) {
		case 1:
			int x;
			cout << "Nhap x : "; cin >> x;
			push(&queue, x);
			break;
		case 2:
			pop(&queue);
			break;
		case 3:
			cout << front(queue) << endl;
			break;
		case 4:
			cout << "Size : " << size(queue) << endl;
			break;
		case 5:
			if (empty(queue)) {
				cout << "EMPTY\n";
			}
			cout << "NOT EMPTY\n";
			break;
		case 6:
			duyet(queue);
			break;
		case 7:
			exit(0);
			break;
		default:
			cout << "lua chon khong hop le !\n";
			break;
		}
	}
	return 0;
}