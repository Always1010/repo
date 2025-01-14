#include "test.h"

Test::Test(/* args */)
{
    count = 10086;
}
 
Test::~Test()
{
    cout << count << endl;    

    cout << "you are so stupid!" << endl;
}

string Test::getSomething() {
    cout << "you can getSomething!" << endl;
    
    return "Something";
}