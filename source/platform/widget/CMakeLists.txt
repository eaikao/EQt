project(widget)

FILE(GLOB_RECURSE HEAD
 *.h 
)

FILE(GLOB_RECURSE SOURCE 
    *.cpp
    *.ui
)
FILE(GLOB_RECURSE QRC
  *.qrc
)
FILE(GLOB_RECURSE RES
  *.*
)
source_group(widget FILES ${HEAD} ${SOURCE} ${QRC} ${RES}) 

add_library(${PROJECT_NAME} STATIC ${SOURCE_TREE} ${HEAD} ${SOURCE} ${QRC} ${RES})
set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME ${PROJECT_NAME})


#设置头文件搜索目录
include_directories(
	${CMAKE_SOURCE_DIR}/source/widget
)