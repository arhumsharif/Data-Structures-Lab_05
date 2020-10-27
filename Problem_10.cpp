//#include<iostream>
//using namespace std;
//class node
//{
//public:
//	int data;
//	node* next;
//	node* previous;
//	node()
//	{
//		data = 0;
//		next = NULL;
//		previous = NULL;
//	}
//};
//class Doubly_link_list
//{
//public:
//	node* head;
//	Doubly_link_list()
//	{
//		head = NULL;
//	}
//	void insert_nodes(int val)
//	{
//		for (int i = 0; i < val; i++)
//		{
//			node* ptr = new node;
//			cout << " Enter the Data of Node " << i + 1 << " : ";
//			cin >> ptr->data;
//			if (head == NULL)
//			{
//				head = ptr;
//			}
//			else
//			{
//				node* temp = head;
//				while (temp->next != NULL)
//				{
//					temp = temp->next;
//				}
//				temp->next = ptr;
//				ptr->previous = temp;
//			}
//		}
//	}
//	void Reverse()
//	{
//		node* temp = head;
//		while (temp->next != NULL)
//		{
//			temp = temp->next;
//		}
//		head = temp;
//		node* ptr = head;
//	}
//	void display()
//	{
//		if (head->next == NULL)
//		{
//			cout << endl;
//			cout << " Link List: ";
//			node* temp = head;
//			while (temp != NULL)
//			{
//				cout << temp->data << " -> ";
//				temp = temp->previous;
//			}
//			cout << " NULL " << endl;
//		}
//		else
//		{
//
//			cout << endl;
//			cout << " Link List: ";
//			node* temp = head;
//			while (temp != NULL)
//			{
//				cout << temp->data << " -> ";
//				temp = temp->next;
//			}
//			cout << " NULL " << endl;
//		}
//	}
//};
//int main()
//{
//	int size;
//	Doubly_link_list d1;
//	cout << " Enter the Size of Nodes: ";
//	cin >> size;
//	d1.insert_nodes(size);
//	cout << "------------Before Reversing--------------- " << endl;
//	d1.display();
//	cout << "------------After Reversing --------------- " << endl;
//	d1.Reverse();
//	d1.display();
//}