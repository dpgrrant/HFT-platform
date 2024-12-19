#pragma once
#include <string>
#include <mutex>

class OrderGateway {
public:
    OrderGateway() = default;
    ~OrderGateway() = default;

    // For now, a simple method to send an order by passing a string detail
    // Later, you can define a proper Order struct and implement this more formally.
    void sendOrder(const std::string &orderDetails);

private:
    std::mutex mutex_;
};
