# 0 "project/radare2/libr/socket/i/can.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/socket/i/can.h"
# 80 "project/radare2/libr/socket/i/can.h"
typedef unsigned int canid_t;
# 91 "project/radare2/libr/socket/i/can.h"
typedef unsigned int can_err_mask_t;
# 112 "project/radare2/libr/socket/i/can.h"
struct can_frame {
 canid_t can_id;
 unsigned char can_dlc;
 unsigned char __pad;
 unsigned char __res0;
 unsigned char __res1;
 unsigned char data[8] __attribute__((aligned(8)));
};
# 149 "project/radare2/libr/socket/i/can.h"
struct canfd_frame {
 canid_t can_id;
 unsigned char len;
 unsigned char flags;
 unsigned char __res0;
 unsigned char __res1;
 unsigned char data[64] __attribute__((aligned(8)));
};
# 179 "project/radare2/libr/socket/i/can.h"
struct sockaddr_can {
 unsigned short can_family;
 int can_ifindex;
 union {

  struct { canid_t rx_id, tx_id; } tp;


  struct {

   unsigned long long name;







   unsigned int pgn;


   unsigned char addr;
  } j1939;


 } can_addr;
};
# 220 "project/radare2/libr/socket/i/can.h"
struct can_filter {
 canid_t can_id;
 canid_t can_mask;
};
