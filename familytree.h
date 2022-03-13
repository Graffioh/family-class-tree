#ifndef FTREE
#define FTREE

/* Linked list
template<class T>
class Node
{
    public:
        Node<T>* next;
        T data;
};

template<class T>
class familyTree // custom linked list
{
    private:
        Node<T>* sentinel;
  
    public:

        familyTree()
        {
            sentinel = new Node<T>(); 
            sentinel->next = sentinel; 
        }
        /* I don't know if destructor is useful (for memory leaks or something else)
        ~familyTree()
        {
        }

        void addPerson(T data); // function to add a person in the linked list
        void printList(); // function to print the list, with parameters or not (?)

};
*/


#endif //FTREE