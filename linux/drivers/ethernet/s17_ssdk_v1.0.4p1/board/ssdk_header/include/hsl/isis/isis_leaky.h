/*
 * Copyright (c) 2007-2009 Atheros Communications, Inc.
 * All rights reserved.
 *
 */ 
#ifndef _ISIS_LEAKY_H_
#define _ISIS_LEAKY_H_

#ifdef __cplusplus
extern "C" {
#endif                          /* __cplusplus */

#include "fal/fal_leaky.h"

sw_error_t isis_leaky_init(a_uint32_t dev_id);

#ifdef IN_LEAKY
    #define ISIS_LEAKY_INIT(rv, dev_id) \
    { \
        rv = isis_leaky_init(dev_id); \
        SW_RTN_ON_ERROR(rv); \
    }
#else
    #define ISIS_LEAKY_INIT(rv, dev_id)
#endif

#ifdef HSL_STANDALONG


HSL_LOCAL sw_error_t
isis_uc_leaky_mode_set(a_uint32_t dev_id,
                         fal_leaky_ctrl_mode_t ctrl_mode);


HSL_LOCAL sw_error_t
isis_uc_leaky_mode_get(a_uint32_t dev_id,
                         fal_leaky_ctrl_mode_t * ctrl_mode);


HSL_LOCAL sw_error_t
isis_mc_leaky_mode_set(a_uint32_t dev_id,
                         fal_leaky_ctrl_mode_t ctrl_mode);


HSL_LOCAL sw_error_t
isis_mc_leaky_mode_get(a_uint32_t dev_id,
                         fal_leaky_ctrl_mode_t * ctrl_mode);


HSL_LOCAL sw_error_t
isis_port_arp_leaky_set(a_uint32_t dev_id, fal_port_t port_id,
                          a_bool_t enable);


HSL_LOCAL sw_error_t
isis_port_arp_leaky_get(a_uint32_t dev_id, fal_port_t port_id,
                          a_bool_t * enable);


HSL_LOCAL sw_error_t
isis_port_uc_leaky_set(a_uint32_t dev_id, fal_port_t port_id,
                         a_bool_t enable);


HSL_LOCAL sw_error_t
isis_port_uc_leaky_get(a_uint32_t dev_id, fal_port_t port_id,
                         a_bool_t * enable);


HSL_LOCAL sw_error_t
isis_port_mc_leaky_set(a_uint32_t dev_id, fal_port_t port_id,
                         a_bool_t enable);


HSL_LOCAL sw_error_t
isis_port_mc_leaky_get(a_uint32_t dev_id, fal_port_t port_id,
                         a_bool_t * enable);
#endif

#ifdef __cplusplus
}
#endif                          /* __cplusplus */
#endif                          /* _ISIS_LEAKY_H_ */

