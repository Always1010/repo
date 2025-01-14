#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <string>
using std::endl;
using std::cout;
using std::string;

class Test
{

private:
    /* data */
    int count;

public:
    // Test(/* args */) {
    //     count = 10086;
    // };

    // ~Test() {
    //     cout << count << endl;
    // };

    Test();
    ~Test();
    
    string getSomething();
};
#endif



