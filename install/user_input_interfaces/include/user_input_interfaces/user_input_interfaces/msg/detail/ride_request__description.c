// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from user_input_interfaces:msg/RideRequest.idl
// generated code does not contain a copyright notice

#include "user_input_interfaces/msg/detail/ride_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_user_input_interfaces
const rosidl_type_hash_t *
user_input_interfaces__msg__RideRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x44, 0x4b, 0x9d, 0xa2, 0x18, 0x00, 0x1d, 0x69,
      0x07, 0x67, 0xae, 0x66, 0x00, 0xe1, 0x1f, 0x20,
      0x31, 0x38, 0x61, 0x20, 0x6b, 0xb6, 0x1d, 0x7c,
      0x46, 0x10, 0xee, 0xfa, 0x57, 0x16, 0x75, 0xbf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char user_input_interfaces__msg__RideRequest__TYPE_NAME[] = "user_input_interfaces/msg/RideRequest";

// Define type names, field names, and default values
static char user_input_interfaces__msg__RideRequest__FIELD_NAME__first_name[] = "first_name";
static char user_input_interfaces__msg__RideRequest__FIELD_NAME__last_name[] = "last_name";
static char user_input_interfaces__msg__RideRequest__FIELD_NAME__pickup_location[] = "pickup_location";
static char user_input_interfaces__msg__RideRequest__FIELD_NAME__dropoff_location[] = "dropoff_location";

static rosidl_runtime_c__type_description__Field user_input_interfaces__msg__RideRequest__FIELDS[] = {
  {
    {user_input_interfaces__msg__RideRequest__FIELD_NAME__first_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {user_input_interfaces__msg__RideRequest__FIELD_NAME__last_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {user_input_interfaces__msg__RideRequest__FIELD_NAME__pickup_location, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {user_input_interfaces__msg__RideRequest__FIELD_NAME__dropoff_location, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
user_input_interfaces__msg__RideRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {user_input_interfaces__msg__RideRequest__TYPE_NAME, 37, 37},
      {user_input_interfaces__msg__RideRequest__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string first_name\n"
  "string last_name\n"
  "string pickup_location\n"
  "string dropoff_location";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
user_input_interfaces__msg__RideRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {user_input_interfaces__msg__RideRequest__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 82, 82},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
user_input_interfaces__msg__RideRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *user_input_interfaces__msg__RideRequest__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
