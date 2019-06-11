#include "catch.hpp"
#include "StringReverse.h"

using namespace CPPLondonUni;

TEST_CASE("A default constructed StringReverse is empty", "[stringreverse]") {
    const StringReverse s;
    CHECK(s.empty());
    REQUIRE(s == "");
}

TEST_CASE("A StringReverse constructed with 'Hello World' becomes 'dlroW olleH'", "[stringreverse]") {
    const StringReverse s{"Hello World"};
    CHECK_FALSE(s == "Hello World");
    CHECK_FALSE(s.empty());
    CHECK(s == "dlroW olleH");
}

TEST_CASE("StringReverse returns reversed string", "[stringreverse]") {
    const StringReverse s{"LondonUni"};
    std::string out = s;
    CHECK(out == "inUnodnoL");
}

TEST_CASE("Move from a StringReverse to our own string", "[stringreverse]") {
    StringReverse s{"LondonUni"};
    std::string out = std::move(s);
    CHECK(out == "inUnodnoL");
    CHECK(s.empty());
}