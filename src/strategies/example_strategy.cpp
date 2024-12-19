#include "example_strategy.hpp"
#include <iostream>

ExampleStrategy::ExampleStrategy(std::function<void(const std::string&)> orderSender)
: orderSender_(orderSender) {}

void ExampleStrategy::onMarketData(const MarketTick &tick) {
    // Dummy logic: Buy if price < 105.0
    if (tick.price < 105.0) {
        std::string orderMsg = "Buy " + tick.symbol + " at " + std::to_string(tick.price);
        orderSender_(orderMsg);
    }
}
