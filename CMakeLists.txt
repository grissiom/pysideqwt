project(qwtbinding)

cmake_minimum_required(VERSION 2.6)

find_package(PythonLibs REQUIRED)
find_package(Shiboken REQUIRED)
find_package(PySide REQUIRED)
find_package(Qt4 4.6.2 REQUIRED)

set(LIBQWT_DIR ${CMAKE_SOURCE_DIR}/../qwt-5.2)

find_program(GENERATOR generatorrunner REQUIRED)
if (NOT GENERATOR)
    message(FATAL_ERROR "You need to specify GENERATOR variable (-DGENERATOR=value)")
endif()

if(CMAKE_HOST_UNIX)
    option(ENABLE_GCC_OPTIMIZATION "Enable specific GCC flags to optimization library size and performance. Only available on Release Mode" 0)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fvisibility=hidden -Wno-strict-aliasing")
    set(CMAKE_CXX_FLAGS_DEBUG "-g")
    if(ENABLE_GCC_OPTIMIZATION)
        set(CMAKE_BUILD_TYPE Release)
        set(CMAKE_CXX_FLAGS_RELEASE "-DNDEBUG -Os -Wl,-O1")
        if(NOT CMAKE_HOST_APPLE)
            set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wl,--hash-style=gnu")
        endif()
    endif()

    if(CMAKE_HOST_APPLE)
        if (NOT QT_INCLUDE_DIR)
            set(QT_INCLUDE_DIR "/Library/Frameworks")
         endif()
    endif()
endif()

include(${QT_USE_FILE})

enable_testing()

add_subdirectory(qwt)
add_subdirectory(tests)
