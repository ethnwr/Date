#include <iostream>
#include "Date.h"
using namespace std;
int main()
{
    Date d1(5, 6, 2004);
    Date d2(28, 7, 2006);
    d1-(d2);
    d1 + 10;
}
