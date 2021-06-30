
set(SUBDIR_NAME QtAwesome)

find_package(Qt5 COMPONENTS
    Core
    Gui
    Widgets
REQUIRED
)

set(HEADERS
    QtAwesome.h
    QtAwesomeAnim.h
)


set(SOURCES
    QtAwesome.cpp
    QtAwesomeAnim.cpp
)

if(QTAWESOME_ENABLE_QML)
    find_package(Qt5 COMPONENTS Qml Quick REQUIRED)
    list(APPEND HEADERS faiconprovider.h)
    list(APPEND SOURCES faiconprovider.cpp)
endif()

qt5_add_resources(QRC QtAwesomeFree.qrc)

add_library(${SUBDIR_NAME}
STATIC
    ${HEADERS}
    ${SOURCES}
    ${QRC}
)

target_link_libraries(${SUBDIR_NAME} PUBLIC
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
)

if(QTAWESOME_ENABLE_QML)
    target_link_libraries(${SUBDIR_NAME} PUBLIC
        Qt5::Qml
        Qt5::Quick
    )
endif()
