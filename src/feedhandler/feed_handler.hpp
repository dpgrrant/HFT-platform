#pragma once
#include <string>
#include <functional>
#include <chrono>

struct MarketTick {
    std::string symbol;
    double price;
    int size;
    std::chrono::time_point<std::chrono::high_resolution_clock> timestamp;
};

class IFeedHandler {
public:
    virtual ~IFeedHandler() = default;

    // Start reading market data
    virtual void start() = 0;

    // Subscribe to market data updates
    virtual void subscribe(std::function<void(const MarketTick&)> callback) = 0;
};

// Factory function to create a feed handler (implemented in feed_handler.cpp)
IFeedHandler* createFeedHandler();
