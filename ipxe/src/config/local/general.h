#define NET_PROTO_IPV6        /* IPv6 protocol */
#define	DOWNLOAD_PROTO_HTTPS  /* Secure Hypertext Transfer Protocol */
// Enable FTP Support in iPXE
#define	DOWNLOAD_PROTO_FTP    /* File Transfer Protocol */
#define	DOWNLOAD_PROTO_NFS    /* Network File System Protocol */
#define	IMAGE_PXE             /* PXE image support */
#define	IMAGE_SCRIPT          /* iPXE script image support */
#define	IMAGE_BZIMAGE         /* Linux bzImage image support */
// The ESXi Legacy BIOS bootloader mboot.c32 needs COMBOOT enabled in iPXE
#define	IMAGE_COMBOOT         /* SYSLINUX COMBOOT image support */
#define	IMAGE_PNM             /* PNM image support */
#define NSLOOKUP_CMD          /* DNS resolving command */
#define TIME_CMD              /* Time commands */
#define DIGEST_CMD            /* Image crypto digest commands */
#define LOTEST_CMD            /* Loopback testing commands */
#define VLAN_CMD              /* VLAN commands */
#define PXE_CMD               /* PXE commands */
#define REBOOT_CMD            /* Reboot command */
#define POWEROFF_CMD          /* Power off command */
#define IMAGE_TRUST_CMD       /* Image trust management commands */
#define PCI_CMD               /* PCI commands */
#define PARAM_CMD             /* Form parameter commands */
#define NEIGHBOUR_CMD         /* Neighbour management commands */
#define PING_CMD              /* Ping command */
#define CONSOLE_CMD           /* Console command */
#define IPSTAT_CMD            /* IP statistics commands */
#define NTP_CMD               /* NTP commands */
#define CERT_CMD              /* Certificate management commands */
