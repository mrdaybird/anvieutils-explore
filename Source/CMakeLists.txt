# build project files
add_executable(main Main.c)
target_link_libraries(main anvutils_containers)

# build tests
add_subdirectory(Tests)
