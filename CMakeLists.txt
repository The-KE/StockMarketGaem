cmake_minimum_required(VERSION 3.13)

# Declare project containing a single eponymous executable
project(StockRise LANGUAGES C)
add_executable(${PROJECT_NAME} src/main.c)

add_library(gamestate src/gstate.h)
set_target_properties(gamestate PROPERTIES LINKER_LANGUAGE C)

target_link_libraries(${PROJECT_NAME}
    ctru
    citro2d
    citro3d
    gamestate
)
ctr_generate_smdh(${PROJECT_NAME}.smdh
  NAME        "Stock Rise!"
  
  # Other options available:
  DESCRIPTION "Businesses and investment galore! bro i feel so cringe writing that desc snd title dudr i give up atp"
  AUTHOR      "UnknownKE123"
  ROMFS       "romfs"
)
ctr_create_3dsx(${PROJECT_NAME}
  SMDH  ${PROJECT_NAME}.smdh
)
