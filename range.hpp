//
// Created by dolev on 18/06/2020.
//

#ifndef ITERTOOLS_CFAR_A_MASTER_RANGE_H
#define ITERTOOLS_CFAR_A_MASTER_RANGE_H
#include <iterator>
namespace itertools{
    class range{
        int begin_,end_;

    public:
        range(int begin, int end):begin_(begin),end_(end){} // constrector range
        class iterator{
            int num; // pointer for beginning iterator
        public:
            iterator(int v): num(v) {} // constractor iterator except only int (explicit)

            int operator*(){ return this->num;}
            iterator operator=(iterator& other){
                this->num=other.num;
                return this->num;
            }
            iterator operator++(){//Prefix operator
                this->num++;
                return this->num;
            }

            bool operator==(const iterator& other){ //comparison operator
                return (num==other.num);
            }
            bool operator!=(const iterator& other){//Non-comparison operator
                return (num!=other.num);
            }


        };

        int size() {return this->end_-this->begin_;}
        iterator begin() {return iterator(begin_); }
        iterator end()   { return iterator(end_); }
        typedef int	value_type;
    };
}
#endif //ITERTOOLS_CFAR_A_MASTER_RANGE_H
