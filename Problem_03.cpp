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
//	int Prime_node()
//	{
//		if (head == NULL)
//		{
//			cout << " No Nodes in List " << endl;
//			return 0;
//		}
//		else
//		{
//			node* temp = head;
//			int product = 1;
//			int count = 0;
//			while (temp != NULL)
//			{
//				count++;
//				if (count == 2 || count == 3 || count == 5 || count == 7)
//				{
//					product = product * temp->data;
//				}
//				else if (count % 2 != 0 && count % 3 != 0 && count % 5 != 0 && count % 7 != 0)
//				{
//					product = product * temp->data;
//				}
//				if (count == 1)
//				{
//					product = 1;
//				}
//				temp = temp->next;
//			}
//			return product;
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
//	int size;
//	Doubly_link_list d1;
//	cout << " Enter the size of Nodes: ";
//	cin >> size;
//	d1.insert_nodes(size);
//	d1.display();
//	cout << " Product of Prime Nodes of Link List is: " << d1.Prime_node();
//	cout << endl;
//	return 0;
//
//}