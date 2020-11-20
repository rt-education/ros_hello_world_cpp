cmake_minimum_required(VERSION 2.8.3)
project(hello_world_cpp)

# Finding the required packages
find_package(catkin REQUIRED COMPONENTS
	roscpp
	std_msgs
)

# Configuring the destination of the header file
include_directories(include ${catkin_INCLUDE_DIRS})

# Declaring the catkin package
catkin_package(
	CATKIN_DEPENDS roscpp std_msgs
)

# Convenient functions for build configuration
function(custom_executable target)
	add_executable(${target} src/${target}.cpp)
	target_link_libraries(${target} ${catkin_LIBRARIES})
	install(TARGETS ${target}
		RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})
endfunction()

# Build configuration of the talker node
custom_executable(talker)

# Build configuration of the listener node
custom_executable(listener)
