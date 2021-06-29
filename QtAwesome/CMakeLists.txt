
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
