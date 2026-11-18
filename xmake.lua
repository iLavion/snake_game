---@diagnostic disable: undefined-global

add_rules("mode.debug", "mode.release")

set_languages("c23")
set_warnings("all", "error")

target("snake_game")
set_kind("binary")
add_files("src/*.c")
