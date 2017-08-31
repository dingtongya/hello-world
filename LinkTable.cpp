#include "stdafx.h"
#include "LinkTable.h"

//无参构造函数
template<class T_ELE> 
LinkedList<T_ELE>::LinkedList()
:m_pList(NULL),m_dwLength(0)
{
	
}

template<class T_ELE>
LinkedList<T_ELE>::~LinkedList()
{
}

template<class T_ELE>
BOOL LinkedList<T_ELE>::IsEmpty()
{
	return SUCCEEDED;
}
//清空链表
template<class T_ELE>
VOID LinkedList<T_ELE>::Clear()
{
	
}

template<class T_ELE>
DWORD LinkedList<T_ELE>::GetElement(IN DWORD dwIndex, OUT T_ELE& Element)
{
	return SUCCESS;
}

template<class T_ELE>
DWORD LinkedList<T_ELE>::GetElementIndex(IN T_ELE Element)
{
	return SUCCESS;
}

//向链表尾插入数据
template<class T_ELE>
DWORD LinkedList<T_ELE>::Insert(IN T_ELE ELement)
{
	PNODE pNewNode = new NODE;
	memset(pNewNode,0,sizeof(NODE));
	memcpy(&pNewNode->Data,&ELement,sizeof(T_ELE));
	
	//1.判断链表是否为空
	if(m_pList == NULL || m_dwLength == 0)
	{
		m_pList = pNewNode;
		m_dwLength++;
		return SUCCESS;
	}
	//2.如果链表中已存在元素
	PNODE pTempNode = m_pList;
	for(DWORD i=0;i<m_dwLength-1;i++)
	{
		pTempNode = pTempNode->pNext;
	}

	pTempNode->pNext = pNewNode;
	m_dwLength++;
	return SUCCESS;



}

template<class T_ELE>
DWORD LinkedList<T_ELE>::Insert(IN DWORD dwIndex, IN T_ELE& Element)
{

}

template<class T_ELE>
DWORD LinkedList<T_ELE>::Delete(IN DWORD dwIndex)
{
	return SUCCESS;
}
template<class T_ELE>
DWORD LinkedList<T_ELE>::GetSize()
{

	return m_dwLength;
}


template<class T_ELE>
PNODE LinkedList<T_ELE>::GetIndexCurrentNode(DWORD dwIndex)
{
	PNODE pNode = NULL;
	return pNode;

}
template<class T_ELE>
PNODE LinkedList<T_ELE>::GetIndexPreviousNode(DWORD dwIndex)
{
	PNODE pNode = NULL;
	return pNode;
}
template<class T_ELE>
PNODE LinkedList<T_ELE>::GetIndexNextNode(DWORD dwIndex)
{
	PNODE pNode = NULL;
	return pNode;
}