#include <gtest/gtest.h>
#include "../src/feedhandler/feed_handler.hpp"
#include <atomic>
#include <thread>
#include <chrono>

extern IFeedHandler* createFeedHandler();

TEST(FeedHandlerTest, ReceivesData) {
    IFeedHandler* fh = createFeedHandler();
    std::atomic<int> tickCount{0};
    fh->subscribe([&](const MarketTick &tick) {
        tickCount++;
    });
    fh->start();

    std::this_thread::sleep_for(std::chrono::milliseconds(1500));
    EXPECT_GT(tickCount.load(), 0) << "FeedHandler should receive ticks.";
    delete fh;
}
