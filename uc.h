#pragma once
#include <unicorn/unicorn.h>
uc_err uc_reg_read_batch_helper(uc_engine *handle, int *regs, uint64_t *val_out, int count);
uc_err uc_reg_write_batch_helper(uc_engine *handle, int *regs, uint64_t *val_in, int count);
uc_err uc_ctl_set_cpu_model_helper(uc_engine *handle, int model);

typedef struct {
    uint64_t low;
    uint64_t high;
    uint64_t pad_a;
    uint64_t pad_b;
} neon_128_t;
uc_err uc_reg_read_batch_helper128(uc_engine *handle, int *regs, neon_128_t *val_out, int count);
uc_err uc_reg_write_batch_helper128(uc_engine *handle, int *regs, neon_128_t *val_in, int count);
