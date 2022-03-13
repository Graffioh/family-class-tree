#include <iostream>
#include <string>
#include <vector>
#include "person.h"
#include "person.cpp" // We don't need to include this normally, but now we don't have .o files (created by makefiles)
#include "familytree.h"
#include "familytree.cpp"

/*
    Family Tree Creator - Create a class called Person which will have a name, when they were born and when (and if) they died. 
    Allow the user to create these Person classes and put them into a family tree structure. 
    Print out the tree to the screen.
*/

void creaPersone(Person& person1);
void printMenu(int& input);

    // Last thing to do: create a linked list for family tree structure http://www.dgp.toronto.edu/~jstewart/270/9798s/notes/Templates.html (X)
    // Everything works except for the printList function
    // So for now I go with vector and it works of course, because its easier

int main()
{
    std::vector<Person> familyTree;
    //Node<Person> *head = new Node<Person(); (?)

    int input = 0;

    do{
        printMenu(input);
        switch(input)
        {
            case 1:
                {
                    Person person1;
                    creaPersone(person1);
                    //tree.addPerson(persona1);
                    familyTree.push_back(person1);
                    break;
                }
            
            case 2:
                {
                    //tree.printList(); // I think i messed up something, I don't really know how to print a list of objects with template classes
                    for(auto& person1: familyTree)
                    {
                        person1.printInfoPerson(person1);
                    }
                    break;
                }

            case 0:
                {
                    break;
                }
            default:
                std::cout << "Error";
        }
    }while(input != 0 && input != 2);

    return 0;
}

void creaPersone(Person& person1)
{
    std::string name;
    int b_day,b_month,b_year; // birth date
    int d_day,d_month,d_year; // death date

    std::cout << "Insert name: ";
    std::cin >> name;
    std::cout << "Insert day of birth: " << std::endl;
    std::cin >> b_day;
    std::cout << "Insert month of birth: " << std::endl;
    std::cin >> b_month;
    std::cout << "Insert year of birth: " << std::endl;
    std::cin >> b_year;


    char c;
    std::cout << "Is this person dead? Yes(y) or Not(n), If yes insert death date: ";
    std::cin >> c;

    if(c == 'y')
    {
        std::cout << "Insert day of decease: " << std::endl;
        std::cin >> d_day;
        std::cout << "Insert month of decease: " << std::endl;
        std::cin >> d_month;
        std::cout << "Insert year of decease: " << std::endl;
        std::cin >> d_year;

        person1 = Person(name, b_day, b_month, b_year, d_day, d_month, d_year);
        //Person persona1(name, b_day, b_month, b_year, d_day, d_month, d_year); //error: declaration of 'Person persona1' shadows a parameter: name
        return;
    }

    person1 = Person(name, b_day, b_month, b_year);

}

void printMenu(int& input)
{
    system("cls");
    std::cout << "=== Welcome to the People Maker ===\nInsert 1 to create a new person\n,Insert 2 to stamp the family tree\n,Insert 0 to exit\nSelection: ";
    std::cin >> input;
}
