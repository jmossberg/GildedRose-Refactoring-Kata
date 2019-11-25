//#define CATCH_CONFIG_MAIN
//#include "Catch.hpp"
#define APPROVALS_CATCH
#include "ApprovalTests.hpp"
#include "GildedRose.h"

TEST_CASE("PassingTest", "GildedRose") {
    REQUIRE( true );
}

TEST_CASE("ApprovalTest", "GildedRose") {
    ApprovalTests::Approvals::verify("hello");
}

TEST_CASE("GildedRoseStream", "GildedRose") {
    GildedRose gr{42};
    ApprovalTests::Approvals::verify(gr);
}