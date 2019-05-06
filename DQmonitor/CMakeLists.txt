find_package(ROOT)
find_library(ROOT_TREEPLAYER_LIBRARY TreePlayer HINTS ${ROOT_LIBRARY_DIR} REQUIRED)
find_library(ROOT_TXMLENGINE_LIBRARY XMLIO HINTS ${ROOT_LIBRARY_DIR} REQUIRED)

set (subproject_name DQmonitor)                                        # change the subproject name 

set (Absolute_Path ${PROJECT_SOURCE_DIR}/${subproject_name}/)                    
 
# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/${subproject_name}/include/AbsPath.h.in"
  "${PROJECT_SOURCE_DIR}/${subproject_name}/include/AbsPath.h"
  )


include_directories(
  "${ROOT_INCLUDE_DIRS}"
  "${PROJECT_SOURCE_DIR}/${subproject_name}/include"
  "../include"
  "../rqlib"
  )

SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${ROOT_CXX_FLAGS}")

file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/${subproject_name}/src/*.cxx")

# Pay attention to the main program name
add_executable(${subproject_name} ${subproject_name}Main.cxx ${SOURCES})

set ( PROJECT_LINK_LIBS ${PROJECT_BINARY_DIR}/core/libLIVLZ.a )

SET(RQ_LIBRARY    "${PROJECT_SOURCE_DIR}/rqlib/rqlib.so")

SET(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${RQ_LIBRARY}")

target_link_libraries(${subproject_name} ${PROJECT_LINK_LIBS} ${ROOT_LIBRARIES} ${ROOT_TREEPLAYER_LIBRARY} ${ROOT_TXMLENGINE_LIBRARY} )

install(TARGETS ${subproject_name} DESTINATION ${PROJECT_SOURCE_DIR}/bin)
