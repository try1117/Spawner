#ifndef _STATUS_H_
#define _STATUS_H_

#include "platform.h"


typedef enum
{
    process_still_active        = 0x0,
    process_finished_normal     = 0x1,
    process_finished_abnormally   = 0x3,
    process_finished_terminated = 0x5,
    process_not_started         = 0xfe,
} process_status_t;

const unsigned int process_finished = 0x1;

#ifdef _WIN32

typedef enum
{
    exception_access_violation          = EXCEPTION_ACCESS_VIOLATION,
    exception_datatype_misalign         = EXCEPTION_DATATYPE_MISALIGNMENT,
    exception_breakpoint                = EXCEPTION_BREAKPOINT,
    exception_single_step               = EXCEPTION_SINGLE_STEP,
    exception_array_bounds_exceeded     = EXCEPTION_ARRAY_BOUNDS_EXCEEDED,
    exception_flt_denormal_operand      = EXCEPTION_FLT_DENORMAL_OPERAND,
    exception_flt_divide_by_zero        = EXCEPTION_FLT_DIVIDE_BY_ZERO,
    exception_flt_inexact_result        = EXCEPTION_FLT_INEXACT_RESULT,
    exception_flt_invalid_operation     = EXCEPTION_FLT_INVALID_OPERATION,
    exception_flt_overflow              = EXCEPTION_FLT_OVERFLOW,
    exception_flt_stack_check           = EXCEPTION_FLT_STACK_CHECK,
    exception_flt_underflow             = EXCEPTION_FLT_UNDERFLOW,
    exception_int_divide_by_zero        = EXCEPTION_INT_DIVIDE_BY_ZERO,
    exception_int_overflow              = EXCEPTION_INT_OVERFLOW,
    exception_priv_instruction          = EXCEPTION_PRIV_INSTRUCTION,
    exception_in_page_error             = EXCEPTION_IN_PAGE_ERROR,
    exception_illegal_instruction       = EXCEPTION_ILLEGAL_INSTRUCTION,
    exception_noncontinuable_exception  = EXCEPTION_NONCONTINUABLE_EXCEPTION,
    exception_stack_overflow            = EXCEPTION_STACK_OVERFLOW,
    exception_invalid_disposition       = EXCEPTION_INVALID_DISPOSITION,
    exception_guard_page                = EXCEPTION_GUARD_PAGE,
    exception_invalid_handle            = EXCEPTION_INVALID_HANDLE,
    exception_no_exception              = 0x0,
    //exception_possible_deadlock         = EXCEPTION_POSSIBLE_DEADLOCK,
} exception_t;

#endif//_WIN32

#endif//_STATUS_H_