# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\saglikocagi_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\saglikocagi_autogen.dir\\ParseCache.txt"
  "saglikocagi_autogen"
  )
endif()
