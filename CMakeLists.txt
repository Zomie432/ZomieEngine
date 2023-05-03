cmake_minimum_required(VERSION 3.24)
set(PROJECT_NAME ZomieEngine)
set(SOURCE_FILES_FOR_EXE
	Source/ZomieEngine.cpp
)
set(INCLUDE_FILES_FOR_EXE
	${CMAKE_SOURCE_DIR}/Source
)

# Add debugging option
option(USE_DEBUG "Enter debug mode" OFF)
if (USE_DEBUG)
  add_compile_definitions(_DEBUG)
endif()


if (WIN32)
	add_executable (${PROJECT_NAME} WIN32 ${SOURCE_FILES_FOR_EXE})
	include_directories(${PROJECT_SOURCE_CODE_DIR})

	set_property(TARGET ${PROJECT_NAME} PROPERTY
             MSVC_RUNTIME_LIBRARY "MultiThreadedDLL")

endif(WIN32)