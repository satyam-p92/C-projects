#include <iostream>
using namespace std;

// class and objects

class Book
{
public:
    string title;
    string authorname;
    int pages;

    // constructor

    //if u dont have any name  and etc about that.

    Book(){
        title = "no title";
        authorname = "no author";
        pages = 0;
    }

    Book(string aTitle, string aAuthor, int aPages)
    {
        title = aTitle;
        authorname = aAuthor;
        pages = aPages;
    }
};

int main()
{

    Book book1("harry potter", "rk rowlins", 100);
    Book book3;
    // book1.title = "harry potter";
    // book1.authorname = "rk rowlins";
    // book1.pages = 100;

    cout << book1.title << endl;
    cout <<book3.pages;

    return 0;
}