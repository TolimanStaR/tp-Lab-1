//
// Created by toliman on 05.10.2020.
//

#include "task4.h"

using namespace std;

signed main() {
    cout << sum((char *) "12345678", (char *) "87654321") << endl;
    cout << sum((char *) "13221", (char *) "333") << endl;
    cout << sum((char *) "99", (char *) "9") << endl;
    cout << sum((char *) "9", (char *) "9") << endl;
    cout << sum((char *) "999", (char *) "1") << endl;

    return 0;
}
