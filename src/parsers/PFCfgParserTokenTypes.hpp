#ifndef INC_PFCfgParserTokenTypes_hpp_
#define INC_PFCfgParserTokenTypes_hpp_

/* $ANTLR 2.7.7 (20100319): "pf.g" -> "PFCfgParserTokenTypes.hpp"$ */

#ifndef CUSTOM_API
# define CUSTOM_API
#endif

#ifdef __cplusplus
struct CUSTOM_API PFCfgParserTokenTypes {
#endif
	enum {
		EOF_ = 1,
		NEWLINE = 4,
		LINE_COMMENT = 5,
		WORD = 6,
		EQUAL = 7,
		ANTISPOOF = 8,
		ALTQ = 9,
		QUEUE = 10,
		SET = 11,
		TIMEOUT = 12,
		// "ruleset-optimization" = 13
		LITERAL_optimization = 14,
		LITERAL_aggressive = 15,
		LITERAL_conservative = 16,
		// "high-latency" = 17
		LITERAL_normal = 18,
		LITERAL_satellite = 19,
		LITERAL_limit = 20,
		LITERAL_loginterface = 21,
		// "block-policy" = 22
		DROP = 23,
		RETURN = 24,
		// "state-policy" = 25
		// "if-bound" = 26
		LITERAL_floating = 27,
		// "state-defaults" = 28
		// "require-order" = 29
		LITERAL_fingerprints = 30,
		LITERAL_skip = 31,
		ON = 32,
		LITERAL_debug = 33,
		LITERAL_reassemble = 34,
		LITERAL_hostid = 35,
		// "tcp.first" = 36
		// "tcp.opening" = 37
		// "tcp.established" = 38
		// "tcp.closing" = 39
		// "tcp.finwait" = 40
		// "tcp.closed" = 41
		// "udp.first" = 42
		// "udp.single" = 43
		// "udp.multiple" = 44
		// "icmp.first" = 45
		// "icmp.error" = 46
		// "other.first" = 47
		// "other.single" = 48
		// "other.multiple" = 49
		LITERAL_frag = 50,
		LITERAL_interval = 51,
		// "src.track" = 52
		// "adaptive.start" = 53
		// "adaptive.end" = 54
		INT_CONST = 55,
		OPENING_BRACE = 56,
		COMMA = 57,
		CLOSING_BRACE = 58,
		LITERAL_frags = 59,
		LITERAL_states = 60,
		// "src-nodes" = 61
		LITERAL_tables = 62,
		// "tables-entries" = 63
		SCRUB = 64,
		MATCH = 65,
		TABLE = 66,
		LESS_THAN = 67,
		GREATER_THAN = 68,
		PERSIST = 69,
		CONST = 70,
		COUNTERS = 71,
		FILE = 72,
		STRING = 73,
		EXLAMATION = 74,
		COLON = 75,
		NETWORK = 76,
		BROADCAST = 77,
		PEER = 78,
		SELF = 79,
		IPV4 = 80,
		SLASH = 81,
		NO = 82,
		NAT = 83,
		PASS = 84,
		MINUS = 85,
		STATIC_PORT = 86,
		RDR = 87,
		OPENING_PAREN = 88,
		CLOSING_PAREN = 89,
		PORT = 90,
		IPV6 = 91,
		STAR = 92,
		BITMASK = 93,
		RANDOM = 94,
		SOURCE_HASH = 95,
		HEX_KEY = 96,
		STRING_KEY = 97,
		ROUND_ROBIN = 98,
		STICKY_ADDRESS = 99,
		BINAT = 100,
		BLOCK = 101,
		RETURN_RST = 102,
		TTL = 103,
		RETURN_ICMP = 104,
		RETURN_ICMP6 = 105,
		IN = 106,
		OUT = 107,
		LOG = 108,
		ALL = 109,
		USER = 110,
		TO = 111,
		QUICK = 112,
		INET = 113,
		INET6 = 114,
		PROTO = 115,
		IP = 116,
		ICMP = 117,
		IGMP = 118,
		TCP = 119,
		UDP = 120,
		RDP = 121,
		RSVP = 122,
		GRE = 123,
		ESP = 124,
		AH = 125,
		EIGRP = 126,
		OSPF = 127,
		IPIP = 128,
		VRRP = 129,
		L2TP = 130,
		ISIS = 131,
		FROM = 132,
		URPF_FAILED = 133,
		ANY = 134,
		NO_ROUTE = 135,
		ROUTE_TO = 136,
		REPLY_TO = 137,
		LITERAL_fragment = 138,
		LITERAL_crop = 139,
		// "drop-ovl" = 140
		// "no-df" = 141
		// "min-ttl" = 142
		// "max-mss" = 143
		// "random-id" = 144
		FLAGS = 145,
		ICMP_TYPE = 146,
		ICMP_CODE = 147,
		LITERAL_echorep = 148,
		LITERAL_unreach = 149,
		LITERAL_squench = 150,
		LITERAL_redir = 151,
		LITERAL_althost = 152,
		LITERAL_echoreq = 153,
		LITERAL_routeradv = 154,
		LITERAL_routersol = 155,
		LITERAL_timex = 156,
		LITERAL_paramprob = 157,
		LITERAL_timereq = 158,
		LITERAL_timerep = 159,
		LITERAL_inforeq = 160,
		LITERAL_inforep = 161,
		LITERAL_maskreq = 162,
		LITERAL_maskrep = 163,
		LITERAL_trace = 164,
		LITERAL_dataconv = 165,
		LITERAL_mobredir = 166,
		// "ipv6-where" = 167
		// "ipv6-here" = 168
		LITERAL_mobregreq = 169,
		LITERAL_mobregrep = 170,
		LITERAL_photuris = 171,
		// "net-unr" = 172
		// "host-unr" = 173
		// "proto-unr" = 174
		// "port-unr" = 175
		LITERAL_needfrag = 176,
		LITERAL_srcfail = 177,
		// "net-unk" = 178
		// "host-unk" = 179
		LITERAL_isolate = 180,
		// "net-prohib" = 181
		// "host-prohib" = 182
		// "net-tos" = 183
		// "host-tos" = 184
		// "filter-prohib" = 185
		// "host-preced" = 186
		// "cutoff-preced" = 187
		// "redir-net" = 188
		// "redir-host" = 189
		// "redir-tos-net" = 190
		// "redir-tos-host" = 191
		// "normal-adv" = 192
		// "common-adv" = 193
		LITERAL_transit = 194,
		LITERAL_reassemb = 195,
		LITERAL_badhead = 196,
		LITERAL_optmiss = 197,
		LITERAL_badlen = 198,
		// "unknown-ind" = 199
		// "auth-fail" = 200
		// "decrypt-fail" = 201
		ICMP6_TYPE = 202,
		TAGGED = 203,
		TAG = 204,
		KEEP = 205,
		MODULATE = 206,
		SYNPROXY = 207,
		STATE = 208,
		LABEL = 209,
		EXIT = 210,
		QUIT = 211,
		INTRFACE = 212,
		ICMP6 = 213,
		IGRP = 214,
		IPSEC = 215,
		NOS = 216,
		PCP = 217,
		PIM = 218,
		PPTP = 219,
		RIP = 220,
		SNP = 221,
		HOST = 222,
		RANGE = 223,
		LOG_LEVEL_ALERTS = 224,
		LOG_LEVEL_CRITICAL = 225,
		LOG_LEVEL_DEBUGGING = 226,
		LOG_LEVEL_EMERGENCIES = 227,
		LOG_LEVEL_ERRORS = 228,
		LOG_LEVEL_INFORMATIONAL = 229,
		LOG_LEVEL_NOTIFICATIONS = 230,
		LOG_LEVEL_WARNINGS = 231,
		LOG_LEVEL_DISABLE = 232,
		LOG_LEVEL_INACTIVE = 233,
		Whitespace = 234,
		HEX_CONST = 235,
		NUMBER = 236,
		NEG_INT_CONST = 237,
		HEX_DIGIT = 238,
		DIGIT = 239,
		NUM_3DIGIT = 240,
		NUM_HEX_4DIGIT = 241,
		NUMBER_ADDRESS_OR_WORD = 242,
		PIPE_CHAR = 243,
		NUMBER_SIGN = 244,
		PERCENT = 245,
		AMPERSAND = 246,
		APOSTROPHE = 247,
		PLUS = 248,
		DOT = 249,
		SEMICOLON = 250,
		QUESTION = 251,
		COMMERCIAL_AT = 252,
		OPENING_SQUARE = 253,
		CLOSING_SQUARE = 254,
		CARET = 255,
		UNDERLINE = 256,
		TILDE = 257,
		DOUBLE_QUOTE = 258,
		NULL_TREE_LOOKAHEAD = 3
	};
#ifdef __cplusplus
};
#endif
#endif /*INC_PFCfgParserTokenTypes_hpp_*/