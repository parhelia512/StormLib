//
// This compound source is here for reducing the long build time
// of the entire StormLib library
//

#pragma warning(disable:4334)             // warning C4334: '<<' : result of 32-bit shift implicitly converted to 64 bits (was 64-bit shift intended?)

#include ".\libtommath\bn_fast_mp_invmod.c"
#include ".\libtommath\bn_fast_mp_montgomery_reduce.c"
#include ".\libtommath\bn_fast_s_mp_mul_digs.c"
#include ".\libtommath\bn_fast_s_mp_mul_high_digs.c"
#include ".\libtommath\bn_fast_s_mp_sqr.c"
#include ".\libtommath\bn_mp_2expt.c"
#include ".\libtommath\bn_mp_abs.c"
#include ".\libtommath\bn_mp_add.c"
#include ".\libtommath\bn_mp_add_d.c"
#include ".\libtommath\bn_mp_addmod.c"
#include ".\libtommath\bn_mp_and.c"
#include ".\libtommath\bn_mp_clamp.c"
#include ".\libtommath\bn_mp_clear.c"
#include ".\libtommath\bn_mp_clear_multi.c"
#include ".\libtommath\bn_mp_cmp.c"
#include ".\libtommath\bn_mp_cmp_d.c"
#include ".\libtommath\bn_mp_cmp_mag.c"
#include ".\libtommath\bn_mp_cnt_lsb.c"
#include ".\libtommath\bn_mp_copy.c"
#include ".\libtommath\bn_mp_count_bits.c"
#include ".\libtommath\bn_mp_div.c"
#include ".\libtommath\bn_mp_div_2.c"
#include ".\libtommath\bn_mp_div_2d.c"
#include ".\libtommath\bn_mp_div_3.c"
#include ".\libtommath\bn_mp_div_d.c"
#include ".\libtommath\bn_mp_dr_is_modulus.c"
#include ".\libtommath\bn_mp_dr_reduce.c"
#include ".\libtommath\bn_mp_dr_setup.c"
#include ".\libtommath\bn_mp_exch.c"
#include ".\libtommath\bn_mp_expt_d.c"
#include ".\libtommath\bn_mp_exptmod.c"
#include ".\libtommath\bn_mp_exptmod_fast.c"
#include ".\libtommath\bn_mp_exteuclid.c"
#include ".\libtommath\bn_mp_fread.c"
#include ".\libtommath\bn_mp_fwrite.c"
#include ".\libtommath\bn_mp_gcd.c"
#include ".\libtommath\bn_mp_get_int.c"
#include ".\libtommath\bn_mp_grow.c"
#include ".\libtommath\bn_mp_init.c"
#include ".\libtommath\bn_mp_init_copy.c"
#include ".\libtommath\bn_mp_init_multi.c"
#include ".\libtommath\bn_mp_init_set.c"
#include ".\libtommath\bn_mp_init_set_int.c"
#include ".\libtommath\bn_mp_init_size.c"
#include ".\libtommath\bn_mp_invmod.c"
#include ".\libtommath\bn_mp_invmod_slow.c"
#include ".\libtommath\bn_mp_is_square.c"
#include ".\libtommath\bn_mp_jacobi.c"
#include ".\libtommath\bn_mp_karatsuba_mul.c"
#include ".\libtommath\bn_mp_karatsuba_sqr.c"
#include ".\libtommath\bn_mp_lcm.c"
#include ".\libtommath\bn_mp_lshd.c"
#include ".\libtommath\bn_mp_mod.c"
#include ".\libtommath\bn_mp_mod_2d.c"
#include ".\libtommath\bn_mp_mod_d.c"
#include ".\libtommath\bn_mp_montgomery_calc_normalization.c"
#include ".\libtommath\bn_mp_montgomery_reduce.c"
#include ".\libtommath\bn_mp_montgomery_setup.c"
#include ".\libtommath\bn_mp_mul.c"
#include ".\libtommath\bn_mp_mul_2.c"
#include ".\libtommath\bn_mp_mul_2d.c"
#include ".\libtommath\bn_mp_mul_d.c"
#include ".\libtommath\bn_mp_mulmod.c"
#include ".\libtommath\bn_mp_n_root.c"
#include ".\libtommath\bn_mp_neg.c"
#include ".\libtommath\bn_mp_or.c"
#include ".\libtommath\bn_mp_prime_fermat.c"
#include ".\libtommath\bn_mp_prime_is_divisible.c"
#include ".\libtommath\bn_mp_prime_is_prime.c"
#include ".\libtommath\bn_mp_prime_miller_rabin.c"
#include ".\libtommath\bn_mp_prime_next_prime.c"
#include ".\libtommath\bn_mp_prime_rabin_miller_trials.c"
#include ".\libtommath\bn_mp_prime_random_ex.c"
#include ".\libtommath\bn_mp_radix_size.c"
#include ".\libtommath\bn_mp_radix_smap.c"
#include ".\libtommath\bn_mp_rand.c"
#include ".\libtommath\bn_mp_read_radix.c"
#include ".\libtommath\bn_mp_read_signed_bin.c"
#include ".\libtommath\bn_mp_read_unsigned_bin.c"
#include ".\libtommath\bn_mp_reduce.c"
#include ".\libtommath\bn_mp_reduce_2k.c"
#include ".\libtommath\bn_mp_reduce_2k_l.c"
#include ".\libtommath\bn_mp_reduce_2k_setup.c"
#include ".\libtommath\bn_mp_reduce_2k_setup_l.c"
#include ".\libtommath\bn_mp_reduce_is_2k.c"
#include ".\libtommath\bn_mp_reduce_is_2k_l.c"
#include ".\libtommath\bn_mp_reduce_setup.c"
#include ".\libtommath\bn_mp_rshd.c"
#include ".\libtommath\bn_mp_set.c"
#include ".\libtommath\bn_mp_set_int.c"
#include ".\libtommath\bn_mp_shrink.c"
#include ".\libtommath\bn_mp_signed_bin_size.c"
#include ".\libtommath\bn_mp_sqr.c"
#include ".\libtommath\bn_mp_sqrmod.c"
#include ".\libtommath\bn_mp_sqrt.c"
#include ".\libtommath\bn_mp_sub.c"
#include ".\libtommath\bn_mp_sub_d.c"
#include ".\libtommath\bn_mp_submod.c"
#include ".\libtommath\bn_mp_to_signed_bin.c"
#include ".\libtommath\bn_mp_to_signed_bin_n.c"
#include ".\libtommath\bn_mp_to_unsigned_bin.c"
#include ".\libtommath\bn_mp_to_unsigned_bin_n.c"
#include ".\libtommath\bn_mp_toom_mul.c"
#include ".\libtommath\bn_mp_toom_sqr.c"
#include ".\libtommath\bn_mp_toradix.c"
#include ".\libtommath\bn_mp_toradix_n.c"
#include ".\libtommath\bn_mp_unsigned_bin_size.c"
#include ".\libtommath\bn_mp_xor.c"
#include ".\libtommath\bn_mp_zero.c"
#include ".\libtommath\bn_prime_tab.c"
#include ".\libtommath\bn_reverse.c"
#include ".\libtommath\bn_s_mp_add.c"
#include ".\libtommath\bn_s_mp_exptmod.c"
#include ".\libtommath\bn_s_mp_mul_digs.c"
#include ".\libtommath\bn_s_mp_mul_high_digs.c"
#include ".\libtommath\bn_s_mp_sqr.c"
#include ".\libtommath\bn_s_mp_sub.c"
#include ".\libtommath\bncore.c"
