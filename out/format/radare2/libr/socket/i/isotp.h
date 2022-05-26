# 1 "project/radare2/libr/socket/i/isotp.h"
# 15 "project/radare2/libr/socket/i/isotp.h"
#ifndef CAN_ISOTP_H
#define CAN_ISOTP_H 

#include <net/if.h>
#include <sys/ioctl.h>
#include <sys/socket.h>

#include "can.h"

#define SOL_CAN_ISOTP (SOL_CAN_BASE + CAN_ISOTP)



#define CAN_ISOTP_OPTS 1

#define CAN_ISOTP_RECV_FC 2



#define CAN_ISOTP_TX_STMIN 3



#define CAN_ISOTP_RX_STMIN 4



#define CAN_ISOTP_LL_OPTS 5

struct can_isotp_options {
 __u32 flags;

 __u32 frame_txtime;

 __u8 ext_address;

 __u8 txpad_content;

 __u8 rxpad_content;

 __u8 rx_ext_address;

};

struct can_isotp_fc_options {
 __u8 bs;


 __u8 stmin;






 __u8 wftmax;

};

struct can_isotp_ll_options {
 __u8 mtu;



 __u8 tx_dl;



 __u8 tx_flags;



};



#define CAN_ISOTP_LISTEN_MODE 0x001
#define CAN_ISOTP_EXTEND_ADDR 0x002
#define CAN_ISOTP_TX_PADDING 0x004
#define CAN_ISOTP_RX_PADDING 0x008
#define CAN_ISOTP_CHK_PAD_LEN 0x010
#define CAN_ISOTP_CHK_PAD_DATA 0x020
#define CAN_ISOTP_HALF_DUPLEX 0x040
#define CAN_ISOTP_FORCE_TXSTMIN 0x080
#define CAN_ISOTP_FORCE_RXSTMIN 0x100
#define CAN_ISOTP_RX_EXT_ADDR 0x200
#define CAN_ISOTP_WAIT_TX_DONE 0x400
#define CAN_ISOTP_SF_BROADCAST 0x800



#define CAN_ISOTP_DEFAULT_FLAGS 0
#define CAN_ISOTP_DEFAULT_EXT_ADDRESS 0x00
#define CAN_ISOTP_DEFAULT_PAD_CONTENT 0xCC
#define CAN_ISOTP_DEFAULT_FRAME_TXTIME 0
#define CAN_ISOTP_DEFAULT_RECV_BS 0
#define CAN_ISOTP_DEFAULT_RECV_STMIN 0x00
#define CAN_ISOTP_DEFAULT_RECV_WFTMAX 0

#define CAN_ISOTP_DEFAULT_LL_MTU CAN_MTU
#define CAN_ISOTP_DEFAULT_LL_TX_DL CAN_MAX_DLEN
#define CAN_ISOTP_DEFAULT_LL_TX_FLAGS 0
# 130 "project/radare2/libr/socket/i/isotp.h"
#endif
