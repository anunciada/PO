#include <iostream>
#include <set>
#include <iomanip>
#include "lib.hpp"

using namespace std;

void printMenu();
User newStudent();
void printStudent(set<User> listStudents);
Book newBook();
void printBook(set<Book> listBooks);
void loanBook(set<User> student, set<Book> book);
void returnBook(set<User> student, set<Book> book);

int main(){
    int choice;
    set<Book> bkList;
    set<User> usList;

    do{
        printMenu();                            //Print the menu
        cin >> choice;                          //Get the choice

        switch(choice){
            case 1:
                usList.insert(newStudent());
                break;
            case 2:
                int nMec;
                cout << "Student number: ";
                cin >> nMec;
                for(auto i : usList){
                    if(i.getNumber() == nMec){
                        usList.erase(i);
                        break;
                    }
                }
                break;
            case 3:
                printStudent(usList);
                break;
            case 4:
                bkList.insert(newBook());
                break;
            case 5:
                printBook(bkList);
                break;
            case 6:

                break;
            case 7:
            
                break;
            case 8:
                return 0;
                break;
        }

    }while(choice != 8);


}

void printMenu(){
    cout << "OPTIONS:" << endl;
    cout << "1 – enrol student" << endl;
    cout << "2 - remove student" << endl;
    cout << "3 - print list of users" << endl;
    cout << "4 - register new book" << endl;
    cout << "5 - print list of books" << endl;
    cout << "6 - loan" << endl;
    cout << "7 - return" << endl;
    cout << "8 - exit" << endl;
    cout << endl << "Option: ";
}

User newStudent(){
    string name, course;
    int nMec;

    cout << endl << "Student name: ";
    cin >> name;
    cout << "Student course: ";
    cin >> course;
    cout << "Student number: ";
    cin >> nMec;

    User n_std(name, course, nMec);

    return n_std;
}

void printStudent(set<User> listStudents){
    cout << setw(7) << "NMec" << "|" << setw(20) << "Name" << "|" << setw(15) << "Corse";
    for(auto i : listStudents)
        cout << setw(7) << i.getNumber() << "|" << setw(20) << i.getName() << "|" << setw(15) << i.getCourse();
}

Book newBook(){
    int id;
    string title, type;

    cout << endl << "Book id: ";
    cin >> id;
    cout << "Book title: ";
    cin >> title;
    cout << "Book type: ";
    cin >> type;

    Book n_book(id, title, type);

    return n_book;
}

void printBook(set<Book> listBooks){
    cout << setw(6) << "Id" << "|" << setw(20) << "title" << "|" << setw(13) << "Type";
    for(auto i : listBooks)
        cout << setw(6) << i.getId() << "|" << setw(20) << i.getTitle() << "|" << setw(13) << i.getType();
}

void loanBook(set<User> student, set<Book> book){
    int nMec, id;

    cout << "Student number: ";
    cin >> nMec;
    cout << "Book id: ";
    cin >> id;

    for(auto i : student){
        
    }
}