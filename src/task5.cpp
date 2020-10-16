//
// Created by toliman on 05.10.2020.
//

#include "task5.h"

void split(char ***result, int *N, char *buf, char ch) {

    int result_index = 0;
    int result_string_index = 0;
    int buf_index = 0;

    int string_count = 0;
    unsigned int last = 0;

//    for (unsigned int i = 0; i < strlen(buf); ++i) {
//        if (buf[i] == ch && i - last > 1) {
//            string_count++;
//            last = i;
//        }
//    }
//
//    int lengths[100];
//    int l = 0;
//    last = 0;
//
//    for (unsigned int i = 0; i < strlen(buf); ++i) {
//        if (buf[i] == ch && i - last > 1) {
//            lengths[l] = i - last - 1;
//            l++;
//            last = i;
//        }
//    }
//    *N=3;

//    (*result) = new char *[string_count];
//
//    for (int i = 0; i < string_count; ++i)
//        (*result)[i] = new char[lengths[i] + 1];
//
//    for (int i = 0; i < string_count; ++i)
//        memset((*result)[i], 0, lengths[i] + 1);
//
//    while (buf[buf_index] != '\0') {
//        if (buf[buf_index] == ch) {
//            if (result_string_index > 0) {
//                result_index++;
//                result_string_index = 0;
//            }
//        } else {
//            (*result)[result_index][result_string_index] = buf[buf_index];
//            result_string_index++;
//        }
//        buf_index++;
//    }
//    (*N) = result_index;
}
