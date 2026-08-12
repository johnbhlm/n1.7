// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from vla:srv/GetHandState.idl
// generated code does not contain a copyright notice

#include "vla/srv/detail/get_hand_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__srv__GetHandState__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2c, 0x1c, 0x42, 0x8c, 0xdd, 0xf3, 0x03, 0x85,
      0x0f, 0x58, 0xd2, 0xd1, 0x21, 0xa7, 0x89, 0xca,
      0x61, 0xb1, 0x64, 0x07, 0x78, 0x60, 0xfd, 0x03,
      0x76, 0x18, 0x64, 0x97, 0x00, 0xfd, 0xc2, 0x30,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__srv__GetHandState_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x02, 0x2f, 0xbd, 0x16, 0x81, 0x0a, 0xdd, 0x4c,
      0x94, 0x97, 0x72, 0x06, 0x19, 0x7d, 0x66, 0x76,
      0xc9, 0x3c, 0xae, 0x27, 0xe4, 0x96, 0x1c, 0x69,
      0x0f, 0xdc, 0x04, 0x25, 0x0a, 0x6b, 0xba, 0x06,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__srv__GetHandState_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x99, 0xc3, 0xd3, 0xd0, 0x32, 0xfb, 0x3d, 0xa4,
      0x8d, 0xc9, 0xb8, 0xe7, 0x72, 0x73, 0x14, 0x61,
      0xf9, 0x18, 0xa6, 0xde, 0xd9, 0x0e, 0xee, 0x77,
      0x88, 0xa6, 0xa3, 0x19, 0x98, 0x53, 0xee, 0xc7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__srv__GetHandState_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x28, 0x60, 0x73, 0x33, 0x49, 0x3d, 0xa8, 0x2a,
      0x94, 0x02, 0x92, 0x7d, 0x06, 0x49, 0x08, 0x89,
      0xaf, 0xcd, 0x25, 0x1d, 0x3c, 0x43, 0x63, 0x88,
      0xe3, 0xfa, 0x7a, 0x1c, 0x9c, 0x23, 0xcb, 0xea,
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

static char vla__srv__GetHandState__TYPE_NAME[] = "vla/srv/GetHandState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char vla__srv__GetHandState_Event__TYPE_NAME[] = "vla/srv/GetHandState_Event";
static char vla__srv__GetHandState_Request__TYPE_NAME[] = "vla/srv/GetHandState_Request";
static char vla__srv__GetHandState_Response__TYPE_NAME[] = "vla/srv/GetHandState_Response";

// Define type names, field names, and default values
static char vla__srv__GetHandState__FIELD_NAME__request_message[] = "request_message";
static char vla__srv__GetHandState__FIELD_NAME__response_message[] = "response_message";
static char vla__srv__GetHandState__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field vla__srv__GetHandState__FIELDS[] = {
  {
    {vla__srv__GetHandState__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {vla__srv__GetHandState_Request__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {vla__srv__GetHandState__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {vla__srv__GetHandState_Response__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
  {
    {vla__srv__GetHandState__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {vla__srv__GetHandState_Event__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription vla__srv__GetHandState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {vla__srv__GetHandState_Event__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
  {
    {vla__srv__GetHandState_Request__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {vla__srv__GetHandState_Response__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
vla__srv__GetHandState__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vla__srv__GetHandState__TYPE_NAME, 20, 20},
      {vla__srv__GetHandState__FIELDS, 3, 3},
    },
    {vla__srv__GetHandState__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = vla__srv__GetHandState_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = vla__srv__GetHandState_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = vla__srv__GetHandState_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char vla__srv__GetHandState_Request__FIELD_NAME__req_id[] = "req_id";

static rosidl_runtime_c__type_description__Field vla__srv__GetHandState_Request__FIELDS[] = {
  {
    {vla__srv__GetHandState_Request__FIELD_NAME__req_id, 6, 6},
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
vla__srv__GetHandState_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vla__srv__GetHandState_Request__TYPE_NAME, 28, 28},
      {vla__srv__GetHandState_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char vla__srv__GetHandState_Response__FIELD_NAME__result_code[] = "result_code";
static char vla__srv__GetHandState_Response__FIELD_NAME__result_msg[] = "result_msg";
static char vla__srv__GetHandState_Response__FIELD_NAME__left_state[] = "left_state";
static char vla__srv__GetHandState_Response__FIELD_NAME__right_state[] = "right_state";
static char vla__srv__GetHandState_Response__FIELD_NAME__left_item[] = "left_item";
static char vla__srv__GetHandState_Response__FIELD_NAME__right_item[] = "right_item";

static rosidl_runtime_c__type_description__Field vla__srv__GetHandState_Response__FIELDS[] = {
  {
    {vla__srv__GetHandState_Response__FIELD_NAME__result_code, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {vla__srv__GetHandState_Response__FIELD_NAME__result_msg, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {vla__srv__GetHandState_Response__FIELD_NAME__left_state, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {vla__srv__GetHandState_Response__FIELD_NAME__right_state, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {vla__srv__GetHandState_Response__FIELD_NAME__left_item, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {vla__srv__GetHandState_Response__FIELD_NAME__right_item, 10, 10},
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
vla__srv__GetHandState_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vla__srv__GetHandState_Response__TYPE_NAME, 29, 29},
      {vla__srv__GetHandState_Response__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char vla__srv__GetHandState_Event__FIELD_NAME__info[] = "info";
static char vla__srv__GetHandState_Event__FIELD_NAME__request[] = "request";
static char vla__srv__GetHandState_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field vla__srv__GetHandState_Event__FIELDS[] = {
  {
    {vla__srv__GetHandState_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {vla__srv__GetHandState_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {vla__srv__GetHandState_Request__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
  {
    {vla__srv__GetHandState_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {vla__srv__GetHandState_Response__TYPE_NAME, 29, 29},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription vla__srv__GetHandState_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {vla__srv__GetHandState_Request__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {vla__srv__GetHandState_Response__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
vla__srv__GetHandState_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {vla__srv__GetHandState_Event__TYPE_NAME, 26, 26},
      {vla__srv__GetHandState_Event__FIELDS, 3, 3},
    },
    {vla__srv__GetHandState_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = vla__srv__GetHandState_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = vla__srv__GetHandState_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# \\xe8\\xaf\\xb7\\xe6\\xb1\\x82\n"
  "string req_id\n"
  "---\n"
  "# \\xe5\\x93\\x8d\\xe5\\xba\\x94\n"
  "int32 result_code       # 0\\xe4\\xb8\\xba\\xe6\\x88\\x90\\xe5\\x8a\\x9f\\xef\\xbc\\x8c\\xe5\\x85\\xb6\\xe5\\xae\\x83\\xe4\\xb8\\xba\\xe9\\x94\\x99\\xe8\\xaf\\xaf\\xe7\\xa0\\x81\n"
  "string result_msg       # \\xe5\\xa4\\xb1\\xe8\\xb4\\xa5\\xe5\\x8e\\x9f\\xe5\\x9b\\xa0\n"
  "uint8 left_state        # \\xe5\\xb7\\xa6\\xe6\\x89\\x8b\\xe7\\x8a\\xb6\\xe6\\x80\\x81\n"
  "uint8 right_state       # \\xe5\\x8f\\xb3\\xe6\\x89\\x8b\\xe7\\x8a\\xb6\\xe6\\x80\\x81\n"
  "string left_item        # \\xe5\\xb7\\xa6\\xe6\\x89\\x8b\\xe7\\x89\\xa9\\xe5\\x93\\x81\n"
  "string right_item       # \\xe5\\x8f\\xb3\\xe6\\x89\\x8b\\xe7\\x89\\xa9\\xe5\\x93\\x81\n"
  "";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
vla__srv__GetHandState__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vla__srv__GetHandState__TYPE_NAME, 20, 20},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 222, 222},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
vla__srv__GetHandState_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vla__srv__GetHandState_Request__TYPE_NAME, 28, 28},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
vla__srv__GetHandState_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vla__srv__GetHandState_Response__TYPE_NAME, 29, 29},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
vla__srv__GetHandState_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {vla__srv__GetHandState_Event__TYPE_NAME, 26, 26},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__srv__GetHandState__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vla__srv__GetHandState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *vla__srv__GetHandState_Event__get_individual_type_description_source(NULL);
    sources[4] = *vla__srv__GetHandState_Request__get_individual_type_description_source(NULL);
    sources[5] = *vla__srv__GetHandState_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__srv__GetHandState_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vla__srv__GetHandState_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__srv__GetHandState_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vla__srv__GetHandState_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__srv__GetHandState_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *vla__srv__GetHandState_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *vla__srv__GetHandState_Request__get_individual_type_description_source(NULL);
    sources[4] = *vla__srv__GetHandState_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
