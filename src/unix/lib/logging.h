/*
 * vim: tabstop=4 shiftwidth=4 softtabstop=4
 *
 * Copyright (c) 2011 Openstack, LLC.
 * All Rights Reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License"); you may
 *    not use this file except in compliance with the License. You may obtain
 *    a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 *    WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 *    License for the specific language governing permissions and limitations
 *    under the License.
 */

#ifndef __AGENTLIB_LOGGING_H__
#define __AGENTLIB_LOGGING_H__

int agent_log_python_error(char *log_prefix);
void agent_error(char *fmt, ...);
void agent_debug(char *fmt, ...);
void agent_info(char *fmt, ...);
void agent_warn(char *fmt, ...);

#endif /* __NOVA_AGENT_LOGGING_H__ */
