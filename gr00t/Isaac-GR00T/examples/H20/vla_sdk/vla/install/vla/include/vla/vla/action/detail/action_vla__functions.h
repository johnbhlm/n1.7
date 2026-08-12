// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from vla:action/ActionVLA.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "vla/action/action_vla.h"


#ifndef VLA__ACTION__DETAIL__ACTION_VLA__FUNCTIONS_H_
#define VLA__ACTION__DETAIL__ACTION_VLA__FUNCTIONS_H_

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

#include "vla/action/detail/action_vla__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__action__ActionVLA__get_type_hash(
  const rosidl_action_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeDescription *
vla__action__ActionVLA__get_type_description(
  const rosidl_action_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource *
vla__action__ActionVLA__get_individual_type_description_source(
  const rosidl_action_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__action__ActionVLA__get_type_description_sources(
  const rosidl_action_type_support_t * type_support);

/// Initialize action/ActionVLA message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vla__action__ActionVLA_Goal
 * )) before or use
 * vla__action__ActionVLA_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_Goal__init(vla__action__ActionVLA_Goal * msg);

/// Finalize action/ActionVLA message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_Goal__fini(vla__action__ActionVLA_Goal * msg);

/// Create action/ActionVLA message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vla__action__ActionVLA_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__action__ActionVLA_Goal *
vla__action__ActionVLA_Goal__create(void);

/// Destroy action/ActionVLA message.
/**
 * It calls
 * vla__action__ActionVLA_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_Goal__destroy(vla__action__ActionVLA_Goal * msg);

/// Check for action/ActionVLA message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_Goal__are_equal(const vla__action__ActionVLA_Goal * lhs, const vla__action__ActionVLA_Goal * rhs);

/// Copy a action/ActionVLA message.
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
vla__action__ActionVLA_Goal__copy(
  const vla__action__ActionVLA_Goal * input,
  vla__action__ActionVLA_Goal * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__action__ActionVLA_Goal__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeDescription *
vla__action__ActionVLA_Goal__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource *
vla__action__ActionVLA_Goal__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__action__ActionVLA_Goal__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/ActionVLA messages.
/**
 * It allocates the memory for the number of elements and calls
 * vla__action__ActionVLA_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_Goal__Sequence__init(vla__action__ActionVLA_Goal__Sequence * array, size_t size);

/// Finalize array of action/ActionVLA messages.
/**
 * It calls
 * vla__action__ActionVLA_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_Goal__Sequence__fini(vla__action__ActionVLA_Goal__Sequence * array);

/// Create array of action/ActionVLA messages.
/**
 * It allocates the memory for the array and calls
 * vla__action__ActionVLA_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__action__ActionVLA_Goal__Sequence *
vla__action__ActionVLA_Goal__Sequence__create(size_t size);

/// Destroy array of action/ActionVLA messages.
/**
 * It calls
 * vla__action__ActionVLA_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_Goal__Sequence__destroy(vla__action__ActionVLA_Goal__Sequence * array);

/// Check for action/ActionVLA message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_Goal__Sequence__are_equal(const vla__action__ActionVLA_Goal__Sequence * lhs, const vla__action__ActionVLA_Goal__Sequence * rhs);

/// Copy an array of action/ActionVLA messages.
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
vla__action__ActionVLA_Goal__Sequence__copy(
  const vla__action__ActionVLA_Goal__Sequence * input,
  vla__action__ActionVLA_Goal__Sequence * output);

/// Initialize action/ActionVLA message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vla__action__ActionVLA_Result
 * )) before or use
 * vla__action__ActionVLA_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_Result__init(vla__action__ActionVLA_Result * msg);

/// Finalize action/ActionVLA message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_Result__fini(vla__action__ActionVLA_Result * msg);

/// Create action/ActionVLA message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vla__action__ActionVLA_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__action__ActionVLA_Result *
vla__action__ActionVLA_Result__create(void);

/// Destroy action/ActionVLA message.
/**
 * It calls
 * vla__action__ActionVLA_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_Result__destroy(vla__action__ActionVLA_Result * msg);

/// Check for action/ActionVLA message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_Result__are_equal(const vla__action__ActionVLA_Result * lhs, const vla__action__ActionVLA_Result * rhs);

/// Copy a action/ActionVLA message.
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
vla__action__ActionVLA_Result__copy(
  const vla__action__ActionVLA_Result * input,
  vla__action__ActionVLA_Result * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__action__ActionVLA_Result__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeDescription *
vla__action__ActionVLA_Result__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource *
vla__action__ActionVLA_Result__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__action__ActionVLA_Result__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/ActionVLA messages.
/**
 * It allocates the memory for the number of elements and calls
 * vla__action__ActionVLA_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_Result__Sequence__init(vla__action__ActionVLA_Result__Sequence * array, size_t size);

/// Finalize array of action/ActionVLA messages.
/**
 * It calls
 * vla__action__ActionVLA_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_Result__Sequence__fini(vla__action__ActionVLA_Result__Sequence * array);

/// Create array of action/ActionVLA messages.
/**
 * It allocates the memory for the array and calls
 * vla__action__ActionVLA_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__action__ActionVLA_Result__Sequence *
vla__action__ActionVLA_Result__Sequence__create(size_t size);

/// Destroy array of action/ActionVLA messages.
/**
 * It calls
 * vla__action__ActionVLA_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_Result__Sequence__destroy(vla__action__ActionVLA_Result__Sequence * array);

/// Check for action/ActionVLA message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_Result__Sequence__are_equal(const vla__action__ActionVLA_Result__Sequence * lhs, const vla__action__ActionVLA_Result__Sequence * rhs);

/// Copy an array of action/ActionVLA messages.
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
vla__action__ActionVLA_Result__Sequence__copy(
  const vla__action__ActionVLA_Result__Sequence * input,
  vla__action__ActionVLA_Result__Sequence * output);

/// Initialize action/ActionVLA message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vla__action__ActionVLA_Feedback
 * )) before or use
 * vla__action__ActionVLA_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_Feedback__init(vla__action__ActionVLA_Feedback * msg);

/// Finalize action/ActionVLA message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_Feedback__fini(vla__action__ActionVLA_Feedback * msg);

/// Create action/ActionVLA message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vla__action__ActionVLA_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__action__ActionVLA_Feedback *
vla__action__ActionVLA_Feedback__create(void);

/// Destroy action/ActionVLA message.
/**
 * It calls
 * vla__action__ActionVLA_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_Feedback__destroy(vla__action__ActionVLA_Feedback * msg);

/// Check for action/ActionVLA message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_Feedback__are_equal(const vla__action__ActionVLA_Feedback * lhs, const vla__action__ActionVLA_Feedback * rhs);

/// Copy a action/ActionVLA message.
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
vla__action__ActionVLA_Feedback__copy(
  const vla__action__ActionVLA_Feedback * input,
  vla__action__ActionVLA_Feedback * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__action__ActionVLA_Feedback__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeDescription *
vla__action__ActionVLA_Feedback__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource *
vla__action__ActionVLA_Feedback__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__action__ActionVLA_Feedback__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/ActionVLA messages.
/**
 * It allocates the memory for the number of elements and calls
 * vla__action__ActionVLA_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_Feedback__Sequence__init(vla__action__ActionVLA_Feedback__Sequence * array, size_t size);

/// Finalize array of action/ActionVLA messages.
/**
 * It calls
 * vla__action__ActionVLA_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_Feedback__Sequence__fini(vla__action__ActionVLA_Feedback__Sequence * array);

/// Create array of action/ActionVLA messages.
/**
 * It allocates the memory for the array and calls
 * vla__action__ActionVLA_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__action__ActionVLA_Feedback__Sequence *
vla__action__ActionVLA_Feedback__Sequence__create(size_t size);

/// Destroy array of action/ActionVLA messages.
/**
 * It calls
 * vla__action__ActionVLA_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_Feedback__Sequence__destroy(vla__action__ActionVLA_Feedback__Sequence * array);

/// Check for action/ActionVLA message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_Feedback__Sequence__are_equal(const vla__action__ActionVLA_Feedback__Sequence * lhs, const vla__action__ActionVLA_Feedback__Sequence * rhs);

/// Copy an array of action/ActionVLA messages.
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
vla__action__ActionVLA_Feedback__Sequence__copy(
  const vla__action__ActionVLA_Feedback__Sequence * input,
  vla__action__ActionVLA_Feedback__Sequence * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__action__ActionVLA_SendGoal__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeDescription *
vla__action__ActionVLA_SendGoal__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource *
vla__action__ActionVLA_SendGoal__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__action__ActionVLA_SendGoal__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize action/ActionVLA message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vla__action__ActionVLA_SendGoal_Request
 * )) before or use
 * vla__action__ActionVLA_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_SendGoal_Request__init(vla__action__ActionVLA_SendGoal_Request * msg);

/// Finalize action/ActionVLA message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_SendGoal_Request__fini(vla__action__ActionVLA_SendGoal_Request * msg);

/// Create action/ActionVLA message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vla__action__ActionVLA_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__action__ActionVLA_SendGoal_Request *
vla__action__ActionVLA_SendGoal_Request__create(void);

/// Destroy action/ActionVLA message.
/**
 * It calls
 * vla__action__ActionVLA_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_SendGoal_Request__destroy(vla__action__ActionVLA_SendGoal_Request * msg);

/// Check for action/ActionVLA message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_SendGoal_Request__are_equal(const vla__action__ActionVLA_SendGoal_Request * lhs, const vla__action__ActionVLA_SendGoal_Request * rhs);

/// Copy a action/ActionVLA message.
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
vla__action__ActionVLA_SendGoal_Request__copy(
  const vla__action__ActionVLA_SendGoal_Request * input,
  vla__action__ActionVLA_SendGoal_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__action__ActionVLA_SendGoal_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeDescription *
vla__action__ActionVLA_SendGoal_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource *
vla__action__ActionVLA_SendGoal_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__action__ActionVLA_SendGoal_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/ActionVLA messages.
/**
 * It allocates the memory for the number of elements and calls
 * vla__action__ActionVLA_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_SendGoal_Request__Sequence__init(vla__action__ActionVLA_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/ActionVLA messages.
/**
 * It calls
 * vla__action__ActionVLA_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_SendGoal_Request__Sequence__fini(vla__action__ActionVLA_SendGoal_Request__Sequence * array);

/// Create array of action/ActionVLA messages.
/**
 * It allocates the memory for the array and calls
 * vla__action__ActionVLA_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__action__ActionVLA_SendGoal_Request__Sequence *
vla__action__ActionVLA_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/ActionVLA messages.
/**
 * It calls
 * vla__action__ActionVLA_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_SendGoal_Request__Sequence__destroy(vla__action__ActionVLA_SendGoal_Request__Sequence * array);

/// Check for action/ActionVLA message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_SendGoal_Request__Sequence__are_equal(const vla__action__ActionVLA_SendGoal_Request__Sequence * lhs, const vla__action__ActionVLA_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/ActionVLA messages.
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
vla__action__ActionVLA_SendGoal_Request__Sequence__copy(
  const vla__action__ActionVLA_SendGoal_Request__Sequence * input,
  vla__action__ActionVLA_SendGoal_Request__Sequence * output);

/// Initialize action/ActionVLA message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vla__action__ActionVLA_SendGoal_Response
 * )) before or use
 * vla__action__ActionVLA_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_SendGoal_Response__init(vla__action__ActionVLA_SendGoal_Response * msg);

/// Finalize action/ActionVLA message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_SendGoal_Response__fini(vla__action__ActionVLA_SendGoal_Response * msg);

/// Create action/ActionVLA message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vla__action__ActionVLA_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__action__ActionVLA_SendGoal_Response *
vla__action__ActionVLA_SendGoal_Response__create(void);

/// Destroy action/ActionVLA message.
/**
 * It calls
 * vla__action__ActionVLA_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_SendGoal_Response__destroy(vla__action__ActionVLA_SendGoal_Response * msg);

/// Check for action/ActionVLA message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_SendGoal_Response__are_equal(const vla__action__ActionVLA_SendGoal_Response * lhs, const vla__action__ActionVLA_SendGoal_Response * rhs);

/// Copy a action/ActionVLA message.
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
vla__action__ActionVLA_SendGoal_Response__copy(
  const vla__action__ActionVLA_SendGoal_Response * input,
  vla__action__ActionVLA_SendGoal_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__action__ActionVLA_SendGoal_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeDescription *
vla__action__ActionVLA_SendGoal_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource *
vla__action__ActionVLA_SendGoal_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__action__ActionVLA_SendGoal_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/ActionVLA messages.
/**
 * It allocates the memory for the number of elements and calls
 * vla__action__ActionVLA_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_SendGoal_Response__Sequence__init(vla__action__ActionVLA_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/ActionVLA messages.
/**
 * It calls
 * vla__action__ActionVLA_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_SendGoal_Response__Sequence__fini(vla__action__ActionVLA_SendGoal_Response__Sequence * array);

/// Create array of action/ActionVLA messages.
/**
 * It allocates the memory for the array and calls
 * vla__action__ActionVLA_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__action__ActionVLA_SendGoal_Response__Sequence *
vla__action__ActionVLA_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/ActionVLA messages.
/**
 * It calls
 * vla__action__ActionVLA_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_SendGoal_Response__Sequence__destroy(vla__action__ActionVLA_SendGoal_Response__Sequence * array);

/// Check for action/ActionVLA message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_SendGoal_Response__Sequence__are_equal(const vla__action__ActionVLA_SendGoal_Response__Sequence * lhs, const vla__action__ActionVLA_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/ActionVLA messages.
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
vla__action__ActionVLA_SendGoal_Response__Sequence__copy(
  const vla__action__ActionVLA_SendGoal_Response__Sequence * input,
  vla__action__ActionVLA_SendGoal_Response__Sequence * output);

/// Initialize action/ActionVLA message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vla__action__ActionVLA_SendGoal_Event
 * )) before or use
 * vla__action__ActionVLA_SendGoal_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_SendGoal_Event__init(vla__action__ActionVLA_SendGoal_Event * msg);

/// Finalize action/ActionVLA message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_SendGoal_Event__fini(vla__action__ActionVLA_SendGoal_Event * msg);

/// Create action/ActionVLA message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vla__action__ActionVLA_SendGoal_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__action__ActionVLA_SendGoal_Event *
vla__action__ActionVLA_SendGoal_Event__create(void);

/// Destroy action/ActionVLA message.
/**
 * It calls
 * vla__action__ActionVLA_SendGoal_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_SendGoal_Event__destroy(vla__action__ActionVLA_SendGoal_Event * msg);

/// Check for action/ActionVLA message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_SendGoal_Event__are_equal(const vla__action__ActionVLA_SendGoal_Event * lhs, const vla__action__ActionVLA_SendGoal_Event * rhs);

/// Copy a action/ActionVLA message.
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
vla__action__ActionVLA_SendGoal_Event__copy(
  const vla__action__ActionVLA_SendGoal_Event * input,
  vla__action__ActionVLA_SendGoal_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__action__ActionVLA_SendGoal_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeDescription *
vla__action__ActionVLA_SendGoal_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource *
vla__action__ActionVLA_SendGoal_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__action__ActionVLA_SendGoal_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/ActionVLA messages.
/**
 * It allocates the memory for the number of elements and calls
 * vla__action__ActionVLA_SendGoal_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_SendGoal_Event__Sequence__init(vla__action__ActionVLA_SendGoal_Event__Sequence * array, size_t size);

/// Finalize array of action/ActionVLA messages.
/**
 * It calls
 * vla__action__ActionVLA_SendGoal_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_SendGoal_Event__Sequence__fini(vla__action__ActionVLA_SendGoal_Event__Sequence * array);

/// Create array of action/ActionVLA messages.
/**
 * It allocates the memory for the array and calls
 * vla__action__ActionVLA_SendGoal_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__action__ActionVLA_SendGoal_Event__Sequence *
vla__action__ActionVLA_SendGoal_Event__Sequence__create(size_t size);

/// Destroy array of action/ActionVLA messages.
/**
 * It calls
 * vla__action__ActionVLA_SendGoal_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_SendGoal_Event__Sequence__destroy(vla__action__ActionVLA_SendGoal_Event__Sequence * array);

/// Check for action/ActionVLA message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_SendGoal_Event__Sequence__are_equal(const vla__action__ActionVLA_SendGoal_Event__Sequence * lhs, const vla__action__ActionVLA_SendGoal_Event__Sequence * rhs);

/// Copy an array of action/ActionVLA messages.
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
vla__action__ActionVLA_SendGoal_Event__Sequence__copy(
  const vla__action__ActionVLA_SendGoal_Event__Sequence * input,
  vla__action__ActionVLA_SendGoal_Event__Sequence * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__action__ActionVLA_GetResult__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeDescription *
vla__action__ActionVLA_GetResult__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource *
vla__action__ActionVLA_GetResult__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__action__ActionVLA_GetResult__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize action/ActionVLA message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vla__action__ActionVLA_GetResult_Request
 * )) before or use
 * vla__action__ActionVLA_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_GetResult_Request__init(vla__action__ActionVLA_GetResult_Request * msg);

/// Finalize action/ActionVLA message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_GetResult_Request__fini(vla__action__ActionVLA_GetResult_Request * msg);

/// Create action/ActionVLA message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vla__action__ActionVLA_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__action__ActionVLA_GetResult_Request *
vla__action__ActionVLA_GetResult_Request__create(void);

/// Destroy action/ActionVLA message.
/**
 * It calls
 * vla__action__ActionVLA_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_GetResult_Request__destroy(vla__action__ActionVLA_GetResult_Request * msg);

/// Check for action/ActionVLA message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_GetResult_Request__are_equal(const vla__action__ActionVLA_GetResult_Request * lhs, const vla__action__ActionVLA_GetResult_Request * rhs);

/// Copy a action/ActionVLA message.
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
vla__action__ActionVLA_GetResult_Request__copy(
  const vla__action__ActionVLA_GetResult_Request * input,
  vla__action__ActionVLA_GetResult_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__action__ActionVLA_GetResult_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeDescription *
vla__action__ActionVLA_GetResult_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource *
vla__action__ActionVLA_GetResult_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__action__ActionVLA_GetResult_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/ActionVLA messages.
/**
 * It allocates the memory for the number of elements and calls
 * vla__action__ActionVLA_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_GetResult_Request__Sequence__init(vla__action__ActionVLA_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/ActionVLA messages.
/**
 * It calls
 * vla__action__ActionVLA_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_GetResult_Request__Sequence__fini(vla__action__ActionVLA_GetResult_Request__Sequence * array);

/// Create array of action/ActionVLA messages.
/**
 * It allocates the memory for the array and calls
 * vla__action__ActionVLA_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__action__ActionVLA_GetResult_Request__Sequence *
vla__action__ActionVLA_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/ActionVLA messages.
/**
 * It calls
 * vla__action__ActionVLA_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_GetResult_Request__Sequence__destroy(vla__action__ActionVLA_GetResult_Request__Sequence * array);

/// Check for action/ActionVLA message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_GetResult_Request__Sequence__are_equal(const vla__action__ActionVLA_GetResult_Request__Sequence * lhs, const vla__action__ActionVLA_GetResult_Request__Sequence * rhs);

/// Copy an array of action/ActionVLA messages.
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
vla__action__ActionVLA_GetResult_Request__Sequence__copy(
  const vla__action__ActionVLA_GetResult_Request__Sequence * input,
  vla__action__ActionVLA_GetResult_Request__Sequence * output);

/// Initialize action/ActionVLA message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vla__action__ActionVLA_GetResult_Response
 * )) before or use
 * vla__action__ActionVLA_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_GetResult_Response__init(vla__action__ActionVLA_GetResult_Response * msg);

/// Finalize action/ActionVLA message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_GetResult_Response__fini(vla__action__ActionVLA_GetResult_Response * msg);

/// Create action/ActionVLA message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vla__action__ActionVLA_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__action__ActionVLA_GetResult_Response *
vla__action__ActionVLA_GetResult_Response__create(void);

/// Destroy action/ActionVLA message.
/**
 * It calls
 * vla__action__ActionVLA_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_GetResult_Response__destroy(vla__action__ActionVLA_GetResult_Response * msg);

/// Check for action/ActionVLA message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_GetResult_Response__are_equal(const vla__action__ActionVLA_GetResult_Response * lhs, const vla__action__ActionVLA_GetResult_Response * rhs);

/// Copy a action/ActionVLA message.
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
vla__action__ActionVLA_GetResult_Response__copy(
  const vla__action__ActionVLA_GetResult_Response * input,
  vla__action__ActionVLA_GetResult_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__action__ActionVLA_GetResult_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeDescription *
vla__action__ActionVLA_GetResult_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource *
vla__action__ActionVLA_GetResult_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__action__ActionVLA_GetResult_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/ActionVLA messages.
/**
 * It allocates the memory for the number of elements and calls
 * vla__action__ActionVLA_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_GetResult_Response__Sequence__init(vla__action__ActionVLA_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/ActionVLA messages.
/**
 * It calls
 * vla__action__ActionVLA_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_GetResult_Response__Sequence__fini(vla__action__ActionVLA_GetResult_Response__Sequence * array);

/// Create array of action/ActionVLA messages.
/**
 * It allocates the memory for the array and calls
 * vla__action__ActionVLA_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__action__ActionVLA_GetResult_Response__Sequence *
vla__action__ActionVLA_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/ActionVLA messages.
/**
 * It calls
 * vla__action__ActionVLA_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_GetResult_Response__Sequence__destroy(vla__action__ActionVLA_GetResult_Response__Sequence * array);

/// Check for action/ActionVLA message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_GetResult_Response__Sequence__are_equal(const vla__action__ActionVLA_GetResult_Response__Sequence * lhs, const vla__action__ActionVLA_GetResult_Response__Sequence * rhs);

/// Copy an array of action/ActionVLA messages.
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
vla__action__ActionVLA_GetResult_Response__Sequence__copy(
  const vla__action__ActionVLA_GetResult_Response__Sequence * input,
  vla__action__ActionVLA_GetResult_Response__Sequence * output);

/// Initialize action/ActionVLA message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vla__action__ActionVLA_GetResult_Event
 * )) before or use
 * vla__action__ActionVLA_GetResult_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_GetResult_Event__init(vla__action__ActionVLA_GetResult_Event * msg);

/// Finalize action/ActionVLA message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_GetResult_Event__fini(vla__action__ActionVLA_GetResult_Event * msg);

/// Create action/ActionVLA message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vla__action__ActionVLA_GetResult_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__action__ActionVLA_GetResult_Event *
vla__action__ActionVLA_GetResult_Event__create(void);

/// Destroy action/ActionVLA message.
/**
 * It calls
 * vla__action__ActionVLA_GetResult_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_GetResult_Event__destroy(vla__action__ActionVLA_GetResult_Event * msg);

/// Check for action/ActionVLA message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_GetResult_Event__are_equal(const vla__action__ActionVLA_GetResult_Event * lhs, const vla__action__ActionVLA_GetResult_Event * rhs);

/// Copy a action/ActionVLA message.
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
vla__action__ActionVLA_GetResult_Event__copy(
  const vla__action__ActionVLA_GetResult_Event * input,
  vla__action__ActionVLA_GetResult_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__action__ActionVLA_GetResult_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeDescription *
vla__action__ActionVLA_GetResult_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource *
vla__action__ActionVLA_GetResult_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__action__ActionVLA_GetResult_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/ActionVLA messages.
/**
 * It allocates the memory for the number of elements and calls
 * vla__action__ActionVLA_GetResult_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_GetResult_Event__Sequence__init(vla__action__ActionVLA_GetResult_Event__Sequence * array, size_t size);

/// Finalize array of action/ActionVLA messages.
/**
 * It calls
 * vla__action__ActionVLA_GetResult_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_GetResult_Event__Sequence__fini(vla__action__ActionVLA_GetResult_Event__Sequence * array);

/// Create array of action/ActionVLA messages.
/**
 * It allocates the memory for the array and calls
 * vla__action__ActionVLA_GetResult_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__action__ActionVLA_GetResult_Event__Sequence *
vla__action__ActionVLA_GetResult_Event__Sequence__create(size_t size);

/// Destroy array of action/ActionVLA messages.
/**
 * It calls
 * vla__action__ActionVLA_GetResult_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_GetResult_Event__Sequence__destroy(vla__action__ActionVLA_GetResult_Event__Sequence * array);

/// Check for action/ActionVLA message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_GetResult_Event__Sequence__are_equal(const vla__action__ActionVLA_GetResult_Event__Sequence * lhs, const vla__action__ActionVLA_GetResult_Event__Sequence * rhs);

/// Copy an array of action/ActionVLA messages.
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
vla__action__ActionVLA_GetResult_Event__Sequence__copy(
  const vla__action__ActionVLA_GetResult_Event__Sequence * input,
  vla__action__ActionVLA_GetResult_Event__Sequence * output);

/// Initialize action/ActionVLA message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vla__action__ActionVLA_FeedbackMessage
 * )) before or use
 * vla__action__ActionVLA_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_FeedbackMessage__init(vla__action__ActionVLA_FeedbackMessage * msg);

/// Finalize action/ActionVLA message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_FeedbackMessage__fini(vla__action__ActionVLA_FeedbackMessage * msg);

/// Create action/ActionVLA message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vla__action__ActionVLA_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__action__ActionVLA_FeedbackMessage *
vla__action__ActionVLA_FeedbackMessage__create(void);

/// Destroy action/ActionVLA message.
/**
 * It calls
 * vla__action__ActionVLA_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_FeedbackMessage__destroy(vla__action__ActionVLA_FeedbackMessage * msg);

/// Check for action/ActionVLA message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_FeedbackMessage__are_equal(const vla__action__ActionVLA_FeedbackMessage * lhs, const vla__action__ActionVLA_FeedbackMessage * rhs);

/// Copy a action/ActionVLA message.
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
vla__action__ActionVLA_FeedbackMessage__copy(
  const vla__action__ActionVLA_FeedbackMessage * input,
  vla__action__ActionVLA_FeedbackMessage * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_type_hash_t *
vla__action__ActionVLA_FeedbackMessage__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeDescription *
vla__action__ActionVLA_FeedbackMessage__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource *
vla__action__ActionVLA_FeedbackMessage__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_vla
const rosidl_runtime_c__type_description__TypeSource__Sequence *
vla__action__ActionVLA_FeedbackMessage__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of action/ActionVLA messages.
/**
 * It allocates the memory for the number of elements and calls
 * vla__action__ActionVLA_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_FeedbackMessage__Sequence__init(vla__action__ActionVLA_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/ActionVLA messages.
/**
 * It calls
 * vla__action__ActionVLA_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_FeedbackMessage__Sequence__fini(vla__action__ActionVLA_FeedbackMessage__Sequence * array);

/// Create array of action/ActionVLA messages.
/**
 * It allocates the memory for the array and calls
 * vla__action__ActionVLA_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
vla__action__ActionVLA_FeedbackMessage__Sequence *
vla__action__ActionVLA_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/ActionVLA messages.
/**
 * It calls
 * vla__action__ActionVLA_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
void
vla__action__ActionVLA_FeedbackMessage__Sequence__destroy(vla__action__ActionVLA_FeedbackMessage__Sequence * array);

/// Check for action/ActionVLA message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vla
bool
vla__action__ActionVLA_FeedbackMessage__Sequence__are_equal(const vla__action__ActionVLA_FeedbackMessage__Sequence * lhs, const vla__action__ActionVLA_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/ActionVLA messages.
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
vla__action__ActionVLA_FeedbackMessage__Sequence__copy(
  const vla__action__ActionVLA_FeedbackMessage__Sequence * input,
  vla__action__ActionVLA_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VLA__ACTION__DETAIL__ACTION_VLA__FUNCTIONS_H_
