#define _CRT_SECURE_NO_WARINGS 1
#include<iostream>
#include<stdexcept>
using namespace std;
//#include<iostream>
//using namespace std;
//
//#define eletype int
////˳������ɾ�Ĳ飬���ݣ����٣���ʼ��
// 
//struct SequentialList {
//	eletype* array;
//	int m_size;
//	int m_capacity;
//}myList;
////��ʼ��
//void initialList(SequentialList* list,int capacity)
//{
//	list->array = new eletype[capacity];
//	list->m_size = 0;
//	list->m_capacity = capacity;
//}
////����˳���
//void destroyList(SequentialList* list)
//{
//	delete[]list->array;
//}
////��ȡ˳����С
//int size(SequentialList* list)
//{
//	return list->m_size;
//}
//
////�ж��Ƿ�Ϊ��˳���
//bool isEmpty(SequentialList* list)
//{
//	if (list->m_size == 0)
//		return 0;
//	else
//		return 1;
//
//}
//
//
////���룬����
//void insertNumber(SequentialList* list,int index,eletype number)
//{
//	if (index<0 || index>list->m_size)
//	{
//		throw std::invalid_argument("Invalid index");
//	}
//	//����
//	if (list->m_size == list->m_capacity)
//	{
//		int newCapacity = list->m_capacity * 2;
//		eletype* newArray = new eletype[newCapacity];
//		for (int i = 0; i < list->m_size; i++)
//		{
//			newArray[i] = list->array[i];
//		}
//		delete[]list->array;
//
//		//�Ѷ��ϵĿռ�ָ����
//		list->array = newArray;
//		list->m_capacity = newCapacity;
//	}
//
//	//����
//	for (int i = list->m_size; i > index; i--)
//	{
//		list->array[i] = list->array[i - 1];
//	}
//	list->array[index] = number;
//	list->m_size++;
//}
//
//
////ɾ���±�Ϊindex��Ԫ��
//void deleteNumber(SequentialList* list, int index)
//{
//	if (index<0 || index>=list->m_size)
//	{
//		throw std::invalid_argument("Invalid index");
//	}
//	//ɾ������Ϊindex��Ԫ�أ�ֻ�轫������Ԫ����ǰ����
//	for (int i = index; i < list->m_size-1; i++)
//	{
//		list->array[i] = list->array[i + 1];
//	}
//	list->m_size--;
//}
//
////�޸��±�Ϊindex��Ԫ�أ������Ϊnumber
//void updateNumber(SequentialList* list, int index, eletype number)
//{
//	if (index < 0 || index >= list->m_size)
//	{
//		throw std::invalid_argument("Invalid index");
//	}
//	list->array[index] = number;
//}
//
////���ҷ���ĳ��Ԫ�ص��±�
//int findNumber(SequentialList* list, eletype number)
//{
//	for (int i = 0; i < list->m_size; i++)
//	{
//		if (list->array[i] == number)
//		{
//			return i;
//		}
//	}
//	//û�ҵ�
//	return -1;
//}
//
////��ȡԪ��
//eletype getNumber(SequentialList* list, int index)
//{
//	if (index < 0 || index >= list->m_size)
//	{
//		throw std::invalid_argument("Invalid index");
//	}
//	return list->array[index];
//}
//int main()
//{
//	initialList(&myList,10);
//	for (int i = 0; i < 10; i++)
//	{
//		insertNumber(&myList, i, i * 100);
//
//	}
//	cout << "size:" << size(&myList) << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << getNumber(&myList,i) << " ";
//
//	}
//	cout << endl;
//	//����Ԫ�أ������±�
//	cout<<findNumber(&myList, 500)<<endl;
//	//�޸�Ԫ��
//	updateNumber(&myList, 2, 1314);
//	for (int i = 0; i < 10; i++)
//	{
//		cout << getNumber(&myList, i) << " ";
//
//	}
//	cout << endl;
//}

//#include<iostream>
#include<stdexcept>
//using namespace std;
//#define eletype int

//����һ�����Ľṹ��
//struct ListNode
//{
//	eletype date;//������
//	ListNode* next;//ָ����
//	//���캯��
//	ListNode(eletype x): date(x),next(NULL){}
//};
//
////����һ�������������
//class LinkedList
//{
//private:
//	ListNode* head;
//	eletype size;//����ڵ����
//public:
//	//���캯��
//	LinkedList():head(NULL),size(0){}
//	~LinkedList();//����
//	//���ӣ��������ݣ�������
//	void insert(int i, eletype value);
//	//ɾ��
//	void remove(int i);
//	//���ҽ��,���ؽ���ָ��
//	ListNode* find(eletype value);
//	ListNode* get(int i);
//	//�޸�
//	void update(int i, eletype value);
//	void print();
//
//};
//LinkedList::~LinkedList()
//{
	//ListNode* curr = head;
	////�����һ��һ��ɾ��
	//while (curr != NULL)
	//{
	//	ListNode* tmp = curr;
	//	curr = curr->next;
	//	delete tmp;
//	}
//}
////����
//void LinkedList::insert(int i, eletype value)
//{
//	if (i < 0 || i>size)
//	{
//		throw std::out_of_range("Invalid position");
//	}
//	ListNode* newNode = new ListNode(value);
//	if (i == 0)
//	{
//		newNode->next = head;
//		head = newNode;
//	}
//	else
//	{
//		//����һ���α�������������������ͷ��ʼ
//		ListNode* curr = head;
//		for (int j = 0; j < i - 1; j++)
//		{
//			curr = curr->next;
//		}//ѭ��������currһ��ָ��Ŀ��λ�õ�ǰһ��
//		newNode->next = curr->next;//���½��ָ��ָ��Ҫ�����λ��
//		curr->next = newNode;//
//
//	}
//	size++;
//}
////ɾ��
//void LinkedList::remove(int i)
//{
//	if (i < 0 || i>=size)
//	{
//		throw std::out_of_range("Invalid position");
//	}
//	if (i == 0)
//	{
//		ListNode* tmp = head;//�����
//		head = head->next;//��ͷ���ָ�����Ϊ��һ����ָ����
//		delete tmp;
//	}
//	else
//	{
//		ListNode* curr = head;
//
//		for (int j = 0; j < i - 1; j++)
//		{ 
//			curr = curr->next;
//		}
//		//��Ҫɾ���Ľ�����tmp��
//		ListNode* tmp = curr->next;
//		curr->next = tmp->next;
//		delete tmp;
//	}
//	size--;
//}
////����ڵ�Ĳ���
//ListNode* LinkedList::find(eletype value)
//{
//	ListNode* curr = head;
//	while (curr != NULL && curr->date != value)
//	{
//		curr = curr->next;
//	}
//	return curr;//����ָ������ڵ��ָ��
//}
////��������
//ListNode* LinkedList::get(int i)
//{
//	if (i < 0 || i>size)
//	{
//		throw std::out_of_range("Invalid position");
//	}
//	ListNode* curr = head;
//	for (int j = 0; j < i; j++)
//	{
//		curr = curr->next;
//	}
//	return curr;
//
//}
////����(�޸�)
//void LinkedList::update(int i, eletype value)
//{
//	get(i)->date = value;
//}
//void LinkedList::print()
//{
//	ListNode* curr = head;
//	while (curr != NULL)
//	{
//		cout << curr->date << " ";
//		curr = curr->next;
//	}
//	cout << endl;
//}
//
//int main()
//{
//	LinkedList list;
//	list.insert(0, 1);
//	list.insert(1, 10);
//	list.insert(2, 20);
//	list.insert(3, 30);
//	list.insert(4, 40);
//	list.insert(5, 50);
//	list.insert(6, 60);
//	list.print();
//	list.update(3, 999);
//	list.print();
//	list.remove(0);
//	list.print();
//	ListNode* tmp=list.find(999);
//	cout << tmp->date << endl;
//	cout << list.get(5)->date << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
////����ڵ�ṹ��
//struct ListNode 
//{
//	//������
//	int value;
//	//ָ����
//	ListNode* next;
//	//���캯����ʼ��
//	ListNode(int val):value(val),next(NULL){}
//};
//
////�������
//class LinkList {
//private:
//	int size;
//	ListNode* head;
//
//public:
//	//�вι��죬��������ɾ�Ĳ飬��ӡ
//	LinkList(int num) :size(num), head(NULL) {};//��������ʱ���Ѿ���˽�б�����ʼ��
//	~LinkList();
//
//	void insertNode(int i,int val);
//
//	void deleteNode(int val);//ɾ��ֵΪval�Ľ��
//
//	void updateNode(int i, int val);
//
//	//���ҵ�index������ֵ�Ƕ���
//	int getNumber(int index);
//
//	//����value�Ƿ����
//	bool findValue(int value);
//
//	void print();
//};
//LinkList::~LinkList()
//{
//	ListNode* curr = head;
//	//�����һ��һ��ɾ��
//	while (curr != NULL)
//	{
//		ListNode* tmp = curr;
//		curr = curr->next;
//		delete tmp;
//	}
//}
//
//void LinkList::insertNode(int i, int val)
//{
//	int cnt = 1;
//	//�������λ����ͷ���
//	if (i == 0)
//	{
//		ListNode* newHead = new ListNode(val);
//		newHead->next = head;
//		head = newHead;
//	}
//	else
//	{
//		ListNode* tmp = head;
//		while (tmp)
//		{
//			if (cnt == i)
//			{
//				ListNode* curr = new ListNode(val);
//				curr->next = tmp->next;
//				tmp->next = curr;		
//			}
//			tmp = tmp->next;
//			cnt++;
//		}
//	}
//	size++;
//}
//
//void LinkList::deleteNode(int val)//!!!!��ɾ���ڵ㺯����һ�������⣬����ж����ֵͬ�Ľ�㣬
//								 //�ú���ֻ��ɾ��һ����
//{
//	//���Ҫɾͷ���
//	if (head->value == val)
//	{
//		ListNode* tmp = head;
//		head = head->next;
//		delete tmp;
//	}
//	else//����ɾ��ͷ���
//	{
//		ListNode* curr = head;
//		while (curr->next)
//		{
//			if (curr->next->value == val)
//			{
//				ListNode* tmpNode = curr->next;
//				curr->next = tmpNode->next;
//				delete tmpNode;
//			}
//			curr = curr->next;
//			if (curr == NULL)
//			{
//				break;
//			}
//		}
//	}
//	size--;
//}
//
//void LinkList::updateNode(int i, int val)
//{
//	int cnt = 0;
//	ListNode* curr = head;
//	while (curr)
//	{
//		if (cnt == i)
//		{
//			curr->value = val;
//			
//		}
//		curr = curr->next;
//		cnt++;
//	}
//}
//
////���ҵ�index������ֵ�Ƕ���
//int LinkList::getNumber(int index)
//{
//	int cnt = 0;
//	int ret = 0;
//	ListNode* curr = head;
//	while (curr)
//	{
//		if (cnt == index)
//		{
//			ret = curr->value;
//		}
//		curr = curr->next;
//		cnt++;
//	}
//	return ret;
//}
////����value�Ƿ����
//bool LinkList::findValue(int value)
//{
//	bool flag = false;
//	ListNode* curr = head;
//	while (curr)
//	{
//		if (curr->value == value)
//		{
//			flag = true;
//		}
//		curr = curr->next;
//	}
//	return flag;
//}
//void LinkList::print()
//{
//	ListNode* curr = head;
//
//	while (curr)
//	{
//		cout << curr->value << " ";
//		curr = curr->next;
//	}cout << endl;
//}
//int main()
//{
//	LinkList list(5);
//	list.insertNode(0, 1);
//	list.insertNode(1, 7);
//	list.insertNode(2, 6);
//	list.insertNode(3, 9);
//	list.insertNode(4, 3);
//	list.print();
//	list.updateNode(0, 999);
//	list.print();
//	cout<<list.getNumber(3)<<endl;
//	cout << list.findValue(999) << endl;
//	list.deleteNode(7);
//	list.print();
//	list.deleteNode(999);
//	list.print();
//	list.deleteNode(3);
//	list.print();
//	list.insertNode(0, 8);
//	list.insertNode(1, 0);
//	list.insertNode(2, 0);
//	list.insertNode(3, 0);
//	list.insertNode(4, 0);
//	list.print();
//	list.deleteNode(0);
//	list.print();
//	return 0;
//}

////ջ---��˳���ʵ��
//#include<iostream>
//#include<stdexcept>
//using namespace std;
//template<typename T>
//class Stack
//{
//private:
//
//	T* date;
//	int size;
//	int capacity;
//	//����
//	void resize();
//public:
//	Stack():date(new T[capacity]),size(0),capacity(100){}
//	~Stack();
//	//��ջ
//	void push(T element);
//	//��ջ
//	T pop();
//	//��ȡջ��Ԫ��
//	T top() const;
//	//��ȡջ��С
//	int getSize() const;
// bool empty();
//};
//
//
//template<typename T>
//void Stack<T>::resize()
//{
//	T new_capacity = capacity * 2;
//	T* newDate = new T[new_capacity];
//	for (int i = 0; i < size; i++)
//	{
//		newDate[i] = date[i];
//
//	}
//	
//	delete[] date;	
//	date = newDate;
//	capacity = new_capacity;
//}
////����
//template<typename T>
//Stack<T>::~Stack()
//{
//	delete date;
//}
////��ջ
//template<typename T>
//void Stack<T>::push(T element)
//{
//	if (size == capacity)
//	{
//		resize();
//	}
//	//β������
//	date[size++] = element;
//}
////��ջ
//template<typename T>
//T Stack<T>::pop()
//{
//	if (size == 0)
//	{
//		throw std::underflow_error("Stack is empty");
//	}
//	return date[--size];
//}
////��ȡջ��Ԫ��
//template<typename T>
//T Stack<T>::top() const
//{
//	if (size == 0)
//	{
//		throw std::underflow_error("Stack is empty");
//	}
//	return date[size - 1];
//}
////��ȡջ��С
//template<typename T>
//int Stack<T>::getSize() const
//{
//	return size;
//}
//template<typename T>
//bool Stack<T>::empty() 
//{
//	return size==0;
//}
//int main()
//{
//	Stack<int> st;
//	st.push(4);
//	st.push(6);
//	st.push(23);
//	cout << st.top() << endl;
//	st.pop();
//	st.pop();
//	cout << st.top() << endl;
//	return 0;
//}



////ջ---������ʵ��
//#include<iostream>
//#include<stdexcept>
//using namespace std;
//
//template<typename T>
//class Stack
//{
//private:
//
//	struct Node
//	{
//		T date;
//		Node* next;
//		Node(T d) :date(d),next(NULL){}
//	};
//	Node* head;
//	int size;//Ԫ�ظ���
//public:
//	Stack():head(NULL),size(0){}
//	~Stack();
//	void push(T element);
//	T pop();
//	int getSize() const;
//	T top() const;
//};
//template<typename T>
//Stack<T>::~Stack()
//{
//	while (head)
//	{
//		Node* tmp = head;
//		head = head->next;
//		delete tmp;
//	}
//}
////��ջ
//template<typename T>
//void Stack<T>::push(T element)
//{
//	Node* newNode = new Node(element);
//	newNode->next = head;
//	head = newNode;
//	++size;
//}
////��ջ
//template<typename T>
//T Stack<T>::pop()
//{
//	if (head == NULL)
//	{
//		throw std::underflow_error("Stack is empty");
//	}
//	T result = head->date;
//	Node* tmp = head;
//	head = head->next;
//	delete tmp;
//	size--;
//	return result;
//}
////��ȡջ��Ԫ��
//template<typename T>
//T Stack<T>::top() const
//{
//	if (head == NULL)
//	{
//		throw std::underflow_error("Stack is empty");
//	}
//	return head->date;
//}
//template<typename T>
//int Stack<T>::getSize()const
//{
//	return size;
//}
//int main()
//{
//	Stack<int> st;
//	st.push(3);
//	st.push(5);
//	st.push(8);
//	st.push(49);
//	cout << st.top() << endl;
//	st.pop();
//	st.pop();
//	st.pop();
//	cout << st.top() << endl;
//	cout << st.getSize() << endl;
//	
//	return 0;
//}



//��˳���ģ�����
//#include<iostream>
//#include<stdexcept>
//using namespace std;
//template<typename T>
//class Queue
//{
//private:
//	T* data;
//	int front;
//	int rear;//Ԫ�������ĺ�һλ
//	int capacity;
//	void resize();
//
//public:
//	//���캯��
//	Queue():data(new T[10]),front(0),rear(0),capacity(10){}
//	~Queue();
//
//	//���
//	void  inQueue(T element);
//	//����
//	T outQueue();
//	//��ȡ����Ԫ��
//	T getFront() const;
//	//��ȡ���д�С
//	int getSize()const;
//};
////����
//template<typename T>
//void Queue<T>::resize()
//{
//	//�����¿ռ�
//	T* newData = new T[capacity * 2];
//	for (int i = 0; i < rear; i++)
//	{
//		newData[i] = data[i];
//	}
//	delete data;
//	data = newData;
//	capacity = capacity * 2;
//
//}
////����
//template<typename T>
//Queue<T>::~Queue()
//{
//	delete[]data;
//}
////���
//template<typename T>
//void Queue<T>::inQueue(T element)
//{
//	if (rear == capacity)
//	{
//		resize();
//	}
//	data[rear++] = element;
//	
//}
////����
//template<typename T>
//T Queue<T>::outQueue()
//{
//	if (front == rear)
//	{
//		throw underflow_error("Queue id empty");
//	}
//	return data[front++];
//
//}
////��ȡ����Ԫ��
//template<typename T>
//T Queue<T>::getFront() const
//{
//	if (front == rear)
//	{
//		throw std::underflow_error("Queue is empty");
//	}
//	return data[front];
//}
////��ȡ���д�С
//template<typename T>
//int Queue<T>::getSize()const
//{
//	return rear - front;
//}
//int main()
//{
//	Queue<int> q;
//	q.inQueue(1);
//	q.inQueue(2);
//	q.inQueue(9);
//	cout << q.getFront() << endl;
//	return 0;
//}

//#include<queue>
//queue<int>q;
//int main()
//{
//
//	//q.back()  q.front() q.push() q.pop() q.empty() q.size() q.swap()
//
//	
//}
//class Queue {
//public:
//	//����
//	Queue():front(0),rear(0),data(new int[20]), m_capacity(10) {}
//	//����
//	~Queue();
//	//���
//	void queue_push(int val);
//	//����
//	void queue_pop();
//	//����
//	//��ȡ���׶�βԪ��
//	int getFront() const;
//	int getBack()const;
//	//��ȡ���д�С
//	int getSize() const;
//	bool is_empty();
//private:
//	int m_size;
//	int m_capacity;
//	int* data;
//	int front;
//	int rear;
//	void resize();
//};
//Queue::~Queue()
//{
//	delete []data;
//}
//void Queue::resize()
//{
//	int* newData = new int[m_capacity * 2];
//	for (int i = 0; i < m_capacity; i++)
//	{
//		newData[i] = data[i];
//	}
//	delete data;
//	
//	data = newData;
//	m_capacity *=2 ;
//	
//}
////���
//void Queue::queue_push(int val)
//{
//	if (rear == m_capacity)
//	{
//		resize();
//	}
//	data[rear++] = val;
//}
//
////����
//void Queue::queue_pop()
//{
//	if (front == rear)
//	{
//		throw underflow_error("Queue id empty");
//	}
//	front++;
//}
//
//
////��ȡ����Ԫ��
//int Queue::getFront ()const
//{
//	if (front == rear)
//	{
//		throw underflow_error("Queue id empty");
//	}
//	return data[front];
//}
////��ȡ��βԪ��
//int Queue::getBack() const
//{
//	if (front == rear)
//	{
//		throw underflow_error("Queue id empty");
//	}
//	return data[rear-1];
//}
////��ȡ��С
//int Queue::getSize() const
//{
//	return rear - front;
//}
//bool Queue::is_empty()
//{
//	if (rear == front)
//	{
//		return true;
//	}
//	return false;
//}
//void print(Queue& q)
//{
//	while (q.getSize() != 0)
//	{
//		cout << q.getFront() << " ";
//		q.queue_pop();
//	}
//}
//int main()
//{
//	Queue q;
//	q.queue_push(1);
//	q.queue_push(2);
//	q.queue_push(3);
//	q.queue_push(4);
//	q.queue_push(5);
//	q.queue_push(6);
//	q.queue_push(7);
//	q.queue_push(999);
//	//print(q);
//	cout << q.getFront() << endl;
//	cout << q.getBack() << endl;
//	cout<<q.getSize() << endl;
//	
//	return 0;
//}

//������ʵ�ֶ���
//#include<iostream>
//#include<stdexcept>
//using namespace std;
//template<typename T>
//class Queue
//{
//private:
//	struct Node
//	{
//		Node* next;
//		T data;
//		Node(T d):data(d),next(NULL){}
//	};
//	Node* front;
//	Node* rear;
//	int size;
//
//
//public:
//	//�����ӿ�
//	Queue() :front(NULL), rear(NULL), size(0) {};
//	~Queue();
//
//	//���
//	void inQueue(T element);
//	//����
//	T outQueue();
//	//��ȡ����Ԫ��
//	T getFront();
//	//��ȡ���д�С
//	int getSize();
//};
//template<typename T>
//Queue<T>::~Queue()
//{
//	while (front)
//	{
//		Node* tmp = front;
//		front = front->next;
//		delete tmp;
//	}
//}
//
////���
//template<typename T>
//void Queue<T>::inQueue(T element)
//{
//	if (rear == NULL)
//	{
//		rear = new Node(element);
//		front = rear;
//
//	}
//	else
//	{
//		rear->next = new Node(element);
//		rear = rear->next;
//	}
//	size++;
//}
////����
//template<typename T>
//T Queue<T>::outQueue()
//{
//	if (front == NULL)
//	{
//		throw std::underflow_error("Queue is empty");
//	}
//	T element = front->data;
//	Node* tmp = front;
//	front = front->next;
//	delete tmp;
//	size--;
//	if (size == 0)
//	{
//		rear = NULL;//����Ϊ��ʱ���������ΪNULL��rear����Ұָ�룬�´���ӻᱨ��
//	}
//	return element;
//
//}
////��ȡ����Ԫ��
//template<typename T>
//T Queue<T>::getFront()
//{
//	if (front == NULL)
//	{
//		throw std::underflow_error("Queue is empty");
//	}
//	return front->data;
//}
////��ȡ���д�С
//template<typename T>
//int Queue<T>::getSize()
//{
//	return size;
//}
//int main()
//{
//	Queue<int> q;
//	q.inQueue(1);
//	q.inQueue(2);
//	q.inQueue(3);
//	q.inQueue(4);
//	q.inQueue(5);
//	while (q.getSize())
//	{
//		cout << q.getFront() << endl;
//		q.outQueue();
//	}
//	return 0;
//}




//��ջʵ�ֶ���
//#include<iostream>
//#include<stack>
//using namespace std;
//
//class MyQueue
//{
//private:
//	stack<int> s1;
//	stack<int> s2;
//
//
//public:
//	//���
//	void inQueue(int element)
//	{
//		s1.push(element);
//	}
//	
//	//����
//	int outQueue()
//	{
//		if (s2.empty())
//		{
//			while (!s1.empty())
//			{
//				s2.push(s1.top());
//				s1.pop();
//			}
//			
//		}
//		return s2.top();
//	}
//	//��ȡ����Ԫ��
//	int getFront()
//	{
//		if (s2.empty())
//		{
//			while (!s1.empty())
//			{
//				s2.push(s1.top());
//				s1.pop();
//			}
//
//		}
//		return s2.top();
//	}
//	//��ȡ���д�С
//	int getSize()const
//	{
//		return s1.size();
//	}
//	bool empty()
//	{
//		return s1.empty() && s2.empty();
//	}
//};
// 
//#include<iostream>
//using namespace std;
//#include<string>
//#include<string.h>
////ʵ��һ��������
//class String
//{
//private:
//
//	int  length;//����
//	char* str;//ָ���׵�ָ��
//public:
//	//�����ӿ�
//	// ����
//	String();
//	// �вι���
//	String(const char* s);
//	// ��������
//	//String(const String& str);
//	// ����
//	~String();
//	//��ȡ������
//	int getLength()const;
//	//��ȡ�Ӵ�λ�ã�����[]�����
//	char operator[](int index)const;
//	//���ظ�ֵ�����
//	String& operator=(const String& s);
//	//����==�����
//	bool operator==(const String& s)const;
//	//����!=�����
//	bool operator!=(const String& s)const;
//	//����
//	String copy()const;
//	//��׷�ӣ�����+�����
//	String& operator+(const String& s)const;
//	//����<<�����
//	friend ostream& operator<<(ostream& out, const String& s);
//};
//// ���� 
//String::String()
//{
//	length = 0;
//	str = new char[1];
//	str[0] = '\0';
//
//}
//// �вι���
//String::String(const char* s)
//{
//	length = strlen(s);
//	str = new char[length + 1];
//	strcpy(str, s);//'\0'Ҳ����������
//}
//// ��������
////String::String(const String& str)
////{
////
////}
//// ����
//String::~String()
//{
//	delete[]str;
//}
////��ȡ������
//int String::getLength()const
//{
//	return length;
//}
////��ȡ�Ӵ�λ�ã�����[]�����
//char String::operator[](int index)const//���ش�������Ϊindex���ַ�
//{
//	return str[index];
//}
////���ظ�ֵ�����
//String& String::operator=(const String& s)
//{
//	if (this != &s)
//	{
//		delete str;
//		length = s.length;
//		str = new char[length+1];
//		strcpy(str, s.str);
//	}
//	return *this;
//}
////����==�����
//bool String::operator==(const String& s)const
//{
//	/*char* tmp = s.str;
//	while (*str == *tmp)
//	{
//		if (*str == '\0')
//		{
//			return 1;
//		}
//		str++;
//		tmp++;
//	}
//	return 0;*/
//	return strcmp(str, s.str) == 0;
//}
////����!=�����
//bool String::operator!=(const String& s)const
//{
//	return strcmp(str, s.str) != 0;
//}
////����
//String String::copy()const
//{
//	String s = *this;
//	return s;
//}
////��׷�ӣ�����+�����
//String& String::operator+(const String& s)const
//{
//	String s1;
//	s1.length = length + s.length;
//	s1.str = new char[s1.length+1];
//	strcpy(s1.str, str);
//	strcat(s1.str, s.str);
//	return s1;
//}
////����<<�����
//ostream& operator<<(ostream& out, const String& s)
//{
//	out << s.str;
//	return out;
//}
//
//int main()
//{
//	String s("13114");
//	cout << s << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
////����ڵ�
//template<typename T>
//struct ListNode
//{
//	T data;
//	ListNode* next;
//	ListNode(T d):data(d),next(NULL){}
//};
////���ڵ�
//template<typename T>
//struct TreeNode
//{
//	//������
//	T data;
//	//ָ����                //��������
//	ListNode<TreeNode<T>*>* childrenHead;//����ڵ�ָ��������ڵ㣿��������������
//	TreeNode()
//	{
//		childrenHead = NULL;//��ʼ���������ָ��Ұָ��
//	}
//
//	//��Ӻ��ӽڵ�
//	void AddChildren(TreeNode<T>* node)
//	{
//		ListNode<TreeNode<T>*>* childNode = new ListNode<TreeNode<T>*>(node);
//		//�������ӽڵ���������
//		if (childrenHead == NULL)//��������Ϊ��ʱ
//		{
//			childrenHead = childNode;
//		}
//		else//��Ϊ�գ�����ͷ�巨
//		{
//			childNode->next = childrenHead;
//			childrenHead = childNode;
//		}	
//	}	
//};
//
////һ��������
//template<typename T>
//class Tree
//{
//private:
//	TreeNode<T>* node;//����㼯�ϣ�˳���
//	TreeNode<T>* root;//�����
//public:
//	//���캯����ʼ��
//	Tree();
//	//�вι���  �������أ���������ͬ��������ͬ�������������ͬ��
//	Tree(int maxNodes);
//	//����
//	~Tree();
//
//	//����id��ȡ���ڵ�
//	TreeNode<T>* getTreeNode(int id);
//
//	//����һ�������id
//	void SetRoot(int rootId);
//	//��ӽڵ�
//	void AddChild(int parentId, int sonId);
//
//	//�������ڵ�����
//	void updateTreeNode(int nodeId, T newData);
//
//	//��ӡ
//	void Print(TreeNode<T>* node=NULL);//�Ӹ��ڵ㿪ʼ��ӡ
//};
//
//template<typename T>
//Tree<T>::Tree()
//{
//	node = new TreeNode<T>[100001];//node�Ǹ���������Ԫ��������TreeNode<T>
//}
//
//template<typename T>
//Tree<T>::Tree(int maxNodes)
//{
//	node = new TreeNode<T>[maxNodes];
//}
//
//template<typename T>
//Tree<T>::~Tree()
//{
//	delete[]node;
//}
//
//template<typename T>
//TreeNode<T>* Tree<T>::getTreeNode(int id)
//{
//	return &node[id];//???????
//}
//
//template<typename T>
//void Tree<T>::SetRoot(int rootId)
//{
//	root = getTreeNode(rootId);
//}
//
//template<typename T>
////��һ������
//void Tree<T>::AddChild(int parentId, int sonId)
//{
//	TreeNode<T>* parentNode = getTreeNode(parentId);//�����
//	TreeNode<T>* sonNode = getTreeNode(sonId);//�ӽڵ�
//	parentNode->AddChildren(sonNode);//?????????
//}
//
//template<typename T>
//void Tree<T>::updateTreeNode(int nodeId, T newData)
//{
//	getTreeNode(nodeId)->data = newData;
//}
//
////�ú���ʵ����һ���������������������ȱ������Ĺ���
//template<typename T>
//void Tree<T>::Print(TreeNode<T>* node)//�Ӹ��ڵ㿪ʼ��ӡ
//{
//	if (node == NULL)
//	{
//		node = root;//??��������
//	}
//	cout << node->data <<" ";
//	ListNode<TreeNode<T>*>* tmp = node->childrenHead;
//	//����node��ÿһ�����ӽڵ㲢��ӡ����
//	while (tmp)
//	{
//		Print(tmp->data);
//		tmp = tmp->next;
//	}
//}
//
//int main()
//{
//	//������
//	Tree<char> tree(9);
//	//���ø��ڵ�
//	tree.SetRoot(0);
//	tree.updateTreeNode(0, 'a');
//	tree.updateTreeNode(1, 'b'); 
//	tree.updateTreeNode(2, 'c');
//	tree.updateTreeNode(3, 'd');
//	tree.updateTreeNode(4, 'e');
//	tree.updateTreeNode(5, 'f');
//	tree.updateTreeNode(6, 'g');
//	tree.updateTreeNode(7, 'h');
//	tree.updateTreeNode(8, 'i');
//	tree.AddChild(0, 2);
//	tree.AddChild(0, 1);
//	tree.AddChild(1, 3);
//	tree.AddChild(2, 4);
//	tree.AddChild(2, 5);
//	tree.AddChild(3, 6);
//	tree.AddChild(3, 7);
//	tree.AddChild(3, 8);
//	tree.Print();
//	return 0;
//}

////���������ݽṹ�Ĵ���ʵ��
////������ʵ��
//#include<iostream>
//using namespace std;
//
//template<typename T>
//struct TreeNode {
//	T val;
//	TreeNode<T>* left;
//	TreeNode<T>* right;
//	TreeNode():val(0),left(NULL),right(NULL){}
//	TreeNode(T x):val(x),left(NULL),right(NULL){}
//};
//
//template<typename T>
//class binaryTree
//{
//private:
//	TreeNode<T>* nodes;//��̬���������
//	TreeNode<T>* root;
//	size_t NodeSize;//�������ڵ�ĸ���
//
//	TreeNode<T>* Create(T a[], int size, int nodeId, T nullNode);
//	void visit(TreeNode<T>* node);
//	void preOrder(TreeNode<T>* node);
//	void inOrder(TreeNode<T>* node);
//	void postOrder(TreeNode<T>* node);
//	
//
//public:
//	binaryTree();
//	binaryTree(int maxNodes);
//	~binaryTree();
//	TreeNode<T>* GetTreeNode(int id);
//	void CreateTree(T a[], int size, T nullNode);
//	void preOrderTraversal();
//	void inOrderTraversal();
//	void postOrderTraversal();
//
//};
//
//template<typename T>
//binaryTree<T>::binaryTree()
//{
//	NodeSize = 10000;
//	nodes = new TreeNode<T>[NodeSize];
//}
//template<typename T>
//binaryTree<T>::binaryTree(int maxNodes)
//{
//	NodeSize = maxNodes;
//	nodes = new TreeNode<T>[NodeSize];
//}
//
//template<typename T>
//binaryTree<T>::~binaryTree()
//{
//	delete[] nodes;
//}
//template<typename T>
//TreeNode<T>* binaryTree<T>::GetTreeNode(int id)
//{
//	return &nodes[id];
//}
//template<typename T>
//void binaryTree<T>::visit(TreeNode<T>* node)
//{
//	cout << node->val;
//}
//template<typename T>
//void binaryTree<T>::preOrder(TreeNode<T>* node)
//{
//	if (node)
//	{
//		visit(node);
//		preOrder(node->left);
//		preOrder(node->right);
//	}
//}
//template<typename T>
//void binaryTree<T>::inOrder(TreeNode<T>* node)
//{
//	if (node)
//	{
//		inOrder(node->left);
//		visit(node);
//		inOrder(node->right);
//	}
//}
//template<typename T>
//void binaryTree<T>::postOrder(TreeNode<T>* node)
//{
//	if (node)
//	{
//		postOrder(node->left);
//		postOrder(node->right);
//		visit(node);
//	}
//}
//template<typename T>
//void  binaryTree<T>::CreateTree(T a[], int size,T nullNode)
//{
//	root = Create(a, size, 1, nullNode);
//}
//template<typename T>
//
//TreeNode<T>* binaryTree<T>::Create(T a[], int size, int nodeId, T nullNode)
//{
//	if (nodeId >= size || a[nodeId] == nullNode)
//	{
//		return NULL;
//	}
//	TreeNode<T>* nowNode = GetTreeNode(nodeId);
//	nowNode->val = a[nodeId];
//	nowNode->left = Create(a, size, nodeId * 2, nullNode);
//	nowNode->right = Create(a, size, nodeId * 2+1, nullNode);
//	return nowNode;
//
//}
//template<typename T>
//
//void binaryTree<T>::preOrderTraversal()
//{
//	preOrder(root);
//}
//template<typename T>
//
//void binaryTree<T>::inOrderTraversal()
//{
//	inOrder(root);
//}
//template<typename T>
//
//void binaryTree<T>::postOrderTraversal()
//{
//	postOrder(root);
//}
//
//int main()
//{
//	const char nullNode = '-';
//	char a[15] = {
//		nullNode,'a','b','c','d',
//		nullNode,'e','f','g','h',
//		nullNode,nullNode,nullNode,nullNode,'i'
//	};	
//	binaryTree<char>t(15);
//	t.CreateTree(a, 15, nullNode);
//	t.preOrderTraversal(); cout << endl;//abdghcefi
//	t.inOrderTraversal(); cout << endl;//bdghacefi
//	t.postOrderTraversal(); cout << endl;//bdghcefia
//	return 0;
//}


//#include<iostream>
////���������ݽṹ�Ĵ���ʵ��
//
//
////����������
//using namespace std;
//template<typename T>
////�������������ڵ�
//struct TreeNode {
//	T val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode():val(0),left(NULL),right(NULL){}
//	TreeNode(T x) :val(x), left(NULL), right(NULL) {}
//};//        �������ڵ��ͬʱ��ֵ����
//
//template<typename T>
//class BinarySearchTree {
//private:
//	TreeNode<T>* root;
//	//�ӿ�
//	//����
//	TreeNode<T>* insertNode(TreeNode<T>* node, T value);
//	//ɾ��
//	TreeNode<T>* removeNode(TreeNode<T>* node, T value);
//	//����
//	bool SearchNode(TreeNode<T>* node, T value);
//	//���������ӡ����
//	void InorderNode(TreeNode<T>* node);
//
//
//
//public:
//	//����
//	BinarySearchTree():root(NULL){}
//	
//	//����
//	~BinarySearchTree();
//	//�ⲿ�����ڲ�private�����Ľӿ�	
//	//����ӿ�
//	void insert(T value)
//	{
//		root=insertNode(root, value);
//	}
//	//ɾ���ӿ�
//	void remove(T value)
//	{
//		root=removeNode(root, value);
//	}
//	//���ҽӿ�
//	bool Search(T value)
//	{
//		return SearchNode(root, value);
//	}
//	//��������ӿ�
//	void InorderTravelsal()
//	{
//		InorderNode(root);
//		cout << endl;
//	}
//
//};
////����ʵ��
//template<typename T>
//BinarySearchTree<T>::~BinarySearchTree()
//{
//	while (root)
//	{
//		remove(root->val);
//	}
//}
//
////����
//template<typename T>
//TreeNode<T>* BinarySearchTree<T>::insertNode(TreeNode<T>* node, T value)
//{
//	if (node == NULL)
//	{
//		return new TreeNode<T>(value);
//	}
//	if (node->val< value)//��ǰ�ڵ��val<��������val
//	{
//		node->right=insertNode(node->right, value);
//	}
//	else if(node->val>value)
//	{
//		node->left=insertNode(node->left, value);
//	}
//	return node;
//
//}
////ɾ��
//template<typename T>
//TreeNode<T>* BinarySearchTree<T>::removeNode(TreeNode<T>* node, T val)
//{
//	if (node == NULL)
//	{
//		return NULL;
//	}
//	if (val < node->val)
//	{
//		node->left = removeNode(node->left, val);
//	}
//	else if (val > node->val)
//	{
//		node->right = removeNode(node->right, val);
//	}
//	else
//	{
//		if (node->left == NULL && node->right == NULL)//ɾ������Ҷ�ӽ��
//		{
//			delete node;
//			return NULL;
//		}
//		else if (node->left == NULL)
//		{
//			TreeNode<T>* rightChild = node->right;
//			delete node;
//			return rightChild;
//		}
//		else if (node->right == NULL)
//		{
//			TreeNode<T>* leftChild = node->left;
//			delete node;
//			return leftChild;
//		}
//		else
//		{
//			TreeNode<T>* replacement = node->right;
//			while (replacement->left)
//			{
//				replacement = replacement->left;
//			}
//			node->val = replacement->val;
//			node->right = removeNode(node->right, replacement->val);
//		}
//	}
//	return node;
//}
////����(����)
//template<typename T>
//bool BinarySearchTree<T>::SearchNode(TreeNode<T>* node, T val)
//{
//	if (node == NULL)
//	{
//		return false;
//	}
//	if (node->val < val)
//	{
//		return SearchNode(node->right, val);
//	}
//	else if(node->val > val)
//	{
//		return SearchNode(node->left, val);
//	}
//	return true;
//}
////���������ӡ����
//template<typename T>
//void BinarySearchTree<T>::InorderNode(TreeNode<T>* node)
//{
//	if (node) {
//		InorderNode(node->left);
//		cout << node->val << " ";
//		InorderNode(node->right);
//	}
//}
//int main()
//{
//	BinarySearchTree<int>b;
//	b.insert(40);
//	b.insert(50);
//	b.insert(20);
//	b.insert(80);
//	b.insert(90);
//	b.insert(60);
//	b.insert(100);
//	b.InorderTravelsal();
//	b.remove(100);
//	b.InorderTravelsal();
//	b.remove(80);
//	b.InorderTravelsal();
//	cout<<b.Search(1000)<<endl;
//	cout<<b.Search(90)<<endl;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
////���ڵ�ṹ��
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() :val(0), left(NULL), right(NULL){}  //�޲ι���
//	TreeNode(int x):val(x),left(NULL),right(NULL){}//�вι���
//};
//
//class BST
//{
//private:
//	TreeNode* root;
//	//��ɾ�Ĳ�ӿ�
//	//����
//	TreeNode* insertNode(TreeNode* node, int val);//���Ӻ󷵻ص��������ĸ��ڵ�
//	//ɾ��
//	TreeNode* removeNode(TreeNode* node, int val);//ɾ���󷵻ص����������ĸ��ڵ�
//	//����
//	bool searchNode(TreeNode* node,int val);
//	//�������������ӡ
//	void inOrderNode(TreeNode* node);
//
//
//public:
//	BST():root(NULL){}
//	~BST();
//	//ʵ��һЩ����˽�г�Ա�����ĺ����ӿ�
//	//���ò���ӿ�
//	void insert(int val)//��ֵΪval�Ľ��������λ��
//	{
//		root = insertNode(root, val);
//	}
//	//����ɾ��
//	void remove(int val)//��ֵΪval�Ľ��ɾ��
//	{
//		root = removeNode(root, val);
//	}
//	//���ò���
//	bool search(int val)//����ֵΪval�Ľ�㣬�ڲ���������ֵΪbool
//	{
//		return searchNode(root, val);
//	}
//	//�����������
//	void inOrder()
//	{
//		inOrderNode(root);
//		cout << endl;
//	}
//};
//
//
//BST::~BST()
//{
//	while (root)
//	{
//		remove(root->val);
//	}
//}
////private�������壨ʵ�֣�
//TreeNode* BST::insertNode(TreeNode* node,int value)
//{
//	if (node == NULL)//һֱ�ݹ����Ҫ�����λ�ã����ҵ������λ���ǿ�ʱ��newһ���½�㷵�ظ���һ��
//	{
//		return new TreeNode(value);//���ظ���һ��󣬸պ��нڵ����н�����½ڵ㣬
//		                           //��ʱ���ڵ������ϣ��ݹ���ϣ����ص����������ĸ��ڵ�
//	}
//	if (value < node->val)//�����
//	{
//		node->left=insertNode(node->left, value);
//	}
//	else if (value > node->val)//���Ҳ�
//	{
//		node->right=insertNode(node->right, value);
//	}
//	//�������ֶ����ǣ���ô���ҵ��ˣ�
//	return node;
//}
//
////ɾ��ʵ��
//TreeNode* BST::removeNode(TreeNode* node, int value)
//{
//	if (node == NULL)//һֱ���������Ҷ�û�ҵ�Ҫɾ���ڵ㣬����NULL����һ��
//	{
//		return NULL;
//	}
//	if (node->val > value)//Ҫɾ���Ľڵ���node����������
//	{
//		node->left=removeNode(node->left, value);
//	}
//	else if (node->val < value)
//	{
//		node->right=removeNode(node->right, value);//Ҫɾ���ڵ���node��������
//	}
//	else//����������������ҵ���
//		//��Ϊ4�������Ҫɾ���ڵ�Ϊ��Ҷ�ӽ�㡢ֻ����ڵ㡢ֻ���ҽڵ㡢���ҽڵ㶼��
//	{
//		if (node->left == NULL && node->right == NULL)
//		{
//			delete node;
//			return NULL;//����NULL���ݹ���ϲ㣬�ó�����󷵻صĻ������ĸ��ڵ�
//		}
//		else if (node->left == NULL)//Ҫɾ���Ľڵ�ֻ����������
//		{
//			TreeNode* tmp = node->right;//����ɾ���ڵ������������
//			delete node;
//			return tmp;//����ɾ���ڵ�����������ظ��ݹ����һ�㣬�ڻ��ݵĹ����У�nodeҲ���Ż��ݣ�
//			          //������һ����õ���ɾ���ڵ�ĸ�����right��node->right�����н�tmp
//		}
//		else if (node->right == NULL)//Ҫɾ���ڵ�ֻ��������
//		{
//			TreeNode* tmp = node->left;
//			delete node;
//			return tmp;
//		}
//		else//���һ�������ɾ���ڵ�����������
//			//Ҫɾ������ڵ㣬����Ҫ��һ���ȸýڵ��Դ�Ľ�����е�ɾ���ڵ��λ��
//			//����˵��������Դ����ֵ��ֵ��Ҫɾ���Ľڵ㣬�ٵݹ�ɾ������Դ�Ľ��
//			//���Է��֣�����Դ�Ľڵ㣬����Ҫɾ���ڵ�������������ߵĽ�㣨ֵ��С���ұ�ɾ���ڵ��ֵ�Դ�
//		{
//			TreeNode* tmp = node->right;
//			while (tmp->left)//��ѭ������ʱ�����ҵ�Ҫ���ɾ���ڵ�Ľ��
//			{
//				tmp = tmp->left;
//			}
//			//��ʱ��Ҫɾ���ڵ��ֵ�滻Ϊ�����Դ����ֵ��tmpҪɾ���������ǵݹ�ɾ��
//			node->val = tmp->val;
//			//delete tmp;//��ôд�Ǵ����
//			//��ֵ���ݹ�ɾ������ڵ��ַ�Ϊ�����������
//			//�ݹ�ֱ��root��Ҳ���ܵݹ飬Ҳ���ǵ�����ڵ���
//			//������������κ�һ��ʱ��ִ��ɾ���ڵ����
//			node->right = removeNode(node->right, tmp->val);//�ⲽ����һ���ǻص�ɾ��ֻ���Һ��ӽڵ���ǲ�
//		}
//	}
//	return node;
//}
//
////����ʵ��
//bool BST::searchNode(TreeNode* node, int value)
//{
//	if (node == NULL)//node==NULL˵��һֱ����������Ҷ�û�ҵ�
//	{
//		return false;
//	}
//	if (node->val > value)//������
//	{
//		return searchNode(node->left, value);
//	}
//	else if (node->val < value)
//	{
//		return searchNode(node->right, value);
//	}
//	//��������ҵ��ˣ�ֱ�ӽ����ظ���һ��
//	
//	return true;
//
//}
//void BST::inOrderNode(TreeNode* node)
//{
//	if (node) {
//		inOrderNode(node->left);
//		cout << node->val << " ";
//		inOrderNode(node->right);
//	}
//}
//int main()
//{
//	BST b;
//	b.insert(10);
//	b.insert(40);
//	b.insert(90);
//	b.insert(30);
//	b.insert(20);
//	b.insert(50);
//	b.insert(100);
//	b.insert(108);
//	b.inOrder();
//	cout<<b.search(100)<<endl;
//	cout << b.search(-1) << endl;
//	b.remove(90);
//	b.inOrder();
//	b.remove(1000000);
//	b.inOrder();
//	return  0;
//}


//�ڽӾ����ʵ��
//#include<iostream>
//using namespace std;
//#define inf -1
//class Graph {
//private:
//	int number;//�������
//	int** edges;
//
//public:
//	Graph() :number(0), edges(NULL) {};
//
//	//�вι���
//	Graph(int num);
//	//����
//	~Graph();
//	//
//	void addEdge(int u,int v,int w);
//
//	void print();
//};
//Graph::Graph(int num)
//{
//	number = num;
//	edges = new int* [num];//new��һ������Ϊnum�Ķ�ά����
//	for (int i = 0; i < number; i++)
//	{
//		edges[i] = new int[num];
//		for (int j = 0; j < number; j++)
//		{
//			edges[i][j] = inf;
//		}
//	}
//}
//Graph::~Graph()
//{
//	for (int i = 0; i < number; i++)
//	{
//		delete[]edges[i];
//	}
//	delete[]edges;
//}
//void Graph::addEdge(int u,int v,int w)
//{
//	edges[u][v] = w;
//}
//void Graph::print()
//{
//	for (int i = 0; i < number; i++)
//	{
//		for (int j = 0; j < number; j++)
//		{
//			cout << edges[i][j] << "  ";
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	Graph g1;
//	Graph g2(5);
//	g2.addEdge(1, 4, 2);
//	g2.addEdge(3, 3, 9);
//	g2.addEdge(2, 1, 8);
//	g2.addEdge(1, 1, 2);
//	g2.addEdge(4, 4, 7);
//	g2.addEdge(3, 4, 5);
//	g2.print();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Graph {
//private:
//	int the_vertex_number;
//	int** edges;
//public:
//	Graph() :the_vertex_number(0), edges(NULL) {};
//	Graph(int sum);
//	~Graph();
//	void addedges(int a, int b, int k);
//	void print();
//};
//Graph::Graph(int sum)
//{
//	the_vertex_number = sum;
//	edges = new int* [sum];
//	for (int i = 0; i < sum; i++)
//	{
//		edges[i] = new int[sum];
//		for (int j = 0; j < sum; j++)
//		{
//			edges[i][j] = -1;
//		}
//	}
//}
//Graph::~Graph()
//{
//	for (int i = 0; i < the_vertex_number; i++)
//	{
//		delete[]edges[i];
//	}
//	delete[]edges;
//}
//void Graph::addedges(int a, int b, int k)
//{
//	edges[a][b] = k;
//}
//void Graph::print()
//{
//	for (int i = 0; i < the_vertex_number; i++)
//	{
//		for (int j = 0; j < the_vertex_number; j++)
//		{
//			cout << edges[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	Graph g(6);
//	g.addedges(0, 0, 4);
//	g.addedges(1, 5, 9);
//	g.addedges(2, 4, 3);
//	g.addedges(3, 2, 45);
//	g.addedges(4, 1, 1);
//	g.addedges(3, 0, 7);
//	g.addedges(5, 0, 4);
//	g.print();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Graph {
//private:
//	int the_vex;//�������
//	int** edges;
//public:
//	Graph() :the_vex(0), edges(NULL) {};
//	Graph(int the_vex);
//	~Graph();
//	void addEdges(int a, int b, int w);
//	void print();
//};
//Graph::Graph(int number)
//{
//	this->the_vex = number;
//	edges = new int* [the_vex];
//	for (int i = 0; i < the_vex; i++)
//	{
//		edges[i] = new int[the_vex];//һά�����the_vex�ĳ���
//		for (int j = 0; j < the_vex; j++)
//		{
//			edges[i][j] = -1;
//		}
//	}
//}
//Graph::~Graph()
//{
//	for (int i = 0; i < the_vex; i++)
//	{
//		delete[]edges[i];//��ɾ��ÿһ��
//	}
//	delete[]edges;//��ɾ����ά����
//}
//void Graph::addEdges(int a, int b, int k) //�Ӷ���a������b����һ����
//{
//	edges[a][b] = k;
//}
//void Graph::print()
//{
//	for (int i = 0; i < the_vex; i++)
//	{
//		for (int j = 0; j < the_vex; j++)
//		{
//			cout << edges[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//int main() {
//
//	Graph g(4);
//	g.addEdges(0, 0, 2);
//	g.addEdges(2, 3, 6);
//	g.addEdges(1, 3, 5);
//	g.addEdges(2, 1, 9);
//	g.addEdges(3, 3, 8);
//	g.addEdges(2, 2, 2);
//	g.addEdges(1, 3, 2);
//	g.print();
//}
//#include<iostream>
//using namespace std;
//
////�ڽӱ��ʵ��
//class Graph
//{
//private:
//	struct EdgeNode
//	{
//		int vertex;//��β�Ķ�����
//		int weight;//��Ȩ
//		EdgeNode* next;//ָ����һ���߽��
//		//ͬһ��ͷ�����б߶���������ͬһ������
//
//	};
//	struct VertexNode//����ڵ�
//	{
//		int vertex;//��ͷ
//		EdgeNode* firstEdge;//ָ������ͷ���߽�㣩��ָ��
//	};
//	int vertices;//��������
//	VertexNode* nodes;//nodes�����飬Ԫ����ÿ�����
//
//
//public:
//	Graph(int vertices);
//	~Graph();
//	void addEdge(int u, int v, int w);
//	void print();
//};
//Graph::Graph(int vertices)
//{
//	this->vertices = vertices;
//	this->nodes = new VertexNode[vertices];
//	for (int i = 0; i < vertices; i++)
//	{
//		nodes[i].vertex = i;//����ͷ��ֵ���
//		nodes[i].firstEdge = nullptr;//�������ָ��ȫ����ʼ��ΪNULL
//	}
//}
//Graph::~Graph()
//{
//	for (int i = 0; i < vertices; i++)
//	{
//		EdgeNode* curr = nodes[i].firstEdge;
//		while (curr)//�ⲽ�ǽ�����ڵ��ָ��ָ�������һһɾ����ÿѭ��һ�ξ�����һ��������vertices������
//		{
//			EdgeNode* tmp = curr;
//			curr = curr->next;
//			delete tmp;
//		}
//	}//forѭ��������
//	delete[]nodes;//�����������
//}
//void Graph::addEdge(int u, int v, int w)
//{
//	EdgeNode* newNode = new EdgeNode;//����һ���߽��
//	newNode->vertex = v;
//	newNode->weight = w;
//	newNode->next = nodes[u].firstEdge;//ͷ�巨
//	nodes[u].firstEdge = newNode;
//}
//void Graph::print()
//{
//	for (int i = 0; i < vertices; i++)
//	{
//		EdgeNode* curr = nodes[i].firstEdge;
//		cout << "Vertex" << i << ": ";
//		while (curr)
//		{
//			cout << curr->vertex << "(" << curr->weight << ")";
//			curr = curr->next;
//		}
//		cout << endl;
//	}	
//}
//int main()
//{
//	Graph g(5);
//	g.addEdge(0, 1, 10);
//	g.addEdge(0, 4, 80);
//	g.addEdge(1, 3, 980);
//
//	g.addEdge(0, 2, 49);
//	g.addEdge(2, 3, 9);
//	g.addEdge(1, 2, 4);
//	g.addEdge(3, 4, 23);
//	g.addEdge(4, 2, 88);
//	g.print();
//	return 0;
//}


////�ڽӱ��ʵ��
//#include<iostream>
//using namespace std;
//class AdjList {
//private:
//	//һ�������ṹ��
//	//�߽ڵ�ṹ��
//	struct EdgeNode {
//		int vertex;//��β�ڵ���
//		EdgeNode* next;//ָ����һ�߽���ָ��
//		int weight;//�߽��Ȩ��
//		EdgeNode(int w):vertex(0),next(NULL),weight(w){}//���캯����ʼ���б�
//	};
//	//����ڵ�ṹ��
//	struct VertexNode {
//		int vertex;//��ͷ�����
//		EdgeNode* firstEdge;//ָ������ͷ���
//	};
//	int vertices;//��������
//	VertexNode* node;//��Ŷ���ڵ������
//public:
//	AdjList(int vertices);//�вι���
//	~AdjList();
//	//��ӱ߽��
//	void addEdge(int u, int v, int w);
//	void printAdjList();
//};
//AdjList::AdjList(int vertices)
//{
//	this->vertices = vertices;//���������Ķ����������vertices
//	this->node = new VertexNode[vertices];//��̬����һ������
//	for (int i = 0; i < vertices; i++)
//	{
//		//��ʼ�����
//		node[i].vertex = i;
//		//��ÿһ��ָ������ͷ���ָΪNULL
//		node[i].firstEdge = NULL;
//	}
//}
//AdjList::~AdjList()
//{
//	for (int i = 0; i < this->vertices; i++)
//	{
//		EdgeNode* curr = node[i].firstEdge;
//		//��ÿ�����������������
//		while (curr)
//		{
//			EdgeNode* tmp = curr;
//			curr = curr->next;
//			delete tmp;
//		}
//	}
//	//�����������
//	delete[]node;
//}					//��ͷ   ��β   Ȩ
//void AdjList::addEdge(int u, int v, int w)
//{
//	EdgeNode* newNode = new EdgeNode(w);
//	//newNode->weight = w;
//	newNode->vertex = v;
//	//ͷ�巨
//	newNode->next = node[u].firstEdge;
//	node[u].firstEdge = newNode;
//}
//void AdjList::printAdjList()
//{
//	for (int i = 0; i < this->vertices; i++)
//	{
//		EdgeNode* curr = node[i].firstEdge;
//		while (curr)
//		{
//			cout << "��ͷ��" << i;
//			cout << " ��β��"<<curr->vertex << " " << "weight: " << curr->weight;
//			cout << " ";
//			curr = curr->next;
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	AdjList g(5);
//	g.addEdge(0, 1, 20);
//	g.addEdge(0, 4, 50);
//	g.addEdge(4, 1, 45);
//	g.addEdge(2, 1, 411);
//	g.addEdge(1, 3, 2);
//	g.addEdge(3, 4, 14);
//	g.printAdjList();
//}
//#include<iostream>
//#include<string.h>
//#include<string>
//#include<stack>
//using namespace std;
//int main()
//{
//	int hash[10];
//	memset(hash, 1, 40);
//	for (int i = 0; i < 10; i++)
//	{
//		cout << hash[i] << " ";
//	}
//	cout << endl;
//	char a[10];
//	memset(a, 'r', sizeof(a));
//	for (int i = 0; i < 10; i++)
//	{
//		cout << a[i] << " ";
//	}
//	
//	return 0;
//}

////��ϣ��ʵ��,��ʵ�����ڽӱ����ƣ�����˳�����������
//// �ײ�����ṹ����˳���洢����ŵ���ָ������ͷ��ָ��
////��ϣ���������õ��ǳ���������->����ֵģ�Ϲ�ϣ����
////��ϣ��ͻ�������������ַ��
//#include<iostream>
//using namespace std;
//
//template<typename KeyType, typename ValueType>
////��ϣ��ڵ�
//class HashNode {
//public:
//	KeyType key;//��
//	ValueType value;//ֵ
//	HashNode* next;//ָ����һ�ڵ�
//	HashNode(const KeyType& key, const ValueType& value)
//	{
//		this->key = key;
//		this->value = value;
//		this->next = NULL;
//	}
//};
//template<typename KeyType, typename ValueType>
//class HashTable {
//private:
//	int size;//��ϣ���С
//	HashNode< KeyType, ValueType>** table;//table=new HashNode*[size]
//	//ʵ��һ����ϣ��������ϣֵ������ͨ����ϣ����ӳ�䵽˳�������Ϊ����
//	int hash(const KeyType& key)const//�����޸ı����Ա����������������const
//	{
//		int hashkey = key % size;
//		if (hashkey < 0)//�ɻ���Ϊʲô����while
//		{
//			hashkey += size;
//		}
//		return hashkey;
//	}
//public:
//	HashTable(int size = 256);//Ĭ�ϲ���
//	~HashTable();
//	//����ɾ���ã���
//	void insert(const KeyType& key, const ValueType& value);
//	void remove(const KeyType& key);
//	bool find(const KeyType& key, ValueType& value)const;//value�ᱻ�޸ģ�û��const��find�����޸ı����Ա����������������const
//
//};
//template<typename KeyType, typename ValueType>
//HashTable<typename KeyType, typename ValueType>::HashTable(int size)
//{
//	this->size = size;
//	this->table = new HashNode<KeyType, ValueType>* [size];
//	//����ϣ��ÿ��Ԫ�س�ʼ��
//	for (int i = 0; i < size; i++)
//	{
//		this->table[i] = NULL;
//	}
//
//}
//
//template<typename KeyType, typename ValueType>
//HashTable<typename KeyType, typename ValueType>::~HashTable()
//{
//	for (int i = 0; i < size; i++)
//	{
//		if (table[i])
//		{
//			HashNode<KeyType, ValueType>* curr = table[i];
//			//������ڵ�ɾ��
//			while (curr)
//			{
//				HashNode<KeyType, ValueType>* tmp = curr;
//				curr = curr->next;
//				delete tmp;
//			}
//			table[i] = NULL;
//		}
//	}
//	delete table;
//	table = NULL;
//}
//
////����ɾ���ã���
//template<typename KeyType, typename ValueType>
//void HashTable<typename KeyType, typename ValueType>::insert(const KeyType& key, const ValueType& value)
//{
//	int index = hash(key);
//	HashNode<KeyType, ValueType>* newNode = new HashNode<KeyType, ValueType>(key, value);
//	//Ҫ�������ͷ���
//	if (table[index] == NULL)
//	{
//		table[index] = newNode;
//	}
//	else//��������ͷ�巨
//	{
//		newNode->next = table[index];
//		table[index] = newNode;
//	}
//}
//
//
//template<typename KeyType, typename ValueType>
//void HashTable<typename KeyType, typename ValueType>::remove(const KeyType& key)
//{
//	int index = hash(key);
//	if (table[index])//�������
//	{
//		if (table[index]->key == key)//��Ҫɾ��ͷ���
//		{
//			HashNode<KeyType, ValueType>* curr = table[index]->next;
//			delete table[index];
//			table[index] = curr;
//		}
//		else
//		{
//			HashNode<KeyType, ValueType>* curr = table[index];
//			while (curr->next && curr->next->key != key)
//			{
//				curr = curr->next;
//			}//ѭ������ʱ��curr->nextΪҪ�ҵĽڵ�
//			if (curr->next)
//			{
//				HashNode<KeyType, ValueType>* tmp = curr->next->next;
//				delete curr->next;
//				curr->next = tmp;
//			}
//		}
//	}
//
//}
//
//template<typename KeyType, typename ValueType>
//bool HashTable<typename KeyType, typename ValueType>::find(const KeyType& key, ValueType& value)const//value�ᱻ�޸ģ�û��const��find�����޸ı����Ա����������������const
//{
//	int index = hash(key);
//	if (table[index])
//	{
//		if (table[index]->key == key)
//		{
//			value = table[index]->value;//??ΪʲôҪ������ͷ��ֵ����value
//			return true;
//		}
//		else
//		{
//			HashNode<KeyType, ValueType>* curr = table[index];
//			while (curr->next && curr->next->key != key)
//			{
//				curr = curr->next;
//			}//ѭ������ʱ��curr->nextΪҪ�ҵĽڵ�
//			if (curr->next)
//			{
//				value = curr->next->value;//ΪʲôҪ������ڵ��ֵ����value
//				return true;
//			}
//		}
//	}
//	return false;
//}
//int main()
//{
//	HashTable<int, char>h(1000);
//	h.insert(0, 'a');
//	h.insert(1, 'c');
//	h.insert(2123, 'r');
//	h.insert(3, 'y');
//	h.insert(829348, 'p');
//	char val;
//	if (!h.find(13, val))
//	{
//		cout << "not find  " << endl;
//	}
//	if (h.find(829348, val))
//	{
//		cout << "829348 found,value is " << val << endl;
//	}
//	h.remove(829348);
//	if (!h.find(829348, val))
//	{
//		cout << "not find  " << endl;
//	}
//	return 0;
//}
