#include <iostream>
#include "Queue.h"

int main() {

    myQueue::Queue<std::string> nums;
    nums.show();
    cout << "====================" << endl;

    nums.push_back("Pavlo");
    nums.push_back("Diana");
    nums.push_back("Dmytro");
    nums.push_back("Volodymyr");
    nums.push_back("Kira");
    nums.show();

    cout << "====================" << endl;

    //Обробка черги
    while (!nums.isEmpty()) {
        cout << "FIRST: " << nums.first() << endl;
        nums.pop_front();
        nums.show();
    }
    cout << "====================" << endl;
    cout << endl;
    nums.show();







    return 0;
}
