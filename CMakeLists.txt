cmake_minimum_required(VERSION 3.10)
enable_testing()

find_package(GTest)

project(gtest-example
	LANGUAGES CXX
)

add_subdirectory(3rd_party/google-test)

add_executable(${PROJECT_NAME} src/randoTest.cpp)

add_library(Rando
	STATIC
	src/rando.cpp
)

target_include_directories(Rando
	PUBLIC
	${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(${PROJECT_NAME}
	PRIVATE
	Rando
	GTest::gtest_main
)

gtest_discover_tests(${PROJECT_NAME}
  LABELS RandoTest
)