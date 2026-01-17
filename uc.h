#pragma once
#include <unicorn/unicorn.h>
uc_err uc_reg_read_batch_helper(uc_engine *handle, int *regs, uint64_t *val_out, int count);
uc_err uc_reg_write_batch_helper(uc_engine *handle, int *regs, uint64_t *val_in, int count);

// uc_ctl helpers
uc_err uc_ctl_set_cpu_model_helper(uc_engine *handle, int model);
uc_err uc_ctl_get_cpu_model_helper(uc_engine *handle, int *model);
uc_err uc_ctl_get_page_size_helper(uc_engine *handle, uint32_t *size);
uc_err uc_ctl_set_page_size_helper(uc_engine *handle, uint32_t size);
uc_err uc_ctl_get_mode_helper(uc_engine *handle, int *mode);
uc_err uc_ctl_get_arch_helper(uc_engine *handle, int *arch);
uc_err uc_ctl_get_timeout_helper(uc_engine *handle, uint64_t *timeout);
uc_err uc_ctl_exits_enable_helper(uc_engine *handle);
uc_err uc_ctl_exits_disable_helper(uc_engine *handle);
uc_err uc_ctl_set_exits_helper(uc_engine *handle, uint64_t *exits, size_t count);
uc_err uc_ctl_get_exits_helper(uc_engine *handle, uint64_t *exits, size_t count);
uc_err uc_ctl_get_exits_cnt_helper(uc_engine *handle, size_t *count);
uc_err uc_ctl_flush_tb_helper(uc_engine *handle);
uc_err uc_ctl_flush_tlb_helper(uc_engine *handle);
uc_err uc_ctl_tlb_mode_helper(uc_engine *handle, int mode);
uc_err uc_ctl_get_tcg_buffer_size_helper(uc_engine *handle, uint32_t *size);
uc_err uc_ctl_set_tcg_buffer_size_helper(uc_engine *handle, uint32_t size);
uc_err uc_ctl_remove_cache_helper(uc_engine *handle, uint64_t address, uint64_t end);

typedef struct {
    uint64_t low;
    uint64_t high;
    uint64_t pad_a;
    uint64_t pad_b;
} neon_128_t;
uc_err uc_reg_read_batch_helper128(uc_engine *handle, int *regs, neon_128_t *val_out, int count);
uc_err uc_reg_write_batch_helper128(uc_engine *handle, int *regs, neon_128_t *val_in, int count);
