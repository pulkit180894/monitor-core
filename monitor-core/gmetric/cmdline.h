/* cmdline.h */

/* File autogenerated by gengetopt version 2.6  */

#ifndef _cmdline_h
#define _cmdline_h

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* Don't define PACKAGE and VERSION if we use automake.  */
#if defined PACKAGE
#  undef PACKAGE
#endif
#define PACKAGE "gmetric"
#ifndef VERSION
/* ******* WRITE THE VERSION OF YOUR PROGRAM HERE ******* */
#define VERSION ""
#endif

struct gengetopt_args_info {
  char * name_arg;	/* Name of the metric.  */
  char * value_arg;	/* Value of the metric.  */
  char * type_arg;	/* Either string|int8|uint8|int16|uint16|int32|uint32|float|double.  */
  char * units_arg;	/* Unit of measure for the value e.g. Kilobytes, Celcius.  */
  char * mcast_channel_arg;	/* Multicast channel to send/receive on (default='239.2.11.71').  */
  int mcast_port_arg;	/* Multicast port to send/receive on (default=8649).  */
  char * mcast_if_arg;	/* Network interface to multicast on e.g. 'eth1' (default='kernel decides').  */
  int mcast_ttl_arg;	/* Multicast Time-To-Live (TTL) (default=1).  */

  int help_given ;	/* Whether help was given.  */
  int version_given ;	/* Whether version was given.  */
  int name_given ;	/* Whether name was given.  */
  int value_given ;	/* Whether value was given.  */
  int type_given ;	/* Whether type was given.  */
  int units_given ;	/* Whether units was given.  */
  int mcast_channel_given ;	/* Whether mcast_channel was given.  */
  int mcast_port_given ;	/* Whether mcast_port was given.  */
  int mcast_if_given ;	/* Whether mcast_if was given.  */
  int mcast_ttl_given ;	/* Whether mcast_ttl was given.  */
} ;

int cmdline_parser (int argc, char * const *argv, struct gengetopt_args_info *args_info);

void cmdline_parser_print_help(void);
void cmdline_parser_print_version(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* _cmdline_h */
