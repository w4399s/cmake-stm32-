cmake_minimum_required(VERSION 3.22)

#
# This file is generated only once,
# and is not re-generated if converter is called multiple times.
#
# User is free to modify the file as much as necessary
#

# Setup compiler settings
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)


# Define the build type
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Debug")
endif()

# Set the project name
set(CMAKE_PROJECT_NAME R1-shooter)

# Include toolchain file
include("cmake/gcc-arm-none-eabi.cmake")

# Enable compile command to ease indexing with e.g. clangd
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

# Core project settings
project(${CMAKE_PROJECT_NAME})
message("Build type: " ${CMAKE_BUILD_TYPE})

# Enable CMake support for ASM and C languages
enable_language(C ASM)

# Core project settings
project(${CMAKE_PROJECT_NAME})
message("Build type: " ${CMAKE_BUILD_TYPE})

# Create an executable object type
add_executable(${CMAKE_PROJECT_NAME})

# Add STM32CubeMX generated sources
add_subdirectory(cmake/stm32cubemx)

# set(USER_NAME "user")
# set(USER_DIR "User")
file(GLOB_RECURSE srcs_user CONFIGURE_DEPENDS User/*.c* User/*.h*)

# add_library(${USER_NAME} OBJECT ${srcs_user})

# target_compile_options(${USER_NAME} PRIVATE "-O0")
# target_compile_options(${USER_NAME} PRIVATE
#     "-fno-common"  # 禁止共享变量合并
#     "-Wl,--whole-archive"  # 强制链接整个静态库
#     "-Wl,-Bsymbolic"  # 链接时首先查找本地符号
# )
# target_include_directories(${USER_NAME} PUBLIC User/algorithm User/bsp User/device User/module User/task)
# target_link_libraries(${USER_NAME} PUBLIC stm32cubemx)

# Link directories setup
target_link_directories(${CMAKE_PROJECT_NAME} PRIVATE
    # Add user defined library search paths
)

# Add sources to executable
target_sources(${CMAKE_PROJECT_NAME} PRIVATE
    # Add user sources here
    ${srcs_user}
)

# Add include paths
target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE
    # Add user defined include paths
    User
)

# Add project symbols (macros)
target_compile_definitions(${CMAKE_PROJECT_NAME} PRIVATE
    # Add user defined symbols
    YS_DEFINE="task/TopDefine.h"
    TOP_USER_CFG="task/UserCfg.h"
)

# Add linked libraries
target_link_libraries(${CMAKE_PROJECT_NAME}
    stm32cubemx

    # Add user defined libraries
    # ${USER_NAME}
)
