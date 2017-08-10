// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef TYPES__CUSTOM_PARTICIPANT_INFO_HPP_
#define TYPES__CUSTOM_PARTICIPANT_INFO_HPP_

#include "fastrtps/participant/Participant.h"

#include "rmw/rmw.h"

#include "reader_info.hpp"
#include "writer_info.hpp"

typedef struct CustomParticipantInfo
{
  eprosima::fastrtps::Participant * participant;
  ReaderInfo * secondarySubListener;
  WriterInfo * secondaryPubListener;
  rmw_guard_condition_t * graph_guard_condition;
} CustomParticipantInfo;

#endif  // TYPES__CUSTOM_PARTICIPANT_INFO_HPP_