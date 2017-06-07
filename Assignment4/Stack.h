#pragma once



template <class ItemType>
struct NodeType1;

template<class ItemType>
class StackType: public QueType<ItemType>
{
	
public:
	StackType();
	~StackType();
	void Push(ItemType item);
	void Pop(ItemType& item);
	


public:
	NodeType1<ItemType>* topPtr;
};
template <class ItemType>
struct NodeType1
{
	ItemType info;
	NodeType1<ItemType>* next;
};

template<class ItemType>
StackType<ItemType>::StackType()
{
	topPtr = NULL;
}

template <class ItemType>
StackType<ItemType>::~StackType()
{
	
	NodeType1<ItemType>* tempPtr;
	while (topPtr != NULL)
	{
		tempPtr = topPtr;
		topPtr = topPtr->next;
		delete tempPtr;
	}
}
template<class ItemType>
void StackType<ItemType>::Pop(ItemType& item)
{
	NodeType1<ItemType>* tempPtr;
	item = topPtr->info;
	tempPtr = topPtr;
	topPtr = topPtr->next;
	delete tempPtr;
}



template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
		NodeType1<ItemType>* location;
			
		location = new NodeType1<ItemType>;
		location->info = newItem;
		location->next = topPtr;
		topPtr = location;
		
			
}




