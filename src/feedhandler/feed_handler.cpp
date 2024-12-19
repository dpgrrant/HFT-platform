#include "feed_handler.hpp"
#include <iostream>
#include <thread>
#include <vector>

class MockFeedHandler : public IFeedHandler {
public:
    void start() override {
        std::thread([this]() {
            for (int i = 0; i < 10; ++i) {
                MarketTick tick{"AAPL", 100.0 + i, 10 + i, std::chrono::high_resolution_clock::now()};
                for (auto &cb : callbacks_) {
                    cb(tick);
                }
                std::this_thread::sleep_for(std::chrono::milliseconds(100));
            }
        }).detach();
    }

    void subscribe(std::function<void(const MarketTick&)> callback) override {
        callbacks_.push_back(callback);
    }

private:
    std::vector<std::function<void(const MarketTick&)>> callbacks_;
};

IFeedHandler* createFeedHandler() {
    return new MockFeedHandler();
}
