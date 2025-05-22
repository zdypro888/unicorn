# unicorn

注意要恢复之前的 unicorn/qemu/target/i386/excp_helper.c

    /* align to page_size */
    pte &= PG_ADDRESS_MASK & ~(page_size - 1);
    page_offset = addr & (page_size - 1);
    /* HACK allow full 64 bit mapping in u64 without paging */
    if (env->cr[0] & CR0_PG_MASK) {
        paddr = get_hphys(cs, pte + page_offset, is_write1, &prot);
    } else {
        paddr = addr;
    }