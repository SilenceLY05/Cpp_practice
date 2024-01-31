#pragma once

typedef void LinkList;


typedef struct _tag_LinkListNode
{
	struct _tag_LinkListNode* next;
}LinkListNode;

LinkList* LinkList_Create();

void LinkList_Destory(LinkList* list);

void ListList_Clear(LinkList* list);

int LinkList_Length(LinkList* list);

int LinkList_Insert(LinkList* list, LinkListNode* node, int pos);

LinkListNode* LinkList_Get(LinkList* list, int pos);

LinkListNode* LinkList_Delete(LinkList* list, int pos);



//template<typename T>
//struct Node
//{
//	T t;
//	struct Node<T>* next;
//};
//
//
//template<typename T>
//class LinkList
//{
//public:
//	LinkList(void);
//	~LinkList(void);
//	int getLen();
//	int Insert(T& t, int pos);
//	int Get(int pos, T& t);
//	int Delete(int pos, T& t);
//private:
//	int length;
//	Node<T>& head;
//};