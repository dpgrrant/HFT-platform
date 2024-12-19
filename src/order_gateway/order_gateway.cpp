#include "order_gateway.hpp"
#include <iostream>

void OrderGateway::sendOrder(const std::string &orderDetails) {
    std::lock_guard<std::mutex> lock(mutex_);
    std::cout << "OrderGateway: Sending order: " << orderDetails << std::endl;
}
