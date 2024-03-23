#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Date{
private:
    int day, month, year;
public:
    Date(): day(0), month(0), year(0) {}

    Date(int _day, int _month, int _year):
    day(_day), month(_month), year(_year) {}

    ~Date(){
        cout << "BABAHH!" << endl;
    }

    string toString() const{
        stringstream s_stream;
        s_stream
            << "day: " << day << " "
            << "month: " << month << " "
            << "year: " << year;

        return s_stream.str();
    }

    bool isLeap() const{
        return year % 4 == 0;
    }

    void increaseByFive(){
        day += 5;
    }
};

int main() {

}
