// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from vla:srv/DebugSaveCameraImage.idl
// generated code does not contain a copyright notice

#include "vla/srv/detail/debug_save_camera_image__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__srv__DebugSaveCameraImage__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x60, 0x4b, 0x10, 0xef, 0x91, 0x27, 0x64, 0xe8,
      0x20, 0x59, 0x52, 0x70, 0x8f, 0x82, 0xee, 0x96,
      0x3f, 0x9d, 0xc5, 0x43, 0x6e, 0x88, 0x2c, 0xdb,
      0xe2, 0xb6, 0xc0, 0xa5, 0x78, 0x1e, 0xfc, 0xd4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__srv__DebugSaveCameraImage_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4d, 0x9e, 0xad, 0xba, 0xc0, 0x6d, 0x51, 0xab,
      0x2a, 0xd4, 0x26, 0x3d, 0x2f, 0x43, 0xc1, 0x8a,
      0x78, 0xde, 0xaa, 0xf1, 0xe2, 0x56, 0x4e, 0x0a,
      0xda, 0xf7, 0xc0, 0x5a, 0xda, 0xff, 0xd3, 0x2a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__srv__DebugSaveCameraImage_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0c, 0x37, 0x16, 0x01, 0x0b, 0x1c, 0xeb, 0x7c,
      0x71, 0xf5, 0x4d, 0x60, 0x48, 0x70, 0xa4, 0xf7,
      0xfa, 0xfc, 0x3b, 0x8c, 0xdb, 0xe5, 0x01, 0xb9,
      0x2a, 0x74, 0xe4, 0x4a, 0x77, 0xa1, 0x87, 0x1c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__srv__DebugSaveCameraImage_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfe, 0xba, 0x2f, 0xf5, 0x6e, 0xf0, 0xc8, 0x00,
      0x30, 0xae, 0xd3, 0x60, 0xac, 0x66, 0xd6, 0x3d,
      0x4f, 0x8b, 0xd5, 0x9c, 0x8e, 0x57, 0x28, 0x24,
      0x08, 0xae, 0xf5, 0xf8, 0xb0, 0x65, 0x94, 0xd0,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char vla__srv__DebugSaveCameraImage__TYPE_NAME[] = "vla/srv/DebugSaveCameraImage";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char vla__srv__DebugSaveCameraImage_Event__TYPE_NAME[] = "vla/srv/DebugSaveCameraImage_Event";
static char vla__srv__DebugSaveCameraImage_Request__TYPE_NAME[] = "vla/srv/DebugSaveCameraImage_Request";
static char vla__srv__DebugSaveCameraImage_Response__TYPE_NAME[] = "vla/srv/DebugSaveCameraImage_Response";

// Define type names, field names, and default values
static char vla__srv__DebugSaveCameraImage__FIELD_NAME__request_message[] = "request_message";
static char vla__srv__DebugSaveCameraImage__FIELD_NAME__response_message[] = "response_message";
static char vla__srv__DebugSaveCameraImage__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field vla__srv__DebugSaveCameraImage__FIELDS[] = {
  {
    {vla__srv__DebugSaveCameraImage__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {vla__srv__DebugSaveCameraImage_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {vla__srv__DebugSaveCameraImage__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {vla__srv__DebugSaveCameraImage_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {vla__srv__DebugSaveCameraImage__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {vla__srv__DebugSaveCameraImage_Event__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription vla__srv__DebugSaveCameraImage__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {vla__srv__DebugSaveCameraImage_Event__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {vla__srv__DebugSaveCameraImage_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {vla__srv__DebugSaveCameraImage_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
vla__srv__DebugSaveCameraImage__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vla__srv__DebugSaveCameraImage__TYPE_NAME, 28, 28},
      {vla__srv__DebugSaveCameraImage__FIELDS, 3, 3},
    },
    {vla__srv__DebugSaveCameraImage__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = vla__srv__DebugSaveCameraImage_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = vla__srv__DebugSaveCameraImage_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = vla__srv__DebugSaveCameraImage_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char vla__srv__DebugSaveCameraImage_Request__FIELD_NAME__req_id[] = "req_id";
static char vla__srv__DebugSaveCameraImage_Request__FIELD_NAME__head_image_file[] = "head_image_file";
static char vla__srv__DebugSaveCameraImage_Request__FIELD_NAME__left_wrist_image_file[] = "left_wrist_image_file";
static char vla__srv__DebugSaveCameraImage_Request__FIELD_NAME__right_wrist_image_file[] = "right_wrist_image_file";

static rosidl_runtime_c__type_description__Field vla__srv__DebugSaveCameraImage_Request__FIELDS[] = {
  {
    {vla__srv__DebugSaveCameraImage_Request__FIELD_NAME__req_id, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {vla__srv__DebugSaveCameraImage_Request__FIELD_NAME__head_image_file, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {vla__srv__DebugSaveCameraImage_Request__FIELD_NAME__left_wrist_image_file, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {vla__srv__DebugSaveCameraImage_Request__FIELD_NAME__right_wrist_image_file, 22, 22},
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
vla__srv__DebugSaveCameraImage_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vla__srv__DebugSaveCameraImage_Request__TYPE_NAME, 36, 36},
      {vla__srv__DebugSaveCameraImage_Request__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char vla__srv__DebugSaveCameraImage_Response__FIELD_NAME__result_code[] = "result_code";
static char vla__srv__DebugSaveCameraImage_Response__FIELD_NAME__result_msg[] = "result_msg";

static rosidl_runtime_c__type_description__Field vla__srv__DebugSaveCameraImage_Response__FIELDS[] = {
  {
    {vla__srv__DebugSaveCameraImage_Response__FIELD_NAME__result_code, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {vla__srv__DebugSaveCameraImage_Response__FIELD_NAME__result_msg, 10, 10},
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
vla__srv__DebugSaveCameraImage_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vla__srv__DebugSaveCameraImage_Response__TYPE_NAME, 37, 37},
      {vla__srv__DebugSaveCameraImage_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char vla__srv__DebugSaveCameraImage_Event__FIELD_NAME__info[] = "info";
static char vla__srv__DebugSaveCameraImage_Event__FIELD_NAME__request[] = "request";
static char vla__srv__DebugSaveCameraImage_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field vla__srv__DebugSaveCameraImage_Event__FIELDS[] = {
  {
    {vla__srv__DebugSaveCameraImage_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {vla__srv__DebugSaveCameraImage_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {vla__srv__DebugSaveCameraImage_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {vla__srv__DebugSaveCameraImage_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {vla__srv__DebugSaveCameraImage_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription vla__srv__DebugSaveCameraImage_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {vla__srv__DebugSaveCameraImage_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {vla__srv__DebugSaveCameraImage_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
vla__srv__DebugSaveCameraImage_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vla__srv__DebugSaveCameraImage_Event__TYPE_NAME, 34, 34},
      {vla__srv__DebugSaveCameraImage_Event__FIELDS, 3, 3},
    },
    {vla__srv__DebugSaveCameraImage_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = vla__srv__DebugSaveCameraImage_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = vla__srv__DebugSaveCameraImage_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe8\\xaf\\xb7\\xe6\\xb1\\x82\n"
  "int32 req_id\n"
  "string head_image_file          # \\xe7\\x9b\\xb8\\xe6\\x9c\\xba\\xe7\\x85\\xa7\\xe7\\x89\\x87\\xe4\\xbf\\x9d\\xe5\\xad\\x98\\xe6\\x96\\x87\\xe4\\xbb\\xb6\\xe5\\x90\\x8d\n"
  "string left_wrist_image_file    # \\xe7\\x9b\\xb8\\xe6\\x9c\\xba\\xe7\\x85\\xa7\\xe7\\x89\\x87\\xe4\\xbf\\x9d\\xe5\\xad\\x98\\xe6\\x96\\x87\\xe4\\xbb\\xb6\\xe5\\x90\\x8d\n"
  "string right_wrist_image_file   # \\xe7\\x9b\\xb8\\xe6\\x9c\\xba\\xe7\\x85\\xa7\\xe7\\x89\\x87\\xe4\\xbf\\x9d\\xe5\\xad\\x98\\xe6\\x96\\x87\\xe4\\xbb\\xb6\\xe5\\x90\\x8d\n"
  "---\n"
  "# \\xe5\\x93\\x8d\\xe5\\xba\\x94\n"
  "int32 result_code       # 0\\xe4\\xb8\\xba\\xe6\\x88\\x90\\xe5\\x8a\\x9f\\xef\\xbc\\x8c\\xe5\\x85\\xb6\\xe5\\xae\\x83\\xe4\\xb8\\xba\\xe9\\x94\\x99\\xe8\\xaf\\xaf\\xe7\\xa0\\x81\n"
  "string result_msg       # \\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\\xe5\\x8e\\x9f\\xe5\\x9b\\xa0";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
vla__srv__DebugSaveCameraImage__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vla__srv__DebugSaveCameraImage__TYPE_NAME, 28, 28},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 228, 228},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
vla__srv__DebugSaveCameraImage_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vla__srv__DebugSaveCameraImage_Request__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
vla__srv__DebugSaveCameraImage_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vla__srv__DebugSaveCameraImage_Response__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
vla__srv__DebugSaveCameraImage_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vla__srv__DebugSaveCameraImage_Event__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__srv__DebugSaveCameraImage__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vla__srv__DebugSaveCameraImage__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *vla__srv__DebugSaveCameraImage_Event__get_individual_type_description_source(NULL);
    sources[4] = *vla__srv__DebugSaveCameraImage_Request__get_individual_type_description_source(NULL);
    sources[5] = *vla__srv__DebugSaveCameraImage_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__srv__DebugSaveCameraImage_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vla__srv__DebugSaveCameraImage_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__srv__DebugSaveCameraImage_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vla__srv__DebugSaveCameraImage_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__srv__DebugSaveCameraImage_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vla__srv__DebugSaveCameraImage_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *vla__srv__DebugSaveCameraImage_Request__get_individual_type_description_source(NULL);
    sources[4] = *vla__srv__DebugSaveCameraImage_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
