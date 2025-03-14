# Tìm tất cả các file .cpp trong thư mục lib/
file(GLOB LIB_SOURCES "*.cpp")

# Tạo một thư viện chung từ tất cả các file .cpp
add_library(all_libs ${LIB_SOURCES})

# Xuất danh sách thư viện ra biến ALL_LIBRARIES để dùng trong CMakeLists.txt chính
set(ALL_LIBRARIES all_libs PARENT_SCOPE)
