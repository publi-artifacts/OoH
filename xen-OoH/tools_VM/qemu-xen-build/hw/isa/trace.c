/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "trace.h"

uint16_t _TRACE_PC87312_IO_READ_DSTATE;
uint16_t _TRACE_PC87312_IO_WRITE_DSTATE;
uint16_t _TRACE_PC87312_INFO_FLOPPY_DSTATE;
uint16_t _TRACE_PC87312_INFO_IDE_DSTATE;
uint16_t _TRACE_PC87312_INFO_PARALLEL_DSTATE;
uint16_t _TRACE_PC87312_INFO_SERIAL_DSTATE;
TraceEvent _TRACE_PC87312_IO_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "pc87312_io_read",
    .sstate = TRACE_PC87312_IO_READ_ENABLED,
    .dstate = &_TRACE_PC87312_IO_READ_DSTATE 
};
TraceEvent _TRACE_PC87312_IO_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "pc87312_io_write",
    .sstate = TRACE_PC87312_IO_WRITE_ENABLED,
    .dstate = &_TRACE_PC87312_IO_WRITE_DSTATE 
};
TraceEvent _TRACE_PC87312_INFO_FLOPPY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "pc87312_info_floppy",
    .sstate = TRACE_PC87312_INFO_FLOPPY_ENABLED,
    .dstate = &_TRACE_PC87312_INFO_FLOPPY_DSTATE 
};
TraceEvent _TRACE_PC87312_INFO_IDE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "pc87312_info_ide",
    .sstate = TRACE_PC87312_INFO_IDE_ENABLED,
    .dstate = &_TRACE_PC87312_INFO_IDE_DSTATE 
};
TraceEvent _TRACE_PC87312_INFO_PARALLEL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "pc87312_info_parallel",
    .sstate = TRACE_PC87312_INFO_PARALLEL_ENABLED,
    .dstate = &_TRACE_PC87312_INFO_PARALLEL_DSTATE 
};
TraceEvent _TRACE_PC87312_INFO_SERIAL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "pc87312_info_serial",
    .sstate = TRACE_PC87312_INFO_SERIAL_ENABLED,
    .dstate = &_TRACE_PC87312_INFO_SERIAL_DSTATE 
};
TraceEvent *hw_isa_trace_events[] = {
    &_TRACE_PC87312_IO_READ_EVENT,
    &_TRACE_PC87312_IO_WRITE_EVENT,
    &_TRACE_PC87312_INFO_FLOPPY_EVENT,
    &_TRACE_PC87312_INFO_IDE_EVENT,
    &_TRACE_PC87312_INFO_PARALLEL_EVENT,
    &_TRACE_PC87312_INFO_SERIAL_EVENT,
  NULL,
};

static void trace_hw_isa_register_events(void)
{
    trace_event_register_group(hw_isa_trace_events);
}
trace_init(trace_hw_isa_register_events)