#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "user_input_interfaces::user_input_interfaces__rosidl_typesupport_fastrtps_c" for configuration ""
set_property(TARGET user_input_interfaces::user_input_interfaces__rosidl_typesupport_fastrtps_c APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(user_input_interfaces::user_input_interfaces__rosidl_typesupport_fastrtps_c PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libuser_input_interfaces__rosidl_typesupport_fastrtps_c.so"
  IMPORTED_SONAME_NOCONFIG "libuser_input_interfaces__rosidl_typesupport_fastrtps_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS user_input_interfaces::user_input_interfaces__rosidl_typesupport_fastrtps_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_user_input_interfaces::user_input_interfaces__rosidl_typesupport_fastrtps_c "${_IMPORT_PREFIX}/lib/libuser_input_interfaces__rosidl_typesupport_fastrtps_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)