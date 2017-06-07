#pragma once


template <class ItemType>
struct NodeType;

template <class ItemType>
class QueType
{
public:
	QueType();
	
	~QueType();
	
	void MakeEmpty();
	void Enqueue(ItemType newItem);
	void PrintQueue();
	void RemoveFromOutput();
	void Dequeue(ItemType& item);
	void EnqueueAgain(ItemType newItem);

public:
	NodeType<ItemType>* qFront;
	NodeType<ItemType>* qRear;
};
template <class ItemType>
struct NodeType
{
	ItemType info;
	NodeType* next;
};
template <class ItemType>
QueType<ItemType>::QueType()
{
	qFront = NULL;
	qRear = NULL;
}
template <class ItemType>
QueType<ItemType>::~QueType()
{
	MakeEmpty();
}

template <class ItemType>
void QueType<ItemType>::MakeEmpty()
{
	NodeType<ItemType>* tempPtr;
		while (qFront != NULL)
		{
			tempPtr = qFront;
			qFront = qFront->next;
			delete tempPtr;
		}
	qRear = NULL;
}


template <class ItemType>
void QueType<ItemType>::Enqueue(ItemType newItem)
{
	NodeType<ItemType>* newNode;

	newNode = new NodeType<ItemType>;
	
	newNode->info = newItem;
	newNode->next = NULL;
	if (qRear == NULL)
		qFront = newNode;
	else
		qRear->next = newNode;
	qRear = newNode;
	cout << "\t" << newItem << " is added to the queue.\n";
}
template <class ItemType>
void QueType<ItemType>::PrintQueue()
{
	NodeType<ItemType>* tempPtr;
	
	tempPtr = qFront;
		while (tempPtr != NULL)
		{
			cout << tempPtr->info;
			cout << " ";
			tempPtr = tempPtr->next;
		}
		cout << "\n";
		
}
template <class ItemType>
void QueType<ItemType>::RemoveFromOutput()
{
	NodeType<ItemType>* tempPtr;
	
		while (qFront != NULL)
		{
			tempPtr = qFront;
			qFront = qFront->next;
			cout << tempPtr->info;
			cout << " has been removed from the queue.\n";
			delete tempPtr;
		}
		qRear = NULL;
}
template <class ItemType>
void QueType<ItemType>::Dequeue(ItemType& item)
{
	NodeType<ItemType>* tempPtr;

	tempPtr = qFront;
	item = qFront->info;
	qFront = qFront->next;
	if (qFront == NULL)
		qRear = NULL;
	cout << item << " has been removed from the queue and added to the stack.\n";
	delete tempPtr;
}
template <class ItemType>
void QueType<ItemType>::EnqueueAgain(ItemType newItem)
{
	NodeType<ItemType>* newNode;

	newNode = new NodeType<ItemType>;
	newNode->info = newItem;
	newNode->next = NULL;
	if (qRear == NULL)
		qFront = newNode;
	else
		qRear->next = newNode;
	qRear = newNode;
	cout << newNode->info << " has been added back to queue.\n";
}



