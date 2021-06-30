cmake_minimum_required(VERSION 3.15.0)

project(QtAwesome)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

option(QTAWESOME_ENABLE_QML "QtAwesome enable qml" ON)

add_subdirectory(QtAwesome)
