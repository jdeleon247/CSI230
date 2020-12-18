cmake_minimum_required (VERSION 3.6)
project(DiscordBot)

add_executable(DiscordBot src/discordbot_driver/discordbot_driver.cpp)
add_subdirectory(include/sleepy-discord)
target_link_libraries(DiscordBot sleepy-discord)