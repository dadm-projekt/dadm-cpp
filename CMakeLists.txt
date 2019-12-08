cmake_minimum_required(VERSION 3.0)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

project(dadm-cpp)

add_executable(
	dadm
	_src/main.cpp
	_src/_main.cpp
	_src/model.cpp
	_src/Source2.cpp
	_src/view/window.cpp
	_src/helpers/add.cpp
	src/ECGAnalyzer/main.cpp
	src/ECGAnalyzer/datafile.cpp
	src/ECGAnalyzer/dataloader.cpp
	src/ECGAnalyzer/ecganalyzercontroller.cpp
	src/ECGAnalyzer/mainwindow.cpp
	src/ECGAnalyzer/module.cpp
	src/ECGAnalyzer/modulebaseline.cpp
	src/ECGAnalyzer/viewmodule.cpp
	src/ECGAnalyzer/viewmodulebaseline.cpp
)
