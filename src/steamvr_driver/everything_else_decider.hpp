#include <iostream>

#include <fstream>

#include "xrt/xrt_config.h"
#include "xrt/xrt_defines.h"

#include "tracking/t_hand_tracking.h"
#include "math/m_space.h"
#include "hg_interface.h"

#include "os/os_time.h"
#include "openvr.h"
#include "u_subprocess_logging.h"
#include "math/m_vec3.h"
#include "tracking_subprocess_protocol.hpp"

#define meow_printf U_SP_LOG_E

// I'M SORRY

struct decider_global_state
{
    bool snap_up = {};
    bool snap_down = {};

    bool curled[2][4] = {};
};
extern struct decider_global_state dgs;


void decide_everything_else(tracking_message &msg, xrt_pose head);
