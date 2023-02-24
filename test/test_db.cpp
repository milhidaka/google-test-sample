#include <gtest/gtest.h>
#include "../src/core/db.hpp"

class DBTest : public ::testing::Test {
protected:
    virtual void SetUp() {
        db.put(10, 20);
        db.put(20, 40);
        db.put(30, 60);
    }
    DB db;
};

TEST_F(DBTest, CanPutGet) {
    db.put(1, 2);
    db.put(-1, 5);
    EXPECT_EQ(2, db.get(1));
    EXPECT_EQ(5, db.get(-1));
    EXPECT_EQ(60, db.get(30));
}

TEST_F(DBTest, DefaultIsZero) {
    EXPECT_EQ(0, db.get(123));
}
