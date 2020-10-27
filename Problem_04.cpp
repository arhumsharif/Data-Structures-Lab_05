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
//	void Sort()
//	{
//		node* temp = head;
//		node* temp1 = head->next;
//		while (temp != head->next)
//		{
//			while (temp1 != NULL)
//			{
//				if (temp->data > temp1->data)
//				{
//					if (temp1 == temp->next)
//					{
//						node* ptr1 = temp1->next;     //for next
//						node* ptr2 = temp1->previous;
//						ptr2->next = ptr1;
//						if (ptr1 != NULL)
//						{
//							ptr1->previous = ptr2;
//						}
//						temp1->next = ptr2;
//						ptr2->previous = temp1;
//						temp1->previous = NULL;
//						head = temp1;
//						temp = head;
//					}
//					else
//					{
//						node* nxt = temp1->next;
//						node* prv = temp1->previous;
//						node* ptr = temp->next;
//						prv->next = temp;
//						temp->previous = prv;
//						temp->next = nxt;
//						if (nxt != NULL)
//						{
//							nxt->previous = temp;
//						}
//						temp1->next = ptr;
//						ptr->previous = temp1;
//						head = temp1;
//						temp = head;
//					}
//				}
//				temp1 = temp1->next;
//			}
//			temp = temp->next;
//		}
//		temp = head->next;
//		temp1 = temp->next;
//		while (temp != NULL)
//		{
//			while (temp1 != NULL)
//			{
//				if (temp->data > temp1->data)
//				{
//					if (temp1 == temp->next)
//					{
//						node* prv_1 = temp->previous;
//						node* ptr1 = temp1->next;    
//						node* ptr2 = temp1->previous;
//						ptr2->next = ptr1;
//						if (ptr1 != NULL)
//						{
//							ptr1->previous = ptr2;
//						}
//						temp1->next = ptr2;
//						ptr2->previous = temp1;
//						temp1->previous = NULL;
//						prv_1->next = temp1;
//						temp1->previous = prv_1;
//						temp = head->next;
//					}
//					else
//					{
//						node* prv_1 = temp->previous;
//						node* nxt = temp1->next;
//						node* prv = temp1->previous;
//						node* ptr = temp->next;
//						prv->next = temp;
//						temp->previous = prv;
//						temp->next = nxt;
//						if (nxt != NULL)
//						{
//							nxt->previous = temp;
//						}
//						temp1->next = ptr;
//						ptr->previous = temp1;
//						prv_1->next = temp1;
//						temp1->previous = prv_1;
//						temp = head->next;
//					}
//				}
//				temp1 = temp1->next;
//			}
//			if (temp->next != NULL)
//			{
//				temp = temp->next;
//				temp1 = temp->next;
//			}
//			else
//			{
//				temp = NULL;
//				temp1 = NULL;
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
//	cout << " Enter the Number of Nodes: ";
//	cin >> size;
//	d1.insert_nodes(size);
//	d1.display();
//	d1.Sort();
//	d1.display();
//	return 0;
//}