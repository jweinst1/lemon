#pragma once

namespace lambda
{
    class Add{
        private:
           int op;
        public:
           Add(int arg);
           int operator() (int other);
    };
}