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
//	void circular_convert()
//	{
//		cout <<endl<< " ---------------Converted to Circular Link List-------------- " << endl;
//		node* temp = head;
//		while (temp->next != NULL)
//		{
//			temp = temp->next;
//		}
//		temp->next = head;
//		head->previous = temp;
//	}
//	void display()
//	{
//		cout << " Link List: ";
//		node* temp = head;
//		do
//		{
//			cout << temp->data << " -> ";
//			temp = temp->next;
//		} while (temp != head);
//		cout << " NULL " << endl;
//	}
//};
//int main()
//{
//	int size;
//	Doubly_link_list d1;
//	cout << " Enter the Number of Nodes: ";
//	cin >> size;
//	d1.insert_nodes(size);
//	d1.circular_convert();
//	d1.display();
//	return 0;
//}