#include <stdlib.h>
#include "uc.h"
#include "_cgo_export.h"

uc_err uc_reg_read_batch_helper(uc_engine *handle, int *regs, uint64_t *val_out, int count) {
    if (count <= 0) {
        return UC_ERR_OK;
    }
    void **val_ref = malloc(sizeof(void *) * count);
    if (val_ref == NULL) {
        return UC_ERR_NOMEM;
    }
    int i;
    for (i = 0; i < count; i++) {
        val_ref[i] = (void *)&val_out[i];
    }
    uc_err ret = uc_reg_read_batch(handle, regs, val_ref, count);
    free(val_ref);
    return ret;
}

uc_err uc_reg_write_batch_helper(uc_engine *handle, int *regs, uint64_t *val_in, int count) {
    if (count <= 0) {
        return UC_ERR_OK;
    }
    void **val_ref = malloc(sizeof(void *) * count);
    if (val_ref == NULL) {
        return UC_ERR_NOMEM;
    }
    int i;
    for (i = 0; i < count; i++) {
        val_ref[i] = (void *)&val_in[i];
    }
    uc_err ret = uc_reg_write_batch(handle, regs, (void *const *)val_ref, count);
    free(val_ref);
    return ret;
}

// uc_ctl helpers
uc_err uc_ctl_set_cpu_model_helper(uc_engine *handle, int model) {
    return uc_ctl_set_cpu_model(handle, model);
}

uc_err uc_ctl_get_cpu_model_helper(uc_engine *handle, int *model) {
    return uc_ctl_get_cpu_model(handle, model);
}

uc_err uc_ctl_get_page_size_helper(uc_engine *handle, uint32_t *size) {
    return uc_ctl_get_page_size(handle, size);
}

uc_err uc_ctl_set_page_size_helper(uc_engine *handle, uint32_t size) {
    return uc_ctl_set_page_size(handle, size);
}

uc_err uc_ctl_get_mode_helper(uc_engine *handle, int *mode) {
    return uc_ctl_get_mode(handle, mode);
}

uc_err uc_ctl_get_arch_helper(uc_engine *handle, int *arch) {
    return uc_ctl_get_arch(handle, arch);
}

uc_err uc_ctl_get_timeout_helper(uc_engine *handle, uint64_t *timeout) {
    return uc_ctl_get_timeout(handle, timeout);
}

uc_err uc_ctl_exits_enable_helper(uc_engine *handle) {
    return uc_ctl_exits_enable(handle);
}

uc_err uc_ctl_exits_disable_helper(uc_engine *handle) {
    return uc_ctl_exits_disable(handle);
}

uc_err uc_ctl_set_exits_helper(uc_engine *handle, uint64_t *exits, size_t count) {
    return uc_ctl_set_exits(handle, exits, count);
}

uc_err uc_ctl_get_exits_helper(uc_engine *handle, uint64_t *exits, size_t count) {
    return uc_ctl_get_exits(handle, exits, count);
}

uc_err uc_ctl_get_exits_cnt_helper(uc_engine *handle, size_t *count) {
    return uc_ctl_get_exits_cnt(handle, count);
}

uc_err uc_ctl_flush_tb_helper(uc_engine *handle) {
    return uc_ctl_flush_tb(handle);
}

uc_err uc_ctl_flush_tlb_helper(uc_engine *handle) {
    return uc_ctl_flush_tlb(handle);
}

uc_err uc_ctl_tlb_mode_helper(uc_engine *handle, int mode) {
    return uc_ctl_tlb_mode(handle, mode);
}

uc_err uc_ctl_get_tcg_buffer_size_helper(uc_engine *handle, uint32_t *size) {
    return uc_ctl_get_tcg_buffer_size(handle, size);
}

uc_err uc_ctl_set_tcg_buffer_size_helper(uc_engine *handle, uint32_t size) {
    return uc_ctl_set_tcg_buffer_size(handle, size);
}

uc_err uc_ctl_remove_cache_helper(uc_engine *handle, uint64_t address, uint64_t end) {
    return uc_ctl_remove_cache(handle, address, end);
}

uc_err uc_reg_read_batch_helper128(uc_engine *handle, int *regs, neon_128_t *val_out, int count) {
    if (count <= 0) {
        return UC_ERR_OK;
    }
    void **val_ref = malloc(sizeof(void *) * count);
    if (val_ref == NULL) {
        return UC_ERR_NOMEM;
    }
    int i;
    for (i = 0; i < count; i++) {
        val_ref[i] = (void *)&val_out[i];
    }
    uc_err ret = uc_reg_read_batch(handle, regs, val_ref, count);
    free(val_ref);
    return ret;
}

uc_err uc_reg_write_batch_helper128(uc_engine *handle, int *regs, neon_128_t *val_in, int count) {
    if (count <= 0) {
        return UC_ERR_OK;
    }
    void **val_ref = malloc(sizeof(void *) * count);
    if (val_ref == NULL) {
        return UC_ERR_NOMEM;
    }
    int i;
    for (i = 0; i < count; i++) {
        val_ref[i] = (void *)&val_in[i];
    }
    uc_err ret = uc_reg_write_batch(handle, regs, (void *const *)val_ref, count);
    free(val_ref);
    return ret;
}