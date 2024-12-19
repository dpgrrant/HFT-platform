#pragma once
#include <string>
#include <functional>
#include "../feedhandler/feed_handler.hpp"

// ExampleStrategy is a simple strategy that reacts to incoming MarketTick data.
// It will invoke a provided callback (orderSender_) when it decides to trade.

class ExampleStrategy {
public:
    // The constructor takes a callable (e.g. lambda) that can send orders back 
    // to the order gateway. This decouples the strategy from the actual order gateway class.
    ExampleStrategy(std::function<void(const std::string&)> orderSender);

    // Called whenever new market data is received
    void onMarketData(const MarketTick &tick);

private:
    std::function<void(const std::string&)> orderSender_;
};
