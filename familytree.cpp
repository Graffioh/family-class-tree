#include <iostream>
#include <string>
#include "familytree.h"
#include "person.h" //composition of classes, not Inerhitance, because we need an already created object to insert in the family tree, we dont really need classes variables members
//#include "person.cpp"


/* Linked list 
template <class T>
void familyTree<T>::addPerson(T data)
{
    Node<T> *p;

    p = new Node<T>();
    p->data = data;
    p->next = sentinel->next;
    sentinel->next = p;
}

template <class T>
void familyTree<T>::printList()
{
    Node<T>* temp = sentinel;

	if (temp == NULL) 
	{
		std::cout<<"";
	}

	if (temp->next == NULL) 
	{
		std::cout<<temp->data;
	}
	else 
	{
		while (temp != NULL)
		{
			std::cout<< temp->data;
			temp = temp->next;
			std::cout<< ",";
		}
	}
}
*/