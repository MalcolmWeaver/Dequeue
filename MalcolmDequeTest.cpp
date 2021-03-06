
#include <iostream>
#include "deque.h"

using namespace coen79_lab8;

int main(int argc, const char * argv[]) {
    
    int test_number = 0;
    
    // ------------- Test: constructor -------------
    std::cout << "Test number: " << ++test_number << "\n";
    std::cout << "Testing constructor...!\n";
    coen79_lab8::deque<int> myDeque1;
    std::cout << "Done!\n\n";

    myDeque1.push_back(1);
    myDeque1.push_back(2);
    myDeque1.push_back(3);
    myDeque1.push_back(4);
    myDeque1.push_back(1);
    myDeque1.push_back(2);
    myDeque1.push_back(3);
    myDeque1.push_back(4);
    myDeque1.push_back(1);
    myDeque1.push_back(2);
    myDeque1.push_back(3);
    myDeque1.push_back(4);
    myDeque1.push_back(1);
    myDeque1.push_back(2);
    myDeque1.push_back(3);
    myDeque1.push_back(4);
   
    
    myDeque1.push_front(5);
    myDeque1.push_front(6);
    myDeque1.push_front(7);
    myDeque1.push_front(8);
    myDeque1.push_front(9);
    myDeque1.push_front(10);
    myDeque1.push_front(11);
    myDeque1.push_front(12);
    myDeque1.push_front(5);
    myDeque1.push_front(6);
    myDeque1.push_front(7);
    myDeque1.push_front(8);
    myDeque1.push_front(9);
    myDeque1.push_front(10);
    myDeque1.push_front(11);
    myDeque1.push_front(12);
    myDeque1.print();

    myDeque1.pop_front();
    myDeque1.pop_front();
    myDeque1.pop_front();
    myDeque1.pop_front();
    myDeque1.pop_front();
    myDeque1.pop_front();

    myDeque1.print();

    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();
    myDeque1.pop_back();

    //myDeque1.pop_back();
    
    myDeque1.print();

    deque<int> myDeque2(myDeque1);
    
    return 0;
}
