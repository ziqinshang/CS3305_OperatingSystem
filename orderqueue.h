#ifndef ORDERQUEUE_H
#define ORDERQUEUE_H

#include <queue>
#include <iostream>
#include <string>
#include <stdlib.h>
#include "order.h"


class OrderQueue
{
private:
    std::queue<Order> orderqueue; //the dish queue waiting to be cooked

public:
    int getsize();
<<<<<<< HEAD
    std::string displayorders_str();
=======
>>>>>>> 5950259a50b12d9c0a239bd8591082712a3fe0dc
    void displayorders();
    void appendorder(Order);
    void poporder();
    void hurry(Order);
<<<<<<< HEAD
    void hurrybytableid(int);
    Order findorderbytableid(int);
=======
>>>>>>> 5950259a50b12d9c0a239bd8591082712a3fe0dc
    //order dishes are pushed into cook waiting queue

    //厨房搞定后如何设置更好,需要kitchen那里设置下吗
//    if  == ture{
//        orders.pop();
//    }
//
//    //催单，催单是放进去orderID还是dish，swap设置下order
//    void hurry(queue<Orderqueue> &q1){
//        queue<Orderqueue> q3;
//        queue<Orderqueue> q2;
//        q2=q1-1
//        q3=q1;
//        q1=q2;
//        q2=q3;
//    }
};

#endif //ORDERQUEUE_H
