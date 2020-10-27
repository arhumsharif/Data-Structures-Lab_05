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
//	void Duplicate_node()
//	{
//		if (head == NULL)
//		{
//			cout << " No Nodes are here... " << endl;
//			return;
//		}
//		else
//		{
//			node* temp = head;
//			node* temp1 = head->next;
//			while (temp != NULL)
//			{
//				while (temp1 != NULL)
//				{
//					if (temp->data == temp1->data)
//					{
//						node* nxt = temp1->next;
//						node* prv = temp1->previous;
//						prv->next = nxt;
//						if (nxt != NULL)
//						{
//							nxt->previous = prv;
//						}
//					}
//					temp1 = temp1->next;
//				}
//				if (temp->next != NULL)
//				{
//					temp = temp->next;
//					temp1 = temp->next;
//				}
//				else
//				{
//					temp = NULL;
//					temp1 = NULL;
//				}
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
//	int size;
//	Doubly_link_list d1;
//	cout << " Enter Number of Nodes: ";
//	cin >> size;
//	d1.insert_nodes(size);
//	cout << "------------Before Deleting duplicate Nodes------------ " << endl;
//	d1.display();
//	cout << "------------After Deleting duplicate Nodes ------------ " << endl;
//	d1.Duplicate_node();
//	d1.display();
//	return 0;
//}