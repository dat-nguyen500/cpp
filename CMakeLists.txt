# Yêu cầu phiên bản CMake tối thiểu để đảm bảo tính tương thích
cmake_minimum_required(VERSION 3.10)

# Đặt tên dự án là "cpp"
project(cpp)

# Sử dụng tiêu chuẩn C++20
set(CMAKE_CXX_STANDARD 20)

# Chỉ định thư mục chứa các file header để trình biên dịch có thể tìm thấy
include_directories(include)

# Thêm thư mục "lib" vào build, nơi chứa các thư viện riêng của dự án
add_subdirectory(lib)

# Tạo file thực thi "cpp" từ mã nguồn chính (main.cpp)
add_executable(cpp src/main.cpp)

# Liên kết tất cả các thư viện đã được tự động tìm trong lib/
# ALL_LIBRARIES được thiết lập trong CMakeLists.txt của thư mục lib/
target_link_libraries(cpp PUBLIC ${ALL_LIBRARIES})

# Chỉ định thư mục "include/" chứa file header cho target "cpp"
# "PUBLIC" nghĩa là thư mục này có thể được dùng bởi các target khác nếu cần
target_include_directories(cpp PUBLIC include)
