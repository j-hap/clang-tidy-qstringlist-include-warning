cmake_minimum_required(VERSION 3.19)
project(clang-tidy-qstringlist-include-warning LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(clang-tidy-qstringlist-include-warning main.cpp)

target_link_libraries(clang-tidy-qstringlist-include-warning PRIVATE Qt::Core)

install(
  TARGETS clang-tidy-qstringlist-include-warning
  BUNDLE DESTINATION .
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
