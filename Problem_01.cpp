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
//	node(int k, int d)
//	{
//		data = d;
//		next = NULL;
//		previous = NULL;
//	}
//};
//class doublyLinkList
//{
//public:
//	node* head;
//	doublyLinkList()
//	{
//		head = NULL;
//	}
//	void Isempty()
//	{
//		if (head == NULL)
//		{
//			cout <<endl<< " Link List is Empty " << endl;
//		}
//		else
//		{
//			cout << " Link List has some Nodes " << endl;
//		}
//	}
//	void IsFull()
//	{
//		try
//		{
//			cout << " Link List is Not Full " << endl;
//			node* ptr = new node;
//		   delete ptr;
//		}
//		catch (bad_alloc)
//		{
//			cout << " Link List is Full " << endl;
//		}
//	    
// 
//	}
//	node* IsNodeExists(int d)
//	{
//		node* temp = NULL;
//		node* ptr = head;
//		while (ptr != NULL)
//		{
//			if (ptr->data == d)
//			{
//				temp = ptr;
//			}
//			ptr = ptr->next;
//		}
//		return temp;
//	}
//	void Insert()
//	{
//		node* n = new node;
//		cout << " Enter the Data for Node: ";
//		cin >> n->data;
//		node* ptr = IsNodeExists(n->data);
//		if (ptr != NULL)
//		{
//			cout << " Data Already exists " << endl;
//			return;
//		}
//			if (head == NULL)
//		    {
//				head = n;
//				cout << endl << " Node inserted  " << endl;
//			}
//			else
//			{
//				node* temp = head;
//				while (temp->next != NULL)
//				{
//					temp = temp->next;
//				}
//				temp->next = n;
//				n->previous = temp;
//				cout << endl << " Node Inserted Successfully " << endl;
//			}
//	}
//	void Delete(int d)
//	{
//		node* temp = NULL;
//		node* ptr = NULL;
//		temp = IsNodeExists(d);
//		node* nxt = temp->next;
//		node* prv = temp->previous;
//		if (temp == NULL)
//		{
//			cout << " Sorry Your Node Does Not Exists! " << endl;
//			return;
//		}
//		else
//		{
//			if (nxt == NULL)
//			{
//				prv->next = nxt;
//				temp->next = NULL;
//				temp->previous = NULL;
//				cout << " Node Deleted " << endl;
//			}
//			else if (temp == head)
//			{
//				head = head->next;
//				head->previous = NULL;
//				cout << " Node Deleted " << endl;
//			}
//			else
//			{
//				prv->next = nxt;
//				nxt->previous = prv;
//				temp->next = NULL;
//				temp->previous = NULL;
//				cout << " Node Deleted " << endl;
//			}
//		}
//	}
//	void display()
//	{
//		if (head == NULL)
//		{
//			cout << endl << " Doubly Link List is Empty " << endl;
//			return;
//		}
//		else
//		{
//			cout << endl;
//			cout << " Doubly Link List: ";
//			node* temp = head;
//			while (temp != NULL)
//			{
//				cout  << temp->data << " --> ";
//				temp = temp->next;
//			}
//			cout << endl;
//		}
//	}
//};
//int main()
//{
//	doublyLinkList d1;
//	int a = 0;
//	char choice;
//	int d;
//	cout << "-------------Welcome------------- " << endl;
//	while (a != -1)
//	{
//		cout << "1. Insert " << endl;
//		cout << "2. Delete " << endl;
//		cout << "3. IsEmpty " << endl;
//		cout << "4. IsFull " << endl;
//		cout << " Your Choice: ";
//		cin >> choice;
//		if (choice == '1')
//		{
//			d1.Insert();
//			d1.display();
//		}
//		else if (choice == '2')
//		{
//			cout << " Enter the Data you want to delete: ";
//			cin >> d;
//			d1.Delete(d);
//			d1.display();
//		}
//		else if (choice == '3')
//		{
//			d1.Isempty();
//		}
//		else if (choice == '4')
//		{
//			d1.IsFull();
//		}
//		else
//		{
//			cout << " Invalid Choice " << endl;
//		}
//		cout << "Enter -1 to Quit: ";
//		cin >> a;
//	}
//	return 0;
//}