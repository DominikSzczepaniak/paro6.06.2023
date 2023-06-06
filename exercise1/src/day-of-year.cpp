#include "day-of-year.hpp"

int dayOfYear(int month, int dayOfMonth, int year) {
    return dayOfMonth + rec(1, month, year);
}

int rec(int month, int end, int year){
    if(month == end){
        return 0;
    }
    else if((month % 2 == 1 && month <= 7) || (month % 2 == 0 && month > 7)){
        return 31 + rec(month+1, end, year);
    }
    else if(month == 2){
        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
            return 29 + rec(month+1, end, year);
        }
        else{
            return 28 + rec(month+1, end, year);
        }
    }
    else if((month % 2 == 0 && month != 2 && month < 7) || (month % 2 == 1 && month > 7)){
        return 30 + rec(month + 1, end, year);
    }
}

