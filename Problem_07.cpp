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
//	node* head1;
//	Doubly_link_list()
//	{
//		head = NULL;
//		head1 = NULL;
//	}
//	void insert_nodes(int val)
//	{
//		if (head == NULL)
//		{
//			for (int i = 0; i < val; i++)
//			{
//				node* ptr = new node;
//				cout << " Enter the Data of Node " << i + 1 << " : ";
//				cin >> ptr->data;
//				if (head == NULL)
//				{
//					head = ptr;
//				}
//				else
//				{
//					node* temp = head;
//					while (temp->next != NULL)
//					{
//						temp = temp->next;
//					}
//					temp->next = ptr;
//					ptr->previous = temp;
//				}
//			}
//		}
//		else
//		{
//			for (int i = 0; i < val; i++)
//			{
//				node* ptr = new node;
//				cout << " Enter the Data of Node " << i + 1 << " : ";
//				cin >> ptr->data;
//				if (head1 == NULL)
//				{
//					head1 = ptr;
//				}
//				else
//				{
//					node* temp = head1;
//					while (temp->next != NULL)
//					{
//						temp = temp->next;
//					}
//					temp->next = ptr;
//					ptr->previous = temp;
//				}
//			}
//		}
//	}
//	void Merge()
//	{
//		node* temp = head;
//		while (temp->next != NULL)
//		{
//			temp = temp->next;
//		}
//		temp->next=head1;
//		head1->previous = temp;
//		 head1=NULL;
//	}
//	void display()
//	{
//		if (head1 == NULL)
//		{
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
//		else
//		{
//			cout << endl;
//			cout << " Link List: ";
//			node* temp = head1;
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
//	cout << " Enter Number of Nodes for 1st Link List: ";
//	cin >> size;
//	d1.insert_nodes(size);
//	cout << endl;
//	cout << "--------1st Link List------- " << endl;
//	d1.display();
//	cout << endl;
//	cout << " Enter Number of Nodes for 2nd Link List: ";
//	cin >> size;
//	d1.insert_nodes(size);
//	cout << endl;
//	cout << "--------2nd Link List------- " << endl;
//	d1.display();
//	d1.Merge();
//	cout << "---------After Merging--------- " << endl;
//	d1.display();
//	return 0;
//
//}