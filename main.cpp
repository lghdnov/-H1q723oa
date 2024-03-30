#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Money{
private:
    int nominal, count;

public:
    Money(int _nominal, int _count):
    nominal(_nominal),
    count(_count)
    {}

    string toString() const{
        ostringstream s_stream;
        s_stream
            << "nominal:  " << nominal << " "
            << "count: " << count;

        return s_stream.str();
    }

    int getSum() const{
        return nominal * count;
    }
};

int main() {
    Money money(10, 10);
    cout << money.toString();
}
