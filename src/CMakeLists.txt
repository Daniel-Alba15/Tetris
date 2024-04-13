file(GLOB SOURCES "*.cpp")
add_executable(tetris ${SOURCES})
target_link_libraries(tetris raylib GL m pthread dl rt X11)