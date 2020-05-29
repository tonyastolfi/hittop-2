#pragma once
#ifndef HITTOP_TASK_HPP
#define HITTOP_TASK_HPP

namespace hittop {

enum struct TaskType { PARENT, SERIAL };

template <typename Derived, TaskType Type = TaskType::PARENT>
class Task;

}  // namespace hittop

#include <hittop/parent_task.hpp>
#include <hittop/serial_task.hpp>

#endif  // HITTOP_TASK_HPP
