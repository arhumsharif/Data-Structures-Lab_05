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
//	void deleteAt(int index)
//	{
//		int use = 0;
//		int count=0;
//		if (head == NULL)
//		{
//			cout << " Link List is Empty " << endl;
//			return;
//		}
//		else
//		{
//			node* temp = head;
//			while (temp != NULL)
//			{
//				count++;
//				if (count == index)
//				{
//					node* nxt = temp->next;
//					node* prv = temp->previous;
//					prv->next = nxt;
//					if (nxt != NULL)
//					{
//						nxt->previous = prv;
//					}
//					temp->next = NULL;
//					temp->previous = NULL;
//					cout << " Node Deleted SuccessFully " << endl;
//					use++;
//				}
//				temp = temp->next;
//			}
//			if (use == 0)
//			{
//				cout << " No Node Exists " << endl;
//			}
//		}
//	}
//	void deleteAfter(int requested)
//	{
//		int use = 0;
//		int count = 0;
//		if (head == NULL)
//		{
//			cout << " Link List is Empty! " << endl;
//			return;
//		}
//		else
//		{
//			node* temp = head;
//			while (temp != NULL)
//			{
//				count++;
//				if(count == requested)
//				{
//					node* ptr = temp->next;
//					if (ptr != NULL)
//					{
//						node* nxt = ptr->next;
//						temp->next = nxt;
//						if (nxt != NULL)
//						{
//							nxt->previous = temp;
//						}
//						ptr->next = NULL;
//						ptr->previous = NULL;
//						cout << " Node Deleted SuccessFully! " << endl;
//						use++;
//					}
//					else
//					{
//						cout << " Node is Not Available " << endl;
//						return;
//					}
//				}
//				temp = temp->next;
//			}
//			if (use == 0)
//			{
//				cout << " No Node Exists " << endl;
//			}
//		}
//	}
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
//	char choice;
//	int a=0;
//	int size;
//	Doubly_link_list d1;
//	int index;
//	cout << " Enter the Number of Nodes: ";
//	cin >> size;
//	d1.insert_nodes(size);
//	cout << endl;
//	d1.display();
//	while (a != -1)
//	{
//		cout << endl;
//		cout << "1. DeleteAt()  " << endl;
//		cout << "2. DeleteAfter() " << endl;
//		cout << "Your Choice: ";
//		cin >> choice;
//		if (choice == '1')
//		{
//			cout << " Enter the Index: ";
//			cin >> index;
//			d1.deleteAt(index);
//			d1.display();
//		}
//		else if (choice == '2')
//		{
//			cout << " Enter the Index: ";
//			cin >> index;
//			d1.deleteAfter(index);
//			d1.display();
//		}
//		else
//		{
//			cout << " Invalid Choice " << endl;
//		}
//		cout << " Enter -1 to Quit: ";
//		cin >> a;
//	}
//	return 0;
//}