find_package(ROOT)


include_directories(
  "${ROOT_INCLUDE_DIRS}"
  "../include"
  "../rqlib"
  )

file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/core/*.cxx")

#Generate the static library from the sources
SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${ROOT_CXX_FLAGS}")
add_library(LIVLZ STATIC ${SOURCES})
