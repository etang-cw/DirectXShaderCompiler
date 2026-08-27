# Build dxilconv.dll

set(SHARED_LIBRARY TRUE)

add_dxilconv_project_library(dxilconv SHARED
  dxilconv.cpp
  dxilconv.def
)

target_link_libraries(dxilconv PRIVATE
  DxbcConverter
  LLVMBitWriter
  LLVMDXIL
  LLVMDxilContainer
  LLVMDxilRootSignature
  LLVMDxilValidation
  LLVMMSSupport
  LLVMScalarOpts
)

set_target_properties(dxilconv
  PROPERTIES
  OUTPUT_NAME "dxilconv"
)

if(WIN32)
add_dependencies(dxilconv DxcEtw)
endif()
