#include <string>
#include <set>

using namespace std;

class User{
    private :
        string Name;
        string Course;
        int nMec;
        set<Book> bkLoan;

    public :
        User(string n_name, string n_course, int n_nMec);
        int getNumber();
        string getName();
        string getCourse();
        bool loanBook(Book n_book);
        void removeBook(Book n_book);
};

class Book{
    private :
        int id;
        string title;
        string type;
        static int lastId;

    public :
        Book(int id, string title, string type);
        int getId();
        string getTitle();
        string getType();
        int getLastId();
};