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
//	void InsertAt(int index,int value)
//	{
//		if (head == NULL)
//		{
//			cout << " Link List is Empty! " << endl;
//			return;
//		}
//		int count = 0;
//		node* ptr = new node;
//		node* temp = head;
//		while (temp != NULL)
//		{
//			count++;
//			if (index == count)
//			{
//				cout << " There is Already a node on this Index, Can't Replace it (Try another Index) " << endl;
//				return;
//			}
//			temp = temp->next;
//		}
//		if (index == count + 1)
//		{
//			ptr->data = value;
//			temp = head;
//			while (temp->next != NULL)
//			{
//				temp = temp->next;
//			}
//			temp->next = ptr;
//			ptr->previous = temp;
//		}
//		else
//		{
//			cout << " Invalid index , there is no nodes behind this Index " << endl;
//			return;
//		}
//	}
//	void InsertAfter(int requested,int value)
//	{
//		if (head == NULL)
//		{
//			cout << " Link List is Empty! " << endl;
//			return;
//		}
//		int count = 0;
//		node* ptr = new node;
//		node* temp = head;
//		while (temp != NULL)
//		{
//			count++;
//			temp = temp->next;
//		}
//		if (requested > count)
//		{
//			cout << " Invalid Index " << endl;
//			return;
//		}
//		temp = head;
//		count = 0;
//		while (temp != NULL)
//		{
//			count++;
//			if (count == requested)
//			{
//				ptr->data = value;
//				node* nxt = temp->next;
//				ptr->next = nxt;
//				ptr->previous = temp;
//				if (nxt != NULL)
//				{
//					nxt->previous = ptr;
//				}
//				temp->next = ptr;
//				cout << "---------Node Inserted---------- " << endl;
//			}
//			temp = temp->next;
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
//	int data;
//	char choice;
//	int a = 0;
//	int size;
//	Doubly_link_list d1;
//	int index;
//	cout << "-------------First Enter some Nodes------------- " << endl << endl;
//	cout << " Enter the Number of Nodes: ";
//	cin >> size;
//	d1.insert_nodes(size);
//	cout << endl;
//	d1.display();
//	while (a != -1)
//	{
//		cout << endl;
//		cout << "1. InsertAt()  " << endl;
//		cout << "2. InsertAfter() " << endl;
//		cout << "Your Choice: ";
//		cin >> choice;
//		if (choice == '1')
//		{
//			cout << " Enter the Index: ";
//			cin >> index;
//			cout << " Enter the Data: ";
//			cin >> data;
//			d1.InsertAt(index,data);
//			d1.display();
//		}
//		else if (choice == '2')
//		{
//			cout << " Enter the Index: ";
//			cin >> index;
//			cout << " Enter the Data: ";
//			cin >> data;
//			d1.InsertAfter(index,data);
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