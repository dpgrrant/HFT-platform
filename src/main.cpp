#include <iostream>
#include <thread>
#include "feedhandler/feed_handler.hpp"
#include "order_gateway/order_gateway.hpp"
#include "strategies/example_strategy.hpp"

int main() {
    std::cout << "HFT platform main orchestrator starting..." << std::endl;

    // Create feed handler
    IFeedHandler *feedHandler = createFeedHandler();

    // Create order gateway
    OrderGateway gateway;

    // Create strategy
    ExampleStrategy strategy([&gateway](const std::string &orderMsg) {
        gateway.sendOrder(orderMsg);
    });

    // Subscribe strategy to feed updates
    feedHandler->subscribe([&strategy](const MarketTick &tick) {
        strategy.onMarketData(tick);
    });

    // Start feed handler
    feedHandler->start();

    // Let the feed handler run for some time
    std::this_thread::sleep_for(std::chrono::seconds(2));

    std::cout << "Shutting down." << std::endl;
    delete feedHandler;
    return 0;
}
