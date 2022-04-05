#pragma once
#pragma once
using namespace std;
template<typename T>
class List
{
private:
	template<typename T>
	class Node
	{
	public:
		Node* pNext; //указатель на следующий элемент
		T data;//данные
		Node(T data = T(), Node* pNext = nullptr)

		{
			this->data = data;

			this->pNext = pNext;
		}
	};
	int Size;
	Node<T>* head;    //указатель на начало списка  

public:
	int GetSize() { return Size; }
	~List();
	List();
	void operator +(const T data);
	void pop_front();
	T& operator[](const int index);
	bool operator > (List& r);
	bool operator <(List& r);

	//List()
	//{
	//	Size = 0;
	//	head = nullptr;
	//}
	//~List() {}
	//void operator +(const T data)//добавление элемента в начало списка
	//{
	//	head = new Node<T>(data, head);
	//	Size++;
	//}
	//void operator -(int)//удаление первого элемента
	//{
	//	Node<T>* temp = head;
	//	head = head->pNext;
	//	delete temp;
	//	Size--;
	//}
	//T& operator[](const int index)
	//{
	//	int counter = 0;
	//	Node<T>* current = this->head;
	//	while (current != nullptr)
	//	{
	//		if (counter == index)
	//		{
	//			return current->data;
	//		}
	//		current = current->pNext;
	//		counter++;
	//	}
	//}
	//bool operator > (List& r)
	//{
	//	if (this->GetSize() > r.GetSize())
	//	{
	//		return true;
	//	}
	//	else
	//	{
	//		return false;
	//	}
	//}
	//bool operator <(List& r)
	//{
	//	if (this->GetSize() < r.GetSize())
	//	{
	//		return true;
	//	}
	//	else
	//	{
	//		return false;
	//	}
	//}
	
};
template<typename T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}

template<typename T>
List<T>::~List()
{
}

template<typename T>
T& List<T>::operator[](const int index)
{
	Node<T>* current = this->head;//âðåìåííàÿ ïåðåìåííàÿÿ, ïîêàçûâàþùàÿ êîíêðåòíûé ýëåìåíò
	int counter = 0;// ïåðåìåííàÿ ñ÷åò÷èê-ýëåìåíòîâ
	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}

template<typename T>
 void List<T>::operator+(const T data)
{
	 head = new Node<T>(data, head);
	 Size++;
}


 template<typename T>
 inline bool List<T>::operator>(List& r)
 {
	 if (this->GetSize() > r.GetSize())
	 {
		 return true;
	 }
	 else
	 {
		 return false;
	 }
 }

 template<typename T>
 inline bool List<T>::operator<(List& r)
 {
	 if (this->GetSize() < r.GetSize())
		 	{
		 		return true;
		 	}
		 	else
		 	{
		 		return false;
		 	}
 }
 
 template<typename T>
	 inline void List<T>::pop_front()
	 {
		 Node<T>* temp = head;
		 head = head->pNext;
		 delete temp;
		 Size--;
	 }
