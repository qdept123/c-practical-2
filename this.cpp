#include <iostream>
using namespace std;
class address
{
private:
char charray[10];
public:
void reveal()
{
cout << "\n The address of the object is :" << this;
}
};
int main(void)
{
address a1, a2, a3;
a1.reveal();
a2.reveal();
a3.reveal();
}