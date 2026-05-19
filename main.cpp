#include <iostream>
#include "Queue.h"
#include "Music.h"
#include <deque>
#include <ctime>
#include "PriorityQueue.h"
#include "Person.h"

int main() {
    srand(time(0));

    // myQueue::Queue<std::string> nums;
    // nums.show();
    // cout << "====================" << endl;
    //
    // nums.push_back("Pavlo");
    // nums.push_back("Diana");
    // nums.push_back("Dmytro");
    // nums.push_back("Volodymyr");
    // nums.push_back("Kira");
    // nums.show();
    //
    // cout << "====================" << endl;
    //
    // //Обробка черги
    // while (!nums.isEmpty()) {
    //     cout << "FIRST: " << nums.first() << endl;
    //     nums.pop_front();
    //     nums.show();
    // }
    // cout << "====================" << endl;
    // cout << endl;
    // nums.show();

    // std::deque<Music> folder;
    //
    // folder.push_back(Music("Single Ladies", "Beyonce", 2008));
    // folder.push_back(Music("Umbrella", "Rihanna featuring Jay-Z", 2007));
    // folder.push_back(Music("Shake it Off", "Taylor Swift", 2016));
    //
    // myQueue::Queue<Music> play;
    //
    // play.push_back(folder[rand() % folder.size()]);
    // play.push_back(folder[rand() % folder.size()]);
    // play.push_back(folder[rand() % folder.size()]);
    // play.push_back(folder[rand() % folder.size()]);
    // play.push_back(folder[rand() % folder.size()]);
    // play.push_back(folder[rand() % folder.size()]);
    //
    // while (!play.isEmpty()) {
    //     Music item = play.first();
    //     cout << item.getName() << endl;
    //     cout << item.getAutor() << endl;
    //     cout << item.getYear() << endl;
    //     play.pop_front();
    //     cout << endl;
    // }

    // myQueue::PriorityQueue<int> nums;
    //
    // nums.push_back(5);
    // nums.push_back(2);
    // nums.push_back(4);
    // nums.push_back(4);
    // nums.push_back(5);
    // nums.push_back(6);
    // nums.push_back(1);
    //
    // nums.show();

    myQueue::PriorityQueue<Person> hospital;

    hospital.push_back(Person("Елесей"));
    hospital.push_back(Person("Михайло", 0, 0,1));
    hospital.push_back(Person("Ірина", 1, 1,0));
    hospital.push_back(Person("Максим", 1, 0, 0));

    cout << endl;
    while (!hospital.isEmpty()) {
        hospital.first().showInfo();
        cout << "-------------------------\n";
        hospital.pop_front();
    }









    return 0;
}
