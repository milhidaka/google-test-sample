cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(gtsample)

file(GLOB_RECURSE CORE_SOURCES "src/core/*.cpp")

add_executable(gtsample ${CORE_SOURCES} src/main.cpp)
set_property(TARGET gtsample PROPERTY CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
  googletest
  # Specify the commit you depend on and update it regularly.
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Now simply link against gtest or gtest_main as needed. Eg
add_executable(${PROJECT_NAME}-googletest ${CORE_SOURCES} test/test_pure.cpp)
target_link_libraries(${PROJECT_NAME}-googletest gtest_main)
add_test(NAME test COMMAND ${PROJECT_NAME}-googletest)
enable_testing()
