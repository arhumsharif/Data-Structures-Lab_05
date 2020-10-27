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
//	void consective_number_data()
//	{
//		node* ptr = NULL;
//		node* nxt = NULL;
//		node* prv = NULL;
//		node* temp_nxt = NULL;
//		node* temp = head;
//		node* temp1 = head->next;
//		while (temp != NULL)
//		{
//			while (temp1 != NULL)
//			{
//				if (temp->data + 1 == temp1->data )
//				{
//					if (temp->next != NULL)
//					{
//						if (temp->data + 1 == temp->next->data || temp->data == temp->next->data)
//						{
//							ptr = temp1;
//							temp1 = temp1->next;
//						}
//
//						else
//						{
//							temp_nxt = temp->next;
//							prv = temp1->previous;
//							nxt = temp1->next;
//							prv->next = nxt;
//							if (nxt != NULL)
//							{
//								nxt->previous = prv;
//							}
//							temp1->next = temp_nxt;
//							if (temp_nxt != NULL)
//							{
//								temp_nxt->previous = temp1;
//							}
//							temp->next = temp1;
//
//						}
//					}
//				
//				}
//			
//				if (ptr == NULL)
//				{
//					temp1 = temp1->next;
//				}
//				ptr = NULL;
//			
//			}
//			if (temp->next != NULL)
//			{
//				temp = temp->next;
//				temp1 = temp->next;
//
//			}
//			else
//			{
//				temp = NULL;
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
//	cout << " Enter the Size of Nodes: ";
//	cin >> size;
//	d1.insert_nodes(size);
//	cout << "-----------Before Transeferring Consective Nodes------------ " << endl;
//	d1.display();
//	cout << "-----------After Transeferring Consective Nodes ------------ " << endl;
//	d1.consective_number_data();
//	d1.display();
//	return 0;
//}