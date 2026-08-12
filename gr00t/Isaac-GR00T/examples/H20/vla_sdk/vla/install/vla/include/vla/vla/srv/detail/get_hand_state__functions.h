// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from vla:srv/GetHandState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vla/srv/get_hand_state.h"


#ifndef VLA__SRV__DETAIL__GET_HAND_STATE__FUNCTIONS_H_
#define VLA__SRV__DETAIL__GET_HAND_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "vla/msg/rosidl_generator_c__visibility_control.h"

#include "vla/srv/detail/get_hand_state__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__srv__GetHandState__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeDescription *
vla__srv__GetHandState__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource *
vla__srv__GetHandState__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__srv__GetHandState__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/GetHandState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vla__srv__GetHandState_Request
 * )) before or use
 * vla__srv__GetHandState_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__srv__GetHandState_Request__init(vla__srv__GetHandState_Request * msg);

/// Finalize srv/GetHandState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__srv__GetHandState_Request__fini(vla__srv__GetHandState_Request * msg);

/// Create srv/GetHandState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vla__srv__GetHandState_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__srv__GetHandState_Request *
vla__srv__GetHandState_Request__create(void);

/// Destroy srv/GetHandState message.
/**
 * It calls
 * vla__srv__GetHandState_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__srv__GetHandState_Request__destroy(vla__srv__GetHandState_Request * msg);

/// Check for srv/GetHandState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__srv__GetHandState_Request__are_equal(const vla__srv__GetHandState_Request * lhs, const vla__srv__GetHandState_Request * rhs);

/// Copy a srv/GetHandState message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__srv__GetHandState_Request__copy(
  const vla__srv__GetHandState_Request * input,
  vla__srv__GetHandState_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__srv__GetHandState_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeDescription *
vla__srv__GetHandState_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource *
vla__srv__GetHandState_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__srv__GetHandState_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GetHandState messages.
/**
 * It allocates the memory for the number of elements and calls
 * vla__srv__GetHandState_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__srv__GetHandState_Request__Sequence__init(vla__srv__GetHandState_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetHandState messages.
/**
 * It calls
 * vla__srv__GetHandState_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__srv__GetHandState_Request__Sequence__fini(vla__srv__GetHandState_Request__Sequence * array);

/// Create array of srv/GetHandState messages.
/**
 * It allocates the memory for the array and calls
 * vla__srv__GetHandState_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__srv__GetHandState_Request__Sequence *
vla__srv__GetHandState_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetHandState messages.
/**
 * It calls
 * vla__srv__GetHandState_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__srv__GetHandState_Request__Sequence__destroy(vla__srv__GetHandState_Request__Sequence * array);

/// Check for srv/GetHandState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__srv__GetHandState_Request__Sequence__are_equal(const vla__srv__GetHandState_Request__Sequence * lhs, const vla__srv__GetHandState_Request__Sequence * rhs);

/// Copy an array of srv/GetHandState messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__srv__GetHandState_Request__Sequence__copy(
  const vla__srv__GetHandState_Request__Sequence * input,
  vla__srv__GetHandState_Request__Sequence * output);

/// Initialize srv/GetHandState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vla__srv__GetHandState_Response
 * )) before or use
 * vla__srv__GetHandState_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__srv__GetHandState_Response__init(vla__srv__GetHandState_Response * msg);

/// Finalize srv/GetHandState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__srv__GetHandState_Response__fini(vla__srv__GetHandState_Response * msg);

/// Create srv/GetHandState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vla__srv__GetHandState_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__srv__GetHandState_Response *
vla__srv__GetHandState_Response__create(void);

/// Destroy srv/GetHandState message.
/**
 * It calls
 * vla__srv__GetHandState_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__srv__GetHandState_Response__destroy(vla__srv__GetHandState_Response * msg);

/// Check for srv/GetHandState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__srv__GetHandState_Response__are_equal(const vla__srv__GetHandState_Response * lhs, const vla__srv__GetHandState_Response * rhs);

/// Copy a srv/GetHandState message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__srv__GetHandState_Response__copy(
  const vla__srv__GetHandState_Response * input,
  vla__srv__GetHandState_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__srv__GetHandState_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeDescription *
vla__srv__GetHandState_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource *
vla__srv__GetHandState_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__srv__GetHandState_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GetHandState messages.
/**
 * It allocates the memory for the number of elements and calls
 * vla__srv__GetHandState_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__srv__GetHandState_Response__Sequence__init(vla__srv__GetHandState_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetHandState messages.
/**
 * It calls
 * vla__srv__GetHandState_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__srv__GetHandState_Response__Sequence__fini(vla__srv__GetHandState_Response__Sequence * array);

/// Create array of srv/GetHandState messages.
/**
 * It allocates the memory for the array and calls
 * vla__srv__GetHandState_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__srv__GetHandState_Response__Sequence *
vla__srv__GetHandState_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetHandState messages.
/**
 * It calls
 * vla__srv__GetHandState_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__srv__GetHandState_Response__Sequence__destroy(vla__srv__GetHandState_Response__Sequence * array);

/// Check for srv/GetHandState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__srv__GetHandState_Response__Sequence__are_equal(const vla__srv__GetHandState_Response__Sequence * lhs, const vla__srv__GetHandState_Response__Sequence * rhs);

/// Copy an array of srv/GetHandState messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__srv__GetHandState_Response__Sequence__copy(
  const vla__srv__GetHandState_Response__Sequence * input,
  vla__srv__GetHandState_Response__Sequence * output);

/// Initialize srv/GetHandState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vla__srv__GetHandState_Event
 * )) before or use
 * vla__srv__GetHandState_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__srv__GetHandState_Event__init(vla__srv__GetHandState_Event * msg);

/// Finalize srv/GetHandState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__srv__GetHandState_Event__fini(vla__srv__GetHandState_Event * msg);

/// Create srv/GetHandState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vla__srv__GetHandState_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__srv__GetHandState_Event *
vla__srv__GetHandState_Event__create(void);

/// Destroy srv/GetHandState message.
/**
 * It calls
 * vla__srv__GetHandState_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__srv__GetHandState_Event__destroy(vla__srv__GetHandState_Event * msg);

/// Check for srv/GetHandState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__srv__GetHandState_Event__are_equal(const vla__srv__GetHandState_Event * lhs, const vla__srv__GetHandState_Event * rhs);

/// Copy a srv/GetHandState message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__srv__GetHandState_Event__copy(
  const vla__srv__GetHandState_Event * input,
  vla__srv__GetHandState_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__srv__GetHandState_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeDescription *
vla__srv__GetHandState_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource *
vla__srv__GetHandState_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__srv__GetHandState_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GetHandState messages.
/**
 * It allocates the memory for the number of elements and calls
 * vla__srv__GetHandState_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__srv__GetHandState_Event__Sequence__init(vla__srv__GetHandState_Event__Sequence * array, size_t size);

/// Finalize array of srv/GetHandState messages.
/**
 * It calls
 * vla__srv__GetHandState_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__srv__GetHandState_Event__Sequence__fini(vla__srv__GetHandState_Event__Sequence * array);

/// Create array of srv/GetHandState messages.
/**
 * It allocates the memory for the array and calls
 * vla__srv__GetHandState_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__srv__GetHandState_Event__Sequence *
vla__srv__GetHandState_Event__Sequence__create(size_t size);

/// Destroy array of srv/GetHandState messages.
/**
 * It calls
 * vla__srv__GetHandState_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__srv__GetHandState_Event__Sequence__destroy(vla__srv__GetHandState_Event__Sequence * array);

/// Check for srv/GetHandState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__srv__GetHandState_Event__Sequence__are_equal(const vla__srv__GetHandState_Event__Sequence * lhs, const vla__srv__GetHandState_Event__Sequence * rhs);

/// Copy an array of srv/GetHandState messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__srv__GetHandState_Event__Sequence__copy(
  const vla__srv__GetHandState_Event__Sequence * input,
  vla__srv__GetHandState_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // VLA__SRV__DETAIL__GET_HAND_STATE__FUNCTIONS_H_
