#include<gtest/gtest.h>
#include<nlohmann/json.hpp>
using json = nlohmann::json;

TEST(JsonArrayTest, C19){
    json j = json::array();

    j.push_back(1);
    j.push_back(2);
    EXPECT_EQ(j.size(), 2);
    EXPECT_EQ(j[0], 1);
    EXPECT_EQ(j[1], 2);
}
