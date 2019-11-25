add_library(src GildedRose.cpp)
target_include_directories(src PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_options(src PRIVATE -coverage)
target_link_libraries(src gcov)