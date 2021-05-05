aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} CommonSrc)
message(${CommonSrc})
add_library(common ${CommonSrc})