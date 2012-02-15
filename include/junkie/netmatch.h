// -*- c-basic-offset: 4; c-backslash-column: 79; indent-tabs-mode: nil -*-
// vim:sw=4 ts=4 sts=4 expandtab
#ifndef NETMATCH_H_111229
#define NETMATCH_H_111229

#include <stdint.h>
#include <junkie/proto/proto.h>

struct npc_register {
    uintptr_t value;
    size_t size;    // 0 if value is unboxed, malloced size otherwise (may be > to required size)
};

typedef bool npc_match_fn(struct proto_info const *info, struct npc_register *regfile);
typedef void npc_action_fn(struct npc_register *regfile);

#endif
