cmake_minimum_required(VERSION 3.5.1)

project("EQt")
message(STATUS "${CMAKE_CURRENT_SOURCE_DIR}")

#设置对c++11的支持
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


# 设置第三方头文件
set(include_third ${CMAKE_CURRENT_SOURCE_DIR}/source/thirdlibs/include/)
include_directories(SYSTEM ${include_third})

# 设置第三方库路径
set(lib_boost 	${CMAKE_CURRENT_SOURCE_DIR}/source/thirdlibs/libs/widows/boost)
set(lib_opencv 	${CMAKE_CURRENT_SOURCE_DIR}/source/thirdlibs/libs/widows/opencv)
set(lib_tbb 	${CMAKE_CURRENT_SOURCE_DIR}/source/thirdlibs/libs/widows/tbb)
link_directories(${lib_boost} ${lib_opencv} ${lib_tbb})


# 配置Qt
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# 打开全局moc，目标关联的.h,.cpp
set(CMAKE_AUTOMOC ON)
# 打开全局uic，目标关联的.ui
set(CMAKE_AUTOUIC ON)
# 打开全局rcc，用于编译资源文件
set(CMAKE_AUTORCC ON)
# 查找Qt库文件
find_package( Qt5 REQUIRED 
    COMPONENTS Widgets Core Gui Qml 
)
include_directories(
    ${Qt5Widgets_INCLUDE_DIRS}
	${CMAKE_CURRENT_BINARY_DIR}
	${QT_USE_FILE}
    Qt5::Qml
)
add_definitions(${QT_DEFINITIONS})


add_subdirectory("source")