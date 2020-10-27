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
//	void insert_nodes()
//	{
//		node* ptr = new node;
//		cout << "Enter the Data: ";
//		cin >> ptr->data;
//		if (head == NULL)
//		{
//			head = ptr;
//		}
//		else
//		{
//			if (ptr->data < head->data)
//			{
//				ptr->next = head;
//				head->previous = ptr;
//				head = ptr;
//				cout << "---------- Node Inseted----------" << endl;
//			}
//			else
//			{
//				node* temp = head;
//				while (temp != NULL)
//				{
//					node* nxt = temp->next;
//					if (nxt == NULL)
//					{
//						temp->next = ptr;
//						ptr->previous = temp;
//						return;
//					}
//					if (ptr->data > temp->data && ptr->data < nxt->data)
//					{
//						ptr->next = nxt;
//						nxt->previous = ptr;
//						temp->next = ptr;
//						cout << " Node Inserted " << endl;
//						break;
//					}
//					temp = temp->next;
//				}
//			}
//		}
//	}
//	
//	void display()
//	{
//		cout << endl;
//		cout << " Link List: ";
//		node* temp = head;
//		while (temp != NULL)
//		{
//			cout << temp->data << " -> ";
//			temp = temp->next;
//		}
//		cout << " NULL " << endl;
//	}
//};
//int main()
//{
//	Doubly_link_list d1;
//	int a = 0;
//	char choice;
//	cout << "---------------Welcome!---------------- " << endl;
//	while (a != -1)
//	{
//		cout << "1. Insert() " << endl;
//		cout << "2. Display() " << endl;
//		cout << " Your Choice: ";
//		cin >> choice;
//		if (choice == '1')
//		{
//			cout << endl;
//			d1.insert_nodes();
//			cout << endl;
//		}
//		else if (choice == '2')
//		{
//			d1.display();
//		}
//		else
//		{
//			cout << " Invalid Choice " << endl;
//			return 0;
//		}
//		cout << "Enter -1 to Exit: ";
//		cin >> a;
//	}
//	return 0;
//}