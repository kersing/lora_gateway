/*
 * RAK831 + RAK USB to SPI module
 *
 *  Created on: Dec  3, 2016
 *      Author: Jac Kersing
 */

#ifndef _RAK831_H_
#define _RAK831_H_

/* Human readable platform definition */
#define DISPLAY_PLATFORM "RAK831-x86"

/* parameters for a FT232H */
#define VID		        0x0403
#define PID		        0x6010

/* FTDI device index - used if there are multiple FT232H on the system. */
#define DEVICE_INDEX    (atoi(getenv("DEVICE_INDEX")==NULL ? "0" : getenv("DEVICE_INDEX")))

#endif /* _RAK831_H_ */
