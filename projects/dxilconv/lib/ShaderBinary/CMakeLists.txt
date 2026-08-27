# Build ShaderBinary.lib.

if(WIN32)
find_package(D3D12 REQUIRED)
endif()

add_dxilconv_project_library(ShaderBinary
  ShaderBinary.cpp
)

if(WIN32)
  target_include_directories(ShaderBinary PRIVATE ${D3D12_INCLUDE_DIRS})
else()
  target_include_directories(ShaderBinary PRIVATE ../../../../include/dxc/wsl)
endif()

target_include_directories(ShaderBinary
PUBLIC
  $<BUILD_INTERFACE:${DXILCONV_PROJECT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
)
