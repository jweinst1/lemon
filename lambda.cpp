#include "lambda.h"

lambda::Add::Add(int arg){
    op = arg;
}

int lambda::Add::operator()(int other){
    return op + other;
}