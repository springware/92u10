/*
 * Copyright (c) 2007-2009 Atheros Communications, Inc.
 * All rights reserved.
 *
 */
#ifndef _ISIS_IP_H_
#define _ISIS_IP_H_

#ifdef __cplusplus
extern "C" {
#endif                          /* __cplusplus */

#include "fal/fal_ip.h"

sw_error_t isis_ip_init(a_uint32_t dev_id);

sw_error_t isis_ip_reset(a_uint32_t dev_id);

#ifdef IN_IP
#define ISIS_IP_INIT(rv, dev_id) \
    { \
        rv = isis_ip_init(dev_id); \
        SW_RTN_ON_ERROR(rv); \
    }

#define ISIS_IP_RESET(rv, dev_id) \
    { \
        rv = isis_ip_reset(dev_id); \
        SW_RTN_ON_ERROR(rv); \
    }
#else
#define ISIS_IP_INIT(rv, dev_id)
#define ISIS_IP_RESET(rv, dev_id)
#endif

#ifdef HSL_STANDALONG

HSL_LOCAL sw_error_t
isis_ip_host_add(a_uint32_t dev_id, fal_host_entry_t * host_entry);

HSL_LOCAL sw_error_t
isis_ip_host_del(a_uint32_t dev_id, a_uint32_t del_mode,
                 fal_host_entry_t * host_entry);

HSL_LOCAL sw_error_t
isis_ip_host_get(a_uint32_t dev_id, a_uint32_t get_mode,
                 fal_host_entry_t * host_entry);

HSL_LOCAL sw_error_t
isis_ip_host_next(a_uint32_t dev_id, a_uint32_t next_mode,
                  fal_host_entry_t * host_entry);

HSL_LOCAL sw_error_t
isis_ip_host_counter_bind(a_uint32_t dev_id, a_uint32_t entry_id,
                          a_uint32_t cnt_id, a_bool_t enable);

HSL_LOCAL sw_error_t
isis_ip_host_pppoe_bind(a_uint32_t dev_id, a_uint32_t entry_id,
                        a_uint32_t pppoe_id, a_bool_t enable);

HSL_LOCAL sw_error_t
isis_ip_pt_arp_learn_set(a_uint32_t dev_id, fal_port_t port_id,
                         a_uint32_t flags);

HSL_LOCAL sw_error_t
isis_ip_pt_arp_learn_get(a_uint32_t dev_id, fal_port_t port_id,
                         a_uint32_t * flags);

HSL_LOCAL sw_error_t
isis_ip_arp_learn_set(a_uint32_t dev_id, fal_arp_learn_mode_t mode);

HSL_LOCAL sw_error_t
isis_ip_arp_learn_get(a_uint32_t dev_id, fal_arp_learn_mode_t * mode);

HSL_LOCAL sw_error_t
isis_ip_source_guard_set(a_uint32_t dev_id, fal_port_t port_id,
                         fal_source_guard_mode_t mode);

HSL_LOCAL sw_error_t
isis_ip_source_guard_get(a_uint32_t dev_id, fal_port_t port_id,
                         fal_source_guard_mode_t * mode);

HSL_LOCAL sw_error_t
isis_ip_unk_source_cmd_set(a_uint32_t dev_id, fal_fwd_cmd_t cmd);

HSL_LOCAL sw_error_t
isis_ip_unk_source_cmd_get(a_uint32_t dev_id, fal_fwd_cmd_t * cmd);

HSL_LOCAL sw_error_t
isis_ip_arp_guard_set(a_uint32_t dev_id, fal_port_t port_id,
                      fal_source_guard_mode_t mode);

HSL_LOCAL sw_error_t
isis_ip_arp_guard_get(a_uint32_t dev_id, fal_port_t port_id,
                      fal_source_guard_mode_t * mode);

HSL_LOCAL sw_error_t
isis_arp_unk_source_cmd_set(a_uint32_t dev_id, fal_fwd_cmd_t cmd);

HSL_LOCAL sw_error_t
isis_arp_unk_source_cmd_get(a_uint32_t dev_id, fal_fwd_cmd_t * cmd);

HSL_LOCAL sw_error_t
isis_ip_route_status_set(a_uint32_t dev_id, a_bool_t enable);

HSL_LOCAL sw_error_t
isis_ip_route_status_get(a_uint32_t dev_id, a_bool_t * enable);

HSL_LOCAL sw_error_t
isis_ip_intf_entry_add(a_uint32_t dev_id, fal_intf_mac_entry_t * entry);

HSL_LOCAL sw_error_t
isis_ip_intf_entry_del(a_uint32_t dev_id, a_uint32_t del_mode,
                       fal_intf_mac_entry_t * entry);

HSL_LOCAL sw_error_t
isis_ip_intf_entry_next(a_uint32_t dev_id, a_uint32_t next_mode,
                        fal_intf_mac_entry_t * entry);

HSL_LOCAL sw_error_t
isis_ip6_base_addr_set(a_uint32_t dev_id, fal_ip6_addr_t * addr);

HSL_LOCAL sw_error_t
isis_ip6_base_addr_get(a_uint32_t dev_id, fal_ip6_addr_t * addr);

HSL_LOCAL sw_error_t
isis_ip_wcmp_entry_set(a_uint32_t dev_id, a_uint32_t wcmp_id, fal_ip_wcmp_t * wcmp);

HSL_LOCAL sw_error_t
isis_ip_wcmp_entry_get(a_uint32_t dev_id, a_uint32_t wcmp_id, fal_ip_wcmp_t * wcmp);

#endif

#ifdef __cplusplus
}
#endif                          /* __cplusplus */
#endif                          /* _ISIS_IP_H_ */
