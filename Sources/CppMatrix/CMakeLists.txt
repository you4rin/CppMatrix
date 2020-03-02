# Target name
set(target CppMatrix)

# Sources
file(GLOB_RECURSE sources ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_library(${target} STATIC ${sources})