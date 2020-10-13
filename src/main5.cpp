//
// Created by toliman on 12.10.2020.
//

#include "task5.h"

using namespace std;

signed main() {
    auto res = new char *[100];
    for (int i = 0; i < 100; ++i) res[i] = new char[100];
    for (int i = 0; i < 100; ++i) memset(res[i], 0, 100);
    int ans;

    char ***r = new char **;
    split(r, &ans, (char *) "& _ _I&J ust Wann a&Hit &re cord! &f_f&  _.&\0", '&');

    for (int i = 0; i < ans; ++i) {
        cout << (*r)[i] << endl;
    }

    return 0;
}