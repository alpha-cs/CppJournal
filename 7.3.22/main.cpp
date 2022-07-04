#include <iostream>
#include "Sales_item.h"


int main(){
    /**
     * checks if data in buffer
     * pasrse current transaction with previous transaction
     * if they are the same book then it adds the total
     * else outputs total sales, and totalcost of the books
     * when while condition is complete we need to output the
     * the remainding buffer. 
     */
    Sales_item total;
    if (std::cin >> total){
        Sales_item trans;
        while (std::cin >> trans){
            if (total.isbn() == trans.isbn()){
                total += trans;
            }else{
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }else {
        return -1;
    }

    return 0;
}