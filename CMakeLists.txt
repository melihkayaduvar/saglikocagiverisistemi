cmake_minimum_required(VERSION 3.16)

project(saglikocagi LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core LinguistTools Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core LinguistTools Widgets)

set(TS_FILES saglikocagi_tr_TR.ts)

file(GLOB SINIFLAR_SRC "Veri/Siniflar/*.cpp" "Veri/Siniflar/*.h" "Veri/Araclar/*.h" "Veri/*.cpp" "Veri/*.h")

add_executable(saglikocagi
  main.cpp
  ${TS_FILES}
  ${SINIFLAR_SRC}
)
target_link_libraries(saglikocagi Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(saglikocagi Qt${QT_VERSION_MAJOR}::Widgets)

if(COMMAND qt_create_translation)
    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
else()
    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
endif()

include(GNUInstallDirs)
install(TARGETS saglikocagi
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
