#include <iostream>
using namespace std;
class library
{
private:
int no_of_books;
public:
library()
{
no_of_books = 500;
}
friend class librarian; //librarian is a friend class
};
class librarian
{
public:
void function1(library l)
{
cout << "Your data is:" << l.no_of_books; //private member accessible
}
};
int main(void)

{
library l1;
librarian l;
l.function1(l1);
}