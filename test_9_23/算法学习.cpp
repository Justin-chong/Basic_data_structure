#define _CRT_SECURE_NO_WARINGS 1
#include<iostream>
#include<stdexcept>
using namespace std;
//#include<iostream>
//using namespace std;
//
//#define eletype int
////顺序表的增删改查，扩容，销毁，初始化
// 
//struct SequentialList {
//	eletype* array;
//	int m_size;
//	int m_capacity;
//}myList;
////初始化
//void initialList(SequentialList* list,int capacity)
//{
//	list->array = new eletype[capacity];
//	list->m_size = 0;
//	list->m_capacity = capacity;
//}
////销毁顺序表
//void destroyList(SequentialList* list)
//{
//	delete[]list->array;
//}
////获取顺序表大小
//int size(SequentialList* list)
//{
//	return list->m_size;
//}
//
////判断是否为空顺序表
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
////插入，扩容
//void insertNumber(SequentialList* list,int index,eletype number)
//{
//	if (index<0 || index>list->m_size)
//	{
//		throw std::invalid_argument("Invalid index");
//	}
//	//扩容
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
//		//把堆上的空间指过来
//		list->array = newArray;
//		list->m_capacity = newCapacity;
//	}
//
//	//插入
//	for (int i = list->m_size; i > index; i--)
//	{
//		list->array[i] = list->array[i - 1];
//	}
//	list->array[index] = number;
//	list->m_size++;
//}
//
//
////删除下标为index的元素
//void deleteNumber(SequentialList* list, int index)
//{
//	if (index<0 || index>=list->m_size)
//	{
//		throw std::invalid_argument("Invalid index");
//	}
//	//删除索引为index的元素，只需将其后面的元素往前覆盖
//	for (int i = index; i < list->m_size-1; i++)
//	{
//		list->array[i] = list->array[i + 1];
//	}
//	list->m_size--;
//}
//
////修改下标为index的元素，将其改为number
//void updateNumber(SequentialList* list, int index, eletype number)
//{
//	if (index < 0 || index >= list->m_size)
//	{
//		throw std::invalid_argument("Invalid index");
//	}
//	list->array[index] = number;
//}
//
////查找返回某个元素的下标
//int findNumber(SequentialList* list, eletype number)
//{
//	for (int i = 0; i < list->m_size; i++)
//	{
//		if (list->array[i] == number)
//		{
//			return i;
//		}
//	}
//	//没找到
//	return -1;
//}
//
////获取元素
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
//	//查找元素，返回下标
//	cout<<findNumber(&myList, 500)<<endl;
//	//修改元素
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

//定义一个结点的结构体
//struct ListNode
//{
//	eletype date;//数据域
//	ListNode* next;//指针域
//	//构造函数
//	ListNode(eletype x): date(x),next(NULL){}
//};
//
////定义一个单向链表的类
//class LinkedList
//{
//private:
//	ListNode* head;
//	eletype size;//链表节点个数
//public:
//	//构造函数
//	LinkedList():head(NULL),size(0){}
//	~LinkedList();//析构
//	//增加（插入数据）的声明
//	void insert(int i, eletype value);
//	//删除
//	void remove(int i);
//	//查找结点,返回结点的指针
//	ListNode* find(eletype value);
//	ListNode* get(int i);
//	//修改
//	void update(int i, eletype value);
//	void print();
//
//};
//LinkedList::~LinkedList()
//{
	//ListNode* curr = head;
	////将结点一个一个删除
	//while (curr != NULL)
	//{
	//	ListNode* tmp = curr;
	//	curr = curr->next;
	//	delete tmp;
//	}
//}
////插入
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
//		//定义一个游标结点用来遍历，从链表头开始
//		ListNode* curr = head;
//		for (int j = 0; j < i - 1; j++)
//		{
//			curr = curr->next;
//		}//循环结束后，curr一定指向目标位置的前一个
//		newNode->next = curr->next;//将新结点指针指向要插入的位置
//		curr->next = newNode;//
//
//	}
//	size++;
//}
////删除
//void LinkedList::remove(int i)
//{
//	if (i < 0 || i>=size)
//	{
//		throw std::out_of_range("Invalid position");
//	}
//	if (i == 0)
//	{
//		ListNode* tmp = head;//难理解
//		head = head->next;//将头结点指针域变为下一结点的指针域
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
//		//将要删除的结点存在tmp中
//		ListNode* tmp = curr->next;
//		curr->next = tmp->next;
//		delete tmp;
//	}
//	size--;
//}
////链表节点的查找
//ListNode* LinkedList::find(eletype value)
//{
//	ListNode* curr = head;
//	while (curr != NULL && curr->date != value)
//	{
//		curr = curr->next;
//	}
//	return curr;//返回指向链表节点的指针
//}
////查找索引
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
////更新(修改)
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
////链表节点结构体
//struct ListNode 
//{
//	//数据域
//	int value;
//	//指针域
//	ListNode* next;
//	//构造函数初始化
//	ListNode(int val):value(val),next(NULL){}
//};
//
////链表的类
//class LinkList {
//private:
//	int size;
//	ListNode* head;
//
//public:
//	//有参构造，析构，增删改查，打印
//	LinkList(int num) :size(num), head(NULL) {};//创建对象时就已经将私有变量初始化
//	~LinkList();
//
//	void insertNode(int i,int val);
//
//	void deleteNode(int val);//删除值为val的结点
//
//	void updateNode(int i, int val);
//
//	//查找第index个结点的值是多少
//	int getNumber(int index);
//
//	//查找value是否存在
//	bool findValue(int value);
//
//	void print();
//};
//LinkList::~LinkList()
//{
//	ListNode* curr = head;
//	//将结点一个一个删除
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
//	//如果插入位置是头结点
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
//void LinkList::deleteNode(int val)//!!!!该删除节点函数有一致命问题，如果有多个相同值的结点，
//								 //该函数只会删除一个。
//{
//	//如果要删头结点
//	if (head->value == val)
//	{
//		ListNode* tmp = head;
//		head = head->next;
//		delete tmp;
//	}
//	else//不是删除头结点
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
////查找第index个结点的值是多少
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
////查找value是否存在
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

////栈---用顺序表实现
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
//	//扩容
//	void resize();
//public:
//	Stack():date(new T[capacity]),size(0),capacity(100){}
//	~Stack();
//	//入栈
//	void push(T element);
//	//出栈
//	T pop();
//	//获取栈顶元素
//	T top() const;
//	//获取栈大小
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
////析构
//template<typename T>
//Stack<T>::~Stack()
//{
//	delete date;
//}
////入栈
//template<typename T>
//void Stack<T>::push(T element)
//{
//	if (size == capacity)
//	{
//		resize();
//	}
//	//尾部插入
//	date[size++] = element;
//}
////出栈
//template<typename T>
//T Stack<T>::pop()
//{
//	if (size == 0)
//	{
//		throw std::underflow_error("Stack is empty");
//	}
//	return date[--size];
//}
////获取栈顶元素
//template<typename T>
//T Stack<T>::top() const
//{
//	if (size == 0)
//	{
//		throw std::underflow_error("Stack is empty");
//	}
//	return date[size - 1];
//}
////获取栈大小
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



////栈---用链表实现
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
//	int size;//元素个数
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
////入栈
//template<typename T>
//void Stack<T>::push(T element)
//{
//	Node* newNode = new Node(element);
//	newNode->next = head;
//	head = newNode;
//	++size;
//}
////出栈
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
////获取栈顶元素
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



//用顺序表模拟队列
//#include<iostream>
//#include<stdexcept>
//using namespace std;
//template<typename T>
//class Queue
//{
//private:
//	T* data;
//	int front;
//	int rear;//元素索引的后一位
//	int capacity;
//	void resize();
//
//public:
//	//构造函数
//	Queue():data(new T[10]),front(0),rear(0),capacity(10){}
//	~Queue();
//
//	//入队
//	void  inQueue(T element);
//	//出队
//	T outQueue();
//	//获取队首元素
//	T getFront() const;
//	//获取队列大小
//	int getSize()const;
//};
////扩容
//template<typename T>
//void Queue<T>::resize()
//{
//	//开辟新空间
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
////析构
//template<typename T>
//Queue<T>::~Queue()
//{
//	delete[]data;
//}
////入队
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
////出队
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
////获取队首元素
//template<typename T>
//T Queue<T>::getFront() const
//{
//	if (front == rear)
//	{
//		throw std::underflow_error("Queue is empty");
//	}
//	return data[front];
//}
////获取队列大小
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
//	//构造
//	Queue():front(0),rear(0),data(new int[20]), m_capacity(10) {}
//	//析构
//	~Queue();
//	//入队
//	void queue_push(int val);
//	//出队
//	void queue_pop();
//	//查找
//	//获取队首队尾元素
//	int getFront() const;
//	int getBack()const;
//	//获取队列大小
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
////入队
//void Queue::queue_push(int val)
//{
//	if (rear == m_capacity)
//	{
//		resize();
//	}
//	data[rear++] = val;
//}
//
////出队
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
////获取队首元素
//int Queue::getFront ()const
//{
//	if (front == rear)
//	{
//		throw underflow_error("Queue id empty");
//	}
//	return data[front];
//}
////获取队尾元素
//int Queue::getBack() const
//{
//	if (front == rear)
//	{
//		throw underflow_error("Queue id empty");
//	}
//	return data[rear-1];
//}
////获取大小
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

//用链表实现队列
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
//	//公共接口
//	Queue() :front(NULL), rear(NULL), size(0) {};
//	~Queue();
//
//	//入队
//	void inQueue(T element);
//	//出队
//	T outQueue();
//	//获取队首元素
//	T getFront();
//	//获取队列大小
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
////入队
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
////出队
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
//		rear = NULL;//队列为空时，如果不置为NULL，rear就是野指针，下次入队会报错
//	}
//	return element;
//
//}
////获取队首元素
//template<typename T>
//T Queue<T>::getFront()
//{
//	if (front == NULL)
//	{
//		throw std::underflow_error("Queue is empty");
//	}
//	return front->data;
//}
////获取队列大小
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




//用栈实现队列
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
//	//入队
//	void inQueue(int element)
//	{
//		s1.push(element);
//	}
//	
//	//出队
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
//	//获取队首元素
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
//	//获取队列大小
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
////实现一个串的类
//class String
//{
//private:
//
//	int  length;//串长
//	char* str;//指向串首的指针
//public:
//	//公共接口
//	// 构造
//	String();
//	// 有参构造
//	String(const char* s);
//	// 拷贝构造
//	//String(const String& str);
//	// 析构
//	~String();
//	//获取串长度
//	int getLength()const;
//	//获取子串位置，重载[]运算符
//	char operator[](int index)const;
//	//重载赋值运算符
//	String& operator=(const String& s);
//	//重载==运算符
//	bool operator==(const String& s)const;
//	//重载!=运算符
//	bool operator!=(const String& s)const;
//	//复制
//	String copy()const;
//	//串追加，重载+运算符
//	String& operator+(const String& s)const;
//	//重载<<运算符
//	friend ostream& operator<<(ostream& out, const String& s);
//};
//// 构造 
//String::String()
//{
//	length = 0;
//	str = new char[1];
//	str[0] = '\0';
//
//}
//// 有参构造
//String::String(const char* s)
//{
//	length = strlen(s);
//	str = new char[length + 1];
//	strcpy(str, s);//'\0'也拷贝过来了
//}
//// 拷贝构造
////String::String(const String& str)
////{
////
////}
//// 析构
//String::~String()
//{
//	delete[]str;
//}
////获取串长度
//int String::getLength()const
//{
//	return length;
//}
////获取子串位置，重载[]运算符
//char String::operator[](int index)const//返回串中索引为index的字符
//{
//	return str[index];
//}
////重载赋值运算符
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
////重载==运算符
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
////重载!=运算符
//bool String::operator!=(const String& s)const
//{
//	return strcmp(str, s.str) != 0;
//}
////复制
//String String::copy()const
//{
//	String s = *this;
//	return s;
//}
////串追加，重载+运算符
//String& String::operator+(const String& s)const
//{
//	String s1;
//	s1.length = length + s.length;
//	s1.str = new char[s1.length+1];
//	strcpy(s1.str, str);
//	strcat(s1.str, s.str);
//	return s1;
//}
////重载<<运算符
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
////链表节点
//template<typename T>
//struct ListNode
//{
//	T data;
//	ListNode* next;
//	ListNode(T d):data(d),next(NULL){}
//};
////树节点
//template<typename T>
//struct TreeNode
//{
//	//数据域
//	T data;
//	//指针域                //孩子链表
//	ListNode<TreeNode<T>*>* childrenHead;//链表节点指向的是树节点？？？？？？？？
//	TreeNode()
//	{
//		childrenHead = NULL;//初始化，否则会指向野指针
//	}
//
//	//添加孩子节点
//	void AddChildren(TreeNode<T>* node)
//	{
//		ListNode<TreeNode<T>*>* childNode = new ListNode<TreeNode<T>*>(node);
//		//将所有子节点链接起来
//		if (childrenHead == NULL)//孩子链表为空时
//		{
//			childrenHead = childNode;
//		}
//		else//不为空，利用头插法
//		{
//			childNode->next = childrenHead;
//			childrenHead = childNode;
//		}	
//	}	
//};
//
////一个树的类
//template<typename T>
//class Tree
//{
//private:
//	TreeNode<T>* node;//树结点集合（顺序表）
//	TreeNode<T>* root;//根结点
//public:
//	//构造函数初始化
//	Tree();
//	//有参构造  函数重载（函数名相同，参数不同或则参数个数不同）
//	Tree(int maxNodes);
//	//析构
//	~Tree();
//
//	//利用id获取树节点
//	TreeNode<T>* getTreeNode(int id);
//
//	//设置一个根结点id
//	void SetRoot(int rootId);
//	//添加节点
//	void AddChild(int parentId, int sonId);
//
//	//设置树节点数据
//	void updateTreeNode(int nodeId, T newData);
//
//	//打印
//	void Print(TreeNode<T>* node=NULL);//从根节点开始打印
//};
//
//template<typename T>
//Tree<T>::Tree()
//{
//	node = new TreeNode<T>[100001];//node是个数组名，元素类型是TreeNode<T>
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
////加一条树边
//void Tree<T>::AddChild(int parentId, int sonId)
//{
//	TreeNode<T>* parentNode = getTreeNode(parentId);//父结点
//	TreeNode<T>* sonNode = getTreeNode(sonId);//子节点
//	parentNode->AddChildren(sonNode);//?????????
//}
//
//template<typename T>
//void Tree<T>::updateTreeNode(int nodeId, T newData)
//{
//	getTreeNode(nodeId)->data = newData;
//}
//
////该函数实现了一个深度优先搜索（深度优先遍历）的过程
//template<typename T>
//void Tree<T>::Print(TreeNode<T>* node)//从根节点开始打印
//{
//	if (node == NULL)
//	{
//		node = root;//??？？？？
//	}
//	cout << node->data <<" ";
//	ListNode<TreeNode<T>*>* tmp = node->childrenHead;
//	//访问node的每一个孩子节点并打印数据
//	while (tmp)
//	{
//		Print(tmp->data);
//		tmp = tmp->next;
//	}
//}
//
//int main()
//{
//	//创建树
//	Tree<char> tree(9);
//	//设置根节点
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

////非线性数据结构的代码实现
////二叉树实现
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
//	TreeNode<T>* nodes;//动态分配的数组
//	TreeNode<T>* root;
//	size_t NodeSize;//二叉树节点的个数
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
////非线性数据结构的代码实现
//
//
////二叉搜索树
//using namespace std;
//template<typename T>
////二叉搜索树树节点
//struct TreeNode {
//	T val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode():val(0),left(NULL),right(NULL){}
//	TreeNode(T x) :val(x), left(NULL), right(NULL) {}
//};//        创建树节点的同时将值传入
//
//template<typename T>
//class BinarySearchTree {
//private:
//	TreeNode<T>* root;
//	//接口
//	//插入
//	TreeNode<T>* insertNode(TreeNode<T>* node, T value);
//	//删除
//	TreeNode<T>* removeNode(TreeNode<T>* node, T value);
//	//查找
//	bool SearchNode(TreeNode<T>* node, T value);
//	//中序遍历打印出来
//	void InorderNode(TreeNode<T>* node);
//
//
//
//public:
//	//构造
//	BinarySearchTree():root(NULL){}
//	
//	//析构
//	~BinarySearchTree();
//	//外部调用内部private函数的接口	
//	//插入接口
//	void insert(T value)
//	{
//		root=insertNode(root, value);
//	}
//	//删除接口
//	void remove(T value)
//	{
//		root=removeNode(root, value);
//	}
//	//查找接口
//	bool Search(T value)
//	{
//		return SearchNode(root, value);
//	}
//	//中序遍历接口
//	void InorderTravelsal()
//	{
//		InorderNode(root);
//		cout << endl;
//	}
//
//};
////函数实现
//template<typename T>
//BinarySearchTree<T>::~BinarySearchTree()
//{
//	while (root)
//	{
//		remove(root->val);
//	}
//}
//
////插入
//template<typename T>
//TreeNode<T>* BinarySearchTree<T>::insertNode(TreeNode<T>* node, T value)
//{
//	if (node == NULL)
//	{
//		return new TreeNode<T>(value);
//	}
//	if (node->val< value)//当前节点的val<传进来的val
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
////删除
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
//		if (node->left == NULL && node->right == NULL)//删除的是叶子结点
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
////查找(搜索)
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
////中序遍历打印出来
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
////树节点结构体
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() :val(0), left(NULL), right(NULL){}  //无参构造
//	TreeNode(int x):val(x),left(NULL),right(NULL){}//有参构造
//};
//
//class BST
//{
//private:
//	TreeNode* root;
//	//增删改查接口
//	//插入
//	TreeNode* insertNode(TreeNode* node, int val);//增加后返回的是新树的根节点
//	//删除
//	TreeNode* removeNode(TreeNode* node, int val);//删除后返回的是整棵树的根节点
//	//查找
//	bool searchNode(TreeNode* node,int val);
//	//利用中序遍历打印
//	void inOrderNode(TreeNode* node);
//
//
//public:
//	BST():root(NULL){}
//	~BST();
//	//实现一些调用私有成员函数的函数接口
//	//调用插入接口
//	void insert(int val)//将值为val的结点插入合适位置
//	{
//		root = insertNode(root, val);
//	}
//	//调用删除
//	void remove(int val)//将值为val的结点删除
//	{
//		root = removeNode(root, val);
//	}
//	//调用查找
//	bool search(int val)//查找值为val的结点，内部函数返回值为bool
//	{
//		return searchNode(root, val);
//	}
//	//调用中序遍历
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
////private函数定义（实现）
//TreeNode* BST::insertNode(TreeNode* node,int value)
//{
//	if (node == NULL)//一直递归的找要插入的位置，当找到插入的位置是空时，new一个新结点返回给上一层
//	{
//		return new TreeNode(value);//返回给上一层后，刚好有节点来承接这个新节点，
//		                           //此时，节点插入完毕，递归完毕，返回的是整棵树的根节点
//	}
//	if (value < node->val)//往左插
//	{
//		node->left=insertNode(node->left, value);
//	}
//	else if (value > node->val)//往右插
//	{
//		node->right=insertNode(node->right, value);
//	}
//	//以上两种都不是，那么就找到了，
//	return node;
//}
//
////删除实现
//TreeNode* BST::removeNode(TreeNode* node, int value)
//{
//	if (node == NULL)//一直往左往右找都没找到要删除节点，返回NULL给上一层
//	{
//		return NULL;
//	}
//	if (node->val > value)//要删除的节点在node的左子树上
//	{
//		node->left=removeNode(node->left, value);
//	}
//	else if (node->val < value)
//	{
//		node->right=removeNode(node->right, value);//要删除节点在node的右子树
//	}
//	else//否则这种情况就是找到了
//		//分为4种情况，要删除节点为：叶子结点、只有左节点、只有右节点、左右节点都有
//	{
//		if (node->left == NULL && node->right == NULL)
//		{
//			delete node;
//			return NULL;//返回NULL给递归的上层，该程序最后返回的还是树的根节点
//		}
//		else if (node->left == NULL)//要删除的节点只有右子树，
//		{
//			TreeNode* tmp = node->right;//将该删除节点的右子树缓存
//			delete node;
//			return tmp;//将该删除节点的右子树返回给递归的上一层，在回溯的过程中，node也跟着回溯，
//			          //到达上一层后，用的是删除节点的父结点的right（node->right）来承接tmp
//		}
//		else if (node->right == NULL)//要删除节点只有左子树
//		{
//			TreeNode* tmp = node->left;
//			delete node;
//			return tmp;
//		}
//		else//最后一种情况，删除节点有左右子树
//			//要删除这个节点，必须要有一个比该节点稍大的结点来承当删除节点的位置
//			//或则说，把这个稍大结点的值赋值给要删除的节点，再递归删除这个稍大的结点
//			//可以发现，这个稍大的节点，就是要删除节点右子树中最左边的结点（值最小，且比删除节点的值稍大）
//		{
//			TreeNode* tmp = node->right;
//			while (tmp->left)//当循环跳出时就能找到要替代删除节点的结点
//			{
//				tmp = tmp->left;
//			}
//			//此时将要删除节点的值替换为比它稍大结点的值，tmp要删掉，并且是递归删除
//			node->val = tmp->val;
//			//delete tmp;//这么写是错误的
//			//赋值，递归删除这个节点又分为四种情况……
//			//递归直到root再也不能递归，也就是当这个节点是
//			//上面三种情况任何一种时，执行删除节点操作
//			node->right = removeNode(node->right, tmp->val);//这步的上一步是回到删除只有右孩子节点的那步
//		}
//	}
//	return node;
//}
//
////查找实现
//bool BST::searchNode(TreeNode* node, int value)
//{
//	if (node == NULL)//node==NULL说明一直往左或往右找都没找到
//	{
//		return false;
//	}
//	if (node->val > value)//往左找
//	{
//		return searchNode(node->left, value);
//	}
//	else if (node->val < value)
//	{
//		return searchNode(node->right, value);
//	}
//	//否则就是找到了，直接将返回给上一层
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


//邻接矩阵的实现
//#include<iostream>
//using namespace std;
//#define inf -1
//class Graph {
//private:
//	int number;//顶点个数
//	int** edges;
//
//public:
//	Graph() :number(0), edges(NULL) {};
//
//	//有参构造
//	Graph(int num);
//	//析构
//	~Graph();
//	//
//	void addEdge(int u,int v,int w);
//
//	void print();
//};
//Graph::Graph(int num)
//{
//	number = num;
//	edges = new int* [num];//new出一个长度为num的二维数组
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
//	int the_vex;//顶点个数
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
//		edges[i] = new int[the_vex];//一维数组给the_vex的长度
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
//		delete[]edges[i];//先删除每一行
//	}
//	delete[]edges;//再删除二维数组
//}
//void Graph::addEdges(int a, int b, int k) //从顶点a到顶点b创建一条边
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
////邻接表的实现
//class Graph
//{
//private:
//	struct EdgeNode
//	{
//		int vertex;//弧尾的顶点编号
//		int weight;//边权
//		EdgeNode* next;//指向下一个边结点
//		//同一弧头的所有边都是链接在同一链表上
//
//	};
//	struct VertexNode//顶点节点
//	{
//		int vertex;//弧头
//		EdgeNode* firstEdge;//指向链表头（边结点）的指针
//	};
//	int vertices;//顶点总数
//	VertexNode* nodes;//nodes是数组，元素是每个结点
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
//		nodes[i].vertex = i;//给弧头赋值编号
//		nodes[i].firstEdge = nullptr;//将顶点的指针全部初始化为NULL
//	}
//}
//Graph::~Graph()
//{
//	for (int i = 0; i < vertices; i++)
//	{
//		EdgeNode* curr = nodes[i].firstEdge;
//		while (curr)//这步是将顶点节点的指针指向的链表一一删除，每循环一次就销毁一个链表，有vertices个链表
//		{
//			EdgeNode* tmp = curr;
//			curr = curr->next;
//			delete tmp;
//		}
//	}//for循环结束后，
//	delete[]nodes;//最后将数组销毁
//}
//void Graph::addEdge(int u, int v, int w)
//{
//	EdgeNode* newNode = new EdgeNode;//生成一个边结点
//	newNode->vertex = v;
//	newNode->weight = w;
//	newNode->next = nodes[u].firstEdge;//头插法
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


////邻接表的实现
//#include<iostream>
//using namespace std;
//class AdjList {
//private:
//	//一共两个结构体
//	//边节点结构体
//	struct EdgeNode {
//		int vertex;//弧尾节点编号
//		EdgeNode* next;//指向下一边结点的指针
//		int weight;//边界点权重
//		EdgeNode(int w):vertex(0),next(NULL),weight(w){}//构造函数初始化列表
//	};
//	//顶点节点结构体
//	struct VertexNode {
//		int vertex;//弧头结点编号
//		EdgeNode* firstEdge;//指向链表头结点
//	};
//	int vertices;//顶点总数
//	VertexNode* node;//存放顶点节点的数组
//public:
//	AdjList(int vertices);//有参构造
//	~AdjList();
//	//添加边结点
//	void addEdge(int u, int v, int w);
//	void printAdjList();
//};
//AdjList::AdjList(int vertices)
//{
//	this->vertices = vertices;//将传进来的顶点个数赋予vertices
//	this->node = new VertexNode[vertices];//动态分配一个数组
//	for (int i = 0; i < vertices; i++)
//	{
//		//初始化编号
//		node[i].vertex = i;
//		//将每一个指向链表头结点指为NULL
//		node[i].firstEdge = NULL;
//	}
//}
//AdjList::~AdjList()
//{
//	for (int i = 0; i < this->vertices; i++)
//	{
//		EdgeNode* curr = node[i].firstEdge;
//		//将每个顶点结点的链表销毁
//		while (curr)
//		{
//			EdgeNode* tmp = curr;
//			curr = curr->next;
//			delete tmp;
//		}
//	}
//	//最后销毁数组
//	delete[]node;
//}					//弧头   弧尾   权
//void AdjList::addEdge(int u, int v, int w)
//{
//	EdgeNode* newNode = new EdgeNode(w);
//	//newNode->weight = w;
//	newNode->vertex = v;
//	//头插法
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
//			cout << "弧头：" << i;
//			cout << " 弧尾："<<curr->vertex << " " << "weight: " << curr->weight;
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

////哈希表实现,该实现与邻接表类似，都是顺序表与链表结合
//// 底层物理结构利用顺序表存储，存放的是指向链表头的指针
////哈希函数：利用的是除留余数法->键的值模上哈希表长度
////哈希冲突解决方案：链地址法
//#include<iostream>
//using namespace std;
//
//template<typename KeyType, typename ValueType>
////哈希表节点
//class HashNode {
//public:
//	KeyType key;//键
//	ValueType value;//值
//	HashNode* next;//指向下一节点
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
//	int size;//哈希表大小
//	HashNode< KeyType, ValueType>** table;//table=new HashNode*[size]
//	//实现一个哈希函数，哈希值（键）通过哈希函数映射到顺序表中作为索引
//	int hash(const KeyType& key)const//不会修改本身成员变量，所以在最后加const
//	{
//		int hashkey = key % size;
//		if (hashkey < 0)//疑惑这为什么不用while
//		{
//			hashkey += size;
//		}
//		return hashkey;
//	}
//public:
//	HashTable(int size = 256);//默认参数
//	~HashTable();
//	//增，删，该，查
//	void insert(const KeyType& key, const ValueType& value);
//	void remove(const KeyType& key);
//	bool find(const KeyType& key, ValueType& value)const;//value会被修改，没加const。find不会修改本身成员变量，所以在最后加const
//
//};
//template<typename KeyType, typename ValueType>
//HashTable<typename KeyType, typename ValueType>::HashTable(int size)
//{
//	this->size = size;
//	this->table = new HashNode<KeyType, ValueType>* [size];
//	//将哈希表每个元素初始化
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
//			//将链表节点删除
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
////增，删，该，查
//template<typename KeyType, typename ValueType>
//void HashTable<typename KeyType, typename ValueType>::insert(const KeyType& key, const ValueType& value)
//{
//	int index = hash(key);
//	HashNode<KeyType, ValueType>* newNode = new HashNode<KeyType, ValueType>(key, value);
//	//要插入的是头结点
//	if (table[index] == NULL)
//	{
//		table[index] = newNode;
//	}
//	else//否则；利用头插法
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
//	if (table[index])//如果存在
//	{
//		if (table[index]->key == key)//需要删除头结点
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
//			}//循环跳出时，curr->next为要找的节点
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
//bool HashTable<typename KeyType, typename ValueType>::find(const KeyType& key, ValueType& value)const//value会被修改，没加const。find不会修改本身成员变量，所以在最后加const
//{
//	int index = hash(key);
//	if (table[index])
//	{
//		if (table[index]->key == key)
//		{
//			value = table[index]->value;//??为什么要把链表头的值赋给value
//			return true;
//		}
//		else
//		{
//			HashNode<KeyType, ValueType>* curr = table[index];
//			while (curr->next && curr->next->key != key)
//			{
//				curr = curr->next;
//			}//循环跳出时，curr->next为要找的节点
//			if (curr->next)
//			{
//				value = curr->next->value;//为什么要把链表节点的值赋给value
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
