#include "windows.h"
#define SUCCESS				1//执行成功
#define ERROR				-1//执行失败
#define INDEX_IS_ERROR		-2//错误的索引号
#define BUFFER_IS_EMPTY		-3//缓冲区已空

template <class T_ELE>
class LinkedList
{
private:
	typedef struct _NODE
	{
		T_ELE	Data;
		_NODE*	pNext;
	}NODE,*PNODE;
	
	PNODE m_pList;
	DWORD m_dwLength;

public:
	LinkedList();
	~LinkedList();

public:
	BOOL IsEmpty();
	VOID Clear();
	DWORD GetElement(IN DWORD dwIndex,OUT T_ELE& Element);
	DWORD GetElementIndex(IN T_ELE Element);
	DWORD Insert(IN T_ELE Element);
	DWORD Insert(IN DWORD dwIndex,IN T_ELE& Element);
	DWORD Delete(IN DWORD dwIndex);
	DWORD GetSize();

private:
	PNODE GetIndexCurrentNode(DWORD dwIndex);
	PNODE GetIndexPreviousNode(DWORD dwIndex);
	PNODE GetIndexNextNode(DWORD dwIndex);

};


