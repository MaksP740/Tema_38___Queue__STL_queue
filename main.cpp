#include <iostream>
#include "Queue.h"
#include "Music.h"
#include <deque>
#include <ctime>

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

    std::deque<Music> folder;

    folder.push_back(Music("Single Ladies", "Beyonce", 2008));
    folder.push_back(Music("Umbrella", "Rihanna featuring Jay-Z", 2007));
    folder.push_back(Music("Shake it Off", "Taylor Swift", 2016));

    myQueue::Queue<Music> play;

    play.push_back(folder[rand() % folder.size()]);
    play.push_back(folder[rand() % folder.size()]);
    play.push_back(folder[rand() % folder.size()]);
    play.push_back(folder[rand() % folder.size()]);
    play.push_back(folder[rand() % folder.size()]);
    play.push_back(folder[rand() % folder.size()]);










    return 0;
}
