/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "trace.h"

uint16_t _TRACE_MILKYMIST_MEMCARD_MEMORY_READ_DSTATE;
uint16_t _TRACE_MILKYMIST_MEMCARD_MEMORY_WRITE_DSTATE;
TraceEvent _TRACE_MILKYMIST_MEMCARD_MEMORY_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "milkymist_memcard_memory_read",
    .sstate = TRACE_MILKYMIST_MEMCARD_MEMORY_READ_ENABLED,
    .dstate = &_TRACE_MILKYMIST_MEMCARD_MEMORY_READ_DSTATE 
};
TraceEvent _TRACE_MILKYMIST_MEMCARD_MEMORY_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "milkymist_memcard_memory_write",
    .sstate = TRACE_MILKYMIST_MEMCARD_MEMORY_WRITE_ENABLED,
    .dstate = &_TRACE_MILKYMIST_MEMCARD_MEMORY_WRITE_DSTATE 
};
TraceEvent *hw_sd_trace_events[] = {
    &_TRACE_MILKYMIST_MEMCARD_MEMORY_READ_EVENT,
    &_TRACE_MILKYMIST_MEMCARD_MEMORY_WRITE_EVENT,
  NULL,
};

static void trace_hw_sd_register_events(void)
{
    trace_event_register_group(hw_sd_trace_events);
}
trace_init(trace_hw_sd_register_events)
