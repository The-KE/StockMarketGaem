cmake_minimum_required(VERSION 3.13)

# Declare project containing a single eponymous executable
project(StockRise LANGUAGES C)
add_executable(${PROJECT_NAME} src/main.c)

target_link_libraries(${PROJECT_NAME}
    ctru
    citro2d
    citro3d
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
