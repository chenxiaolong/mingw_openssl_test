cmake_minimum_required(VERSION 3.6)

project(test C)

find_package(OpenSSL REQUIRED)

add_executable(main main.c)

target_include_directories(main PRIVATE ${OPENSSL_INCLUDE_DIR})

target_link_libraries(main PRIVATE ${OPENSSL_CRYPTO_LIBRARY})
