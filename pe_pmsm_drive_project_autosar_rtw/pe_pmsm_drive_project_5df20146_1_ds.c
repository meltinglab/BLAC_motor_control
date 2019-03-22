/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'pe_pmsm_drive_project/Solver Configuration'.
 */
/* pe_pmsm_drive_project_5df20146_1_ds.c - body for module pe_pmsm_drive_project_5df20146_1_ds */

#include "ne_ds.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_zc.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_tdxy_p.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_obs_all.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_obs_act.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_obs_exp.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_log.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_dxy_p.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_dnf_p.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_tdxf_p.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_a_p.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_dtf.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_dxf_p.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_dxf.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_mode.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_f.h"
#include "pe_pmsm_drive_project_5df20146_1_ds.h"
#include "ssc_ml_fun.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_external_struct.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_sys_struct.h"
#include "pe_pmsm_drive_project_5df20146_1_ds_externals.h"

static sint32 ds_m_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static sint32 ds_m(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static sint32 ds_vmm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static sint32 ds_dxm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_dxm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static sint32 ds_dum_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_dum(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static sint32 ds_dtm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_dtm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static sint32 ds_a(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static sint32 ds_b_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static sint32 ds_b(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static sint32 ds_c_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static sint32 ds_c(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static sint32 ds_vmf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static sint32 ds_slf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static sint32 ds_slf0(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static sint32 ds_duf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_duf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static sint32 ds_dtf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_ddf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_ddf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static sint32 ds_tduf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_dnf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static sint32 ds_dnf_v_x(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static sint32 ds_ic(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static sint32 ds_icr(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static sint32 ds_icr_im(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_icr_id(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_dxicr(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_dxicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static sint32 ds_tduicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_mduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_mdxy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_tduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_y(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static sint32 ds_dxy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static sint32 ds_duy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_duy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static sint32 ds_dty_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_dty(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static sint32 ds_cache_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static sint32 ds_cache_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static sint32 ds_update_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_update_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_sfo(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static sint32 ds_sfp(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static sint32 ds_init_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_init_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_assert(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_passert(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static sint32 ds_del_t(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_del_v(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_del_v0(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_del_tmax(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_dxdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_dxdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_dudelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_dudelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_dtdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_dtdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_dp_l(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static sint32 ds_dp_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static sint32 ds_dp_j(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static sint32 ds_dp_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static sint32 ds_qx(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static sint32 ds_qu(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static sint32 ds_qt(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static sint32 ds_q1(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static sint32 ds_qx_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static sint32 ds_qu_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static sint32 ds_qt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static sint32 ds_q1_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static sint32 ds_var_tol(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static sint32 ds_eq_tol(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static sint32 ds_lv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static sint32 ds_slv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_a_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_c_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_c(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static void release_reference(NeDynamicSystem *ds);
static void get_reference(NeDynamicSystem *ds);
static NeDynamicSystem *diagnostics(const NeDynamicSystem *ds);
static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out);
static NeEquationData s_equation_data[23] = { { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "pe_pmsm_drive_project/Battery", 2U, 0U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "pe_pmsm_drive_project/Encoder/Ideal Rotational Motion Sensor", 2U, 2U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "pe_pmsm_drive_project/Inertia", 2U, 4U, TRUE, 1.0, "1", }, { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME,
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 2U, 6U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 8U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 9U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 10U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 11U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 12U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 13U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 14U, FALSE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 3U, 15U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 3U, 18U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)", 3U, 21U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)", 3U, 24U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 3U, 27U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 3U, 30U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)", 3U, 33U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)", 3U, 36U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 3U, 39U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 3U, 42U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)", 3U, 45U, TRUE, 1.0,
    "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)", 3U, 48U, TRUE, 1.0,
    "1", } };

static NeVariableData s_variable_data[23] = { { "Battery.charge", 0U, 0,
    "pe_pmsm_drive_project/Battery", 1.0, "1", 0.0, TRUE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Charge", }, { "Inertia.w", 0U, 0,
    "pe_pmsm_drive_project/Inertia", 1.0, "1", 0.0, TRUE, 1U, 1U,
    NE_INIT_MODE_MANDATORY, "Rotational velocity", }, {
    "Encoder.Ideal_Rotational_Motion_Sensor.phi", 0U, 0,
    "pe_pmsm_drive_project/Encoder/Ideal Rotational Motion Sensor", 1.0, "1",
    0.0, TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Angle", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.angular_position_diff", 0U,
    0, "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1.0, "1", 0.0,
    TRUE, 1U, 1U, NE_INIT_MODE_NONE, "angular_position_diff", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_0", 0U, 0,
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1.0, "1", 0.0,
    TRUE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Zero-sequence current", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_d", 0U, 0,
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1.0, "1", 0.0,
    TRUE, 1U, 1U, NE_INIT_MODE_NONE, "D-axis current", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_q", 0U, 0,
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1.0, "1", 0.0,
    TRUE, 1U, 1U, NE_INIT_MODE_NONE, "Q-axis current", }, {
    "Three_phase_inverter.IGBT_AH.diode.i", 0U, 0,
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 1.0, "1", 0.0, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "i", }, {
    "Three_phase_inverter.IGBT_AH.ideal_switch.i", 0U, 0,
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 1.0, "1", 0.0, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "i", }, { "Three_phase_inverter.IGBT_BH.diode.i",
    0U, 0, "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "i", }, {
    "Three_phase_inverter.IGBT_BH.ideal_switch.i", 0U, 0,
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 1.0, "1", 0.0, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "i", }, { "Three_phase_inverter.IGBT_CH.diode.i",
    0U, 0, "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "i", }, {
    "Three_phase_inverter.IGBT_CH.ideal_switch.i", 0U, 0,
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 1.0, "1", 0.0, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "i", }, { "Gmin.n.v", 0U, 1,
    "pe_pmsm_drive_project/Gmin", 1.0, "1", 0.0, FALSE, 1U, 1U,
    NE_INIT_MODE_NONE, "Voltage", }, {
    "Permanent_Magnet_Synchronous_Motor.phase_splitter.i_b", 0U, 0,
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "i_b", }, {
    "Permanent_Magnet_Synchronous_Motor.phase_splitter.i_c", 0U, 0,
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "i_c", }, {
    "Three_phase_inverter.IGBT_AH.E.v", 0U, 1,
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 1.0, "1", 0.0, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Three_phase_inverter.IGBT_BH.E.v", 0U, 1,
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 1.0, "1", 0.0, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Three_phase_inverter.IGBT_CH.E.v", 0U, 1,
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 1.0, "1", 0.0, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.electrical_torque", 0U, 0,
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1.0, "1", 0.0,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Electrical torque", }, {
    "Three_phase_inverter.IGBT_AL.ideal_switch.i", 0U, 0,
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)", 1.0, "1", 0.0, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "i", }, {
    "Three_phase_inverter.IGBT_BL.ideal_switch.i", 0U, 0,
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)", 1.0, "1", 0.0, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "i", }, {
    "Three_phase_inverter.IGBT_CL.ideal_switch.i", 0U, 0,
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)", 1.0, "1", 0.0, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "i", } };

static NeVariableData *s_discrete_data = NULL;
static NeObservableData s_observable_data[185] = { { "Battery.charge",
    "pe_pmsm_drive_project/Battery", 1U, 1U, "hr*A", 1.0, "C",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Charge", }, { "Battery.i",
    "pe_pmsm_drive_project/Battery", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current (positive in)", }, {
    "Battery.n.v", "pe_pmsm_drive_project/Battery", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Battery.num_cycles",
    "pe_pmsm_drive_project/Battery", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Discharge cycles", }, { "Battery.p.v",
    "pe_pmsm_drive_project/Battery", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Battery.power_dissipated", "pe_pmsm_drive_project/Battery", 1U, 1U, "W",
    1.0, "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, { "Battery.v",
    "pe_pmsm_drive_project/Battery", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Battery.vrc1",
    "pe_pmsm_drive_project/Battery", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc1", }, { "Battery.vrc2",
    "pe_pmsm_drive_project/Battery", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc2", }, { "Battery.vrc3",
    "pe_pmsm_drive_project/Battery", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc3", }, { "Battery.vrc4",
    "pe_pmsm_drive_project/Battery", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc4", }, { "Battery.vrc5",
    "pe_pmsm_drive_project/Battery", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "vrc5", }, { "Current_Sensor.I",
    "pe_pmsm_drive_project/Current Sensor", 1U, 3U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, { "Current_Sensor.I_output",
    "pe_pmsm_drive_project/Current Sensor", 1U, 3U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, { "Current_Sensor.N1.V",
    "pe_pmsm_drive_project/Current Sensor", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Current_Sensor.N2.V",
    "pe_pmsm_drive_project/Current Sensor", 1U, 3U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, { "Electrical_Reference.V.v",
    "pe_pmsm_drive_project/Electrical Reference", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Electrical_Reference1.V.v", "pe_pmsm_drive_project/Electrical Reference1",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Encoder.Ideal_Rotational_Motion_Sensor.A",
    "pe_pmsm_drive_project/Encoder/Ideal Rotational Motion Sensor", 1U, 1U,
    "rad", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "A", }, {
    "Encoder.Ideal_Rotational_Motion_Sensor.C.w",
    "pe_pmsm_drive_project/Encoder/Ideal Rotational Motion Sensor", 1U, 1U,
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Encoder.Ideal_Rotational_Motion_Sensor.R.w",
    "pe_pmsm_drive_project/Encoder/Ideal Rotational Motion Sensor", 1U, 1U,
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Encoder.Ideal_Rotational_Motion_Sensor.W",
    "pe_pmsm_drive_project/Encoder/Ideal Rotational Motion Sensor", 1U, 1U,
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "W", }, {
    "Encoder.Ideal_Rotational_Motion_Sensor.phi",
    "pe_pmsm_drive_project/Encoder/Ideal Rotational Motion Sensor", 1U, 1U,
    "deg", 1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE,
    TRUE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angle", }, {
    "Encoder.Ideal_Rotational_Motion_Sensor.t",
    "pe_pmsm_drive_project/Encoder/Ideal Rotational Motion Sensor", 1U, 1U,
    "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Encoder.Ideal_Rotational_Motion_Sensor.w",
    "pe_pmsm_drive_project/Encoder/Ideal Rotational Motion Sensor", 1U, 1U,
    "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, {
    "Encoder.Ideal_Torque_Sensor.C.w",
    "pe_pmsm_drive_project/Encoder/Ideal Torque Sensor", 1U, 1U, "rad/s", 1.0,
    "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Encoder.Ideal_Torque_Sensor.R.w",
    "pe_pmsm_drive_project/Encoder/Ideal Torque Sensor", 1U, 1U, "rad/s", 1.0,
    "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Encoder.Ideal_Torque_Sensor.T",
    "pe_pmsm_drive_project/Encoder/Ideal Torque Sensor", 1U, 1U, "N*m", 1.0,
    "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "T", }, { "Encoder.Ideal_Torque_Sensor.t",
    "pe_pmsm_drive_project/Encoder/Ideal Torque Sensor", 1U, 1U, "N*m", 1.0,
    "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Encoder.Ideal_Torque_Sensor.w",
    "pe_pmsm_drive_project/Encoder/Ideal Torque Sensor", 1U, 1U, "rad/s", 1.0,
    "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, { "Encoder.x1L.w",
    "pe_pmsm_drive_project/Encoder", 1U, 1U, "rad/s", 1.0, "1/s",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Encoder.x1R.w", "pe_pmsm_drive_project/Encoder", 1U, 1U, "rad/s", 1.0,
    "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, {
    "Encoder.x2L.w", "pe_pmsm_drive_project/Encoder", 1U, 1U, "rad/s", 1.0,
    "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Rotational velocity", }, { "Gmin.i",
    "pe_pmsm_drive_project/Gmin", 1U, 1U, "A", 1.0, "A", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE,
    "Current", }, { "Gmin.n.v", "pe_pmsm_drive_project/Gmin", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Gmin.p.v",
    "pe_pmsm_drive_project/Gmin", 1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL,
    NE_INIT_MODE_NONE, TRUE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage",
  }, { "Gmin.v", "pe_pmsm_drive_project/Gmin", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "Ideal_Torque_Source.C.w",
    "pe_pmsm_drive_project/Ideal Torque Source", 1U, 1U, "rad/s", 1.0, "1/s",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Torque_Source.R.w", "pe_pmsm_drive_project/Ideal Torque Source", 1U,
    1U, "rad/s", 1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Ideal_Torque_Source.S", "pe_pmsm_drive_project/Ideal Torque Source", 1U, 1U,
    "N*m", 1.0, "N*m", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "S", }, { "Ideal_Torque_Source.t",
    "pe_pmsm_drive_project/Ideal Torque Source", 1U, 1U, "N*m", 1.0, "N*m",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, { "Ideal_Torque_Source.w",
    "pe_pmsm_drive_project/Ideal Torque Source", 1U, 1U, "rad/s", 1.0, "1/s",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Angular velocity", }, { "Inertia.I.w",
    "pe_pmsm_drive_project/Inertia", 1U, 1U, "rad/s", 1.0, "1/s",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, { "Inertia.t",
    "pe_pmsm_drive_project/Inertia", 1U, 1U, "N*m", 1.0, "N*m",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, { "Inertia.w",
    "pe_pmsm_drive_project/Inertia", 1U, 1U, "rad/s", 1.0, "1/s",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Mechanical_Rotational_Reference1.W.w",
    "pe_pmsm_drive_project/Mechanical Rotational Reference1", 1U, 1U, "rad/s",
    1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Permanent_Magnet_Synchronous_Motor.C.w",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "rad/s",
    1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Permanent_Magnet_Synchronous_Motor.N.V",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 3U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Permanent_Magnet_Synchronous_Motor.R.w",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "rad/s",
    1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Permanent_Magnet_Synchronous_Motor.angular_position",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "rad",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_MANDATORY, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotor angle", }, {
    "Permanent_Magnet_Synchronous_Motor.angular_velocity",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "rpm",
    1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotor speed", }, {
    "Permanent_Magnet_Synchronous_Motor.i_d",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "D-axis current", }, {
    "Permanent_Magnet_Synchronous_Motor.i_q",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Q-axis current", }, {
    "Permanent_Magnet_Synchronous_Motor.n.v",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Permanent_Magnet_Synchronous_Motor.phase_splitter.I",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 3U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Permanent_Magnet_Synchronous_Motor.phase_splitter.N.V",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 3U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Permanent_Magnet_Synchronous_Motor.phase_splitter.a.v",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Permanent_Magnet_Synchronous_Motor.phase_splitter.b.v",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Permanent_Magnet_Synchronous_Motor.phase_splitter.c.v",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Permanent_Magnet_Synchronous_Motor.phase_splitter.i_a",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Permanent_Magnet_Synchronous_Motor.phase_splitter.i_b",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Permanent_Magnet_Synchronous_Motor.phase_splitter.i_c",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.C.w",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "rad/s",
    1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.R.w",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "rad/s",
    1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotational velocity", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.a.v",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.angular_position",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "deg",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotor angle", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.angular_position_diff",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "rad",
    1.0, "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "angular_position_diff", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.angular_velocity",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "rpm",
    1.0, "1/s", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Rotor speed", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.b.v",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.c.v",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.electrical_torque",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "N*m",
    1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Electrical torque", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_0",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Zero-sequence current", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_a",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_b",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_c",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_d",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "D-axis current", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_n",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_n", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.i_q",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Q-axis current", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.n.v",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.torque",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "N*m",
    1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.v_a",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v_a", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.v_b",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v_b", }, {
    "Permanent_Magnet_Synchronous_Motor.pm_dq0_Xabc.v_c",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v_c", }, {
    "Permanent_Magnet_Synchronous_Motor.torque",
    "pe_pmsm_drive_project/Permanent Magnet Synchronous Motor", 1U, 1U, "N*m",
    1.0, "N*m", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Torque", }, {
    "Three_phase_inverter.IGBT_AH.C.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_AH.E.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_AH.G",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, {
    "Three_phase_inverter.IGBT_AH.diode.i",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_phase_inverter.IGBT_AH.diode.n.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_AH.diode.p.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_AH.diode.power_dissipated",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_phase_inverter.IGBT_AH.diode.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_phase_inverter.IGBT_AH.ideal_switch.G",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Three_phase_inverter.IGBT_AH.ideal_switch.i",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_phase_inverter.IGBT_AH.ideal_switch.isOn",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Three_phase_inverter.IGBT_AH.ideal_switch.n.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_AH.ideal_switch.p.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_AH.ideal_switch.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_phase_inverter.IGBT_AH.ideal_switch.power_dissipated",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_phase_inverter.IGBT_AL.C.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_AL.E.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_AL.G",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, {
    "Three_phase_inverter.IGBT_AL.diode.i",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_phase_inverter.IGBT_AL.diode.n.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_AL.diode.p.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_AL.diode.power_dissipated",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_phase_inverter.IGBT_AL.diode.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_phase_inverter.IGBT_AL.ideal_switch.G",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Three_phase_inverter.IGBT_AL.ideal_switch.i",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_phase_inverter.IGBT_AL.ideal_switch.isOn",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Three_phase_inverter.IGBT_AL.ideal_switch.n.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_AL.ideal_switch.p.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_AL.ideal_switch.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_phase_inverter.IGBT_AL.ideal_switch.power_dissipated",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_phase_inverter.IGBT_BH.C.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_BH.E.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_BH.G",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, {
    "Three_phase_inverter.IGBT_BH.diode.i",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_phase_inverter.IGBT_BH.diode.n.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_BH.diode.p.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_BH.diode.power_dissipated",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_phase_inverter.IGBT_BH.diode.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_phase_inverter.IGBT_BH.ideal_switch.G",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Three_phase_inverter.IGBT_BH.ideal_switch.i",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_phase_inverter.IGBT_BH.ideal_switch.isOn",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Three_phase_inverter.IGBT_BH.ideal_switch.n.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_BH.ideal_switch.p.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_BH.ideal_switch.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_phase_inverter.IGBT_BH.ideal_switch.power_dissipated",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_phase_inverter.IGBT_BL.C.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_BL.E.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_BL.G",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, {
    "Three_phase_inverter.IGBT_BL.diode.i",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_phase_inverter.IGBT_BL.diode.n.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_BL.diode.p.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_BL.diode.power_dissipated",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_phase_inverter.IGBT_BL.diode.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_phase_inverter.IGBT_BL.ideal_switch.G",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Three_phase_inverter.IGBT_BL.ideal_switch.i",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_phase_inverter.IGBT_BL.ideal_switch.isOn",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Three_phase_inverter.IGBT_BL.ideal_switch.n.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_BL.ideal_switch.p.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_BL.ideal_switch.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_phase_inverter.IGBT_BL.ideal_switch.power_dissipated",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_phase_inverter.IGBT_CH.C.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_CH.E.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_CH.G",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, {
    "Three_phase_inverter.IGBT_CH.diode.i",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_phase_inverter.IGBT_CH.diode.n.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_CH.diode.p.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_CH.diode.power_dissipated",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_phase_inverter.IGBT_CH.diode.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_phase_inverter.IGBT_CH.ideal_switch.G",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Three_phase_inverter.IGBT_CH.ideal_switch.i",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_phase_inverter.IGBT_CH.ideal_switch.isOn",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Three_phase_inverter.IGBT_CH.ideal_switch.n.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_CH.ideal_switch.p.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_CH.ideal_switch.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_phase_inverter.IGBT_CH.ideal_switch.power_dissipated",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_phase_inverter.IGBT_CL.C.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_CL.E.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_CL.G",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, {
    "Three_phase_inverter.IGBT_CL.diode.i",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_phase_inverter.IGBT_CL.diode.n.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_CL.diode.p.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_CL.diode.power_dissipated",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_phase_inverter.IGBT_CL.diode.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_phase_inverter.IGBT_CL.ideal_switch.G",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "Three_phase_inverter.IGBT_CL.ideal_switch.i",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)", 1U, 1U, "A", 1.0,
    "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "Three_phase_inverter.IGBT_CL.ideal_switch.isOn",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)", 1U, 1U, "1", 1.0,
    "1", NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "Three_phase_inverter.IGBT_CL.ideal_switch.n.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_CL.ideal_switch.p.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.IGBT_CL.ideal_switch.v",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "Three_phase_inverter.IGBT_CL.ideal_switch.power_dissipated",
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)", 1U, 1U, "W", 1.0,
    "kW", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "Three_phase_inverter.Phase_Splitter.I",
    "pe_pmsm_drive_project/Three-phase inverter/Phase Splitter", 1U, 3U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "I", }, {
    "Three_phase_inverter.Phase_Splitter.N.V",
    "pe_pmsm_drive_project/Three-phase inverter/Phase Splitter", 1U, 3U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "Three_phase_inverter.Phase_Splitter.a.v",
    "pe_pmsm_drive_project/Three-phase inverter/Phase Splitter", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.Phase_Splitter.b.v",
    "pe_pmsm_drive_project/Three-phase inverter/Phase Splitter", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.Phase_Splitter.c.v",
    "pe_pmsm_drive_project/Three-phase inverter/Phase Splitter", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "Three_phase_inverter.Phase_Splitter.i_a",
    "pe_pmsm_drive_project/Three-phase inverter/Phase Splitter", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_a", }, {
    "Three_phase_inverter.Phase_Splitter.i_b",
    "pe_pmsm_drive_project/Three-phase inverter/Phase Splitter", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_b", }, {
    "Three_phase_inverter.Phase_Splitter.i_c",
    "pe_pmsm_drive_project/Three-phase inverter/Phase Splitter", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i_c", }, { "Three_phase_inverter.x0.v",
    "pe_pmsm_drive_project/Three-phase inverter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Three_phase_inverter.x1.v", "pe_pmsm_drive_project/Three-phase inverter",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "Three_phase_inverter.x2.V", "pe_pmsm_drive_project/Three-phase inverter",
    1U, 3U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "V", } };

static NeModeData *s_major_mode_data = NULL;
static NeZCData s_zc_data[18] = { {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 1U, 0U,
    "Three_phase_inverter.IGBT_AH.ideal_switch",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_TRUE, }, { "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)",
    1U, 1U, "Three_phase_inverter.IGBT_AL.ideal_switch",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_TRUE, }, { "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)",
    1U, 2U, "Three_phase_inverter.IGBT_BH.ideal_switch",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_TRUE, }, { "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)",
    1U, 3U, "Three_phase_inverter.IGBT_BL.ideal_switch",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_TRUE, }, { "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)",
    1U, 4U, "Three_phase_inverter.IGBT_CH.ideal_switch",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_TRUE, }, { "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)",
    1U, 5U, "Three_phase_inverter.IGBT_CL.ideal_switch",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_TRUE, }, { "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)",
    1U, 6U, "Three_phase_inverter.IGBT_AH.diode",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)", 1U, 7U,
    "Three_phase_inverter.IGBT_AL.diode",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 1U, 8U,
    "Three_phase_inverter.IGBT_BH.diode",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)", 1U, 9U,
    "Three_phase_inverter.IGBT_BL.diode",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 1U, 10U,
    "Three_phase_inverter.IGBT_CH.diode",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)", 1U, 11U,
    "Three_phase_inverter.IGBT_CL.diode",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 1U, 12U,
    "Three_phase_inverter.IGBT_AH.ideal_switch",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)", 1U, 13U,
    "Three_phase_inverter.IGBT_AL.ideal_switch",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 1U, 14U,
    "Three_phase_inverter.IGBT_BH.ideal_switch",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)", 1U, 15U,
    "Three_phase_inverter.IGBT_BL.ideal_switch",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 1U, 16U,
    "Three_phase_inverter.IGBT_CH.ideal_switch",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_FALSE, }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)", 1U, 17U,
    "Three_phase_inverter.IGBT_CL.ideal_switch",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    NE_ZC_TYPE_FALSE, } };

static NeRange s_range[18] = { {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData s_assert_data[14] = { { "pe_pmsm_drive_project/Battery", 1U,
    0U, "Battery",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/elec/shared/m/+elec/+sources/battery.sscp",
    TRUE,
    "In power, the exponent should be positive when the base is equal to zero. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireExponentPositive", }, {
    "pe_pmsm_drive_project/Battery", 1U, 1U, "Battery",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/elec/shared/m/+elec/+sources/battery.sscp",
    TRUE,
    "In power, the base should be nonnegative when the exponent is not an integer. This may become error in future releases.",
    "physmod:common:mf:core:asserts:RequireBaseNonnegative", }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 1U, 2U,
    "Three_phase_inverter.IGBT_AH.diode",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(H)", 1U, 3U,
    "Three_phase_inverter.IGBT_AH.ideal_switch",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)", 1U, 4U,
    "Three_phase_inverter.IGBT_AL.diode",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT A(L)", 1U, 5U,
    "Three_phase_inverter.IGBT_AL.ideal_switch",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 1U, 6U,
    "Three_phase_inverter.IGBT_BH.diode",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(H)", 1U, 7U,
    "Three_phase_inverter.IGBT_BH.ideal_switch",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)", 1U, 8U,
    "Three_phase_inverter.IGBT_BL.diode",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT B(L)", 1U, 9U,
    "Three_phase_inverter.IGBT_BL.ideal_switch",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 1U, 10U,
    "Three_phase_inverter.IGBT_CH.diode",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(H)", 1U, 11U,
    "Three_phase_inverter.IGBT_CH.ideal_switch",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)", 1U, 12U,
    "Three_phase_inverter.IGBT_CL.diode",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", }, {
    "pe_pmsm_drive_project/Three-phase inverter/IGBT C(L)", 1U, 13U,
    "Three_phase_inverter.IGBT_CL.ideal_switch",
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:core:asserts:RequireDenominatorNonzero", } };

static NeRange s_assert_range[14] = { {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/elec/shared/m/+elec/+sources/battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/elec/shared/m/+elec/+sources/battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData *s_param_assert_data = NULL;
static NeRange *s_param_assert_range = NULL;
static NeRange s_equation_range[51] = { {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/elec/shared/m/+elec/+sources/battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/elec/shared/m/+elec/+sources/battery.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    42U, 5U, 42U, 12U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc",
    42U, 9U, 42U, 17U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 5U, 31U, 21U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc",
    31U, 20U, 31U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+machines/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+machines/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+machines/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+machines/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+machines/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+machines/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+machines/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+machines/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+machines/+pm_rotor/+pmsm/Xabc.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/diode.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2018b/toolbox/physmod/pe/library/m/+pe/+semiconductors/+fundamental/+igbt/igbt_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeParameterData *s_logical_parameter_data = NULL;
static NeParameterData *s_integer_parameter_data = NULL;
static NeParameterData *s_index_parameter_data = NULL;
static NeParameterData *s_real_parameter_data = NULL;
static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM_P.mNumCol = 23;
  out->mM_P.mNumRow = 23;
  out->mM_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    24);
  out->mM_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    7);
  return out;
}

static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM.mN = 7;
  out->mM.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 7);
  return out;
}

static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMM.mN = 7;
  out->mVMM.mX = (boolean *) allocator->mCallocFcn(allocator, sizeof(boolean),
    7);
  return out;
}

static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM_P.mNumCol = 23;
  out->mDXM_P.mNumRow = 7;
  out->mDXM_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    24);
  out->mDXM_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM.mN = 0;
  out->mDXM.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM_P.mNumCol = 7;
  out->mDUM_P.mNumRow = 7;
  out->mDUM_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    8);
  out->mDUM_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM.mN = 0;
  out->mDUM.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM_P.mNumCol = 1;
  out->mDTM_P.mNumRow = 7;
  out->mDTM_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    2);
  out->mDTM_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM.mN = 0;
  out->mDTM.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 0);
  return out;
}

static NeDsMethodOutput *ds_output_a_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA_P.mNumCol = 23;
  out->mA_P.mNumRow = 23;
  out->mA_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    24);
  out->mA_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    22);
  return out;
}

static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA.mN = 22;
  out->mA.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 22);
  return out;
}

static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB_P.mNumCol = 7;
  out->mB_P.mNumRow = 23;
  out->mB_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    8);
  out->mB_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    1);
  return out;
}

static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB.mN = 1;
  out->mB.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 1);
  return out;
}

static NeDsMethodOutput *ds_output_c_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mC_P.mNumCol = 1;
  out->mC_P.mNumRow = 23;
  out->mC_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    2);
  out->mC_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_c(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mC.mN = 0;
  out->mC.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 0);
  return out;
}

static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mF.mN = 23;
  out->mF.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 23);
  return out;
}

static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMF.mN = 23;
  out->mVMF.mX = (boolean *) allocator->mCallocFcn(allocator, sizeof(boolean),
    23);
  return out;
}

static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF.mN = 23;
  out->mSLF.mX = (boolean *) allocator->mCallocFcn(allocator, sizeof(boolean),
    23);
  return out;
}

static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF0.mN = 23;
  out->mSLF0.mX = (boolean *) allocator->mCallocFcn(allocator, sizeof
    (boolean), 23);
  return out;
}

static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF_P.mNumCol = 23;
  out->mDXF_P.mNumRow = 23;
  out->mDXF_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    24);
  out->mDXF_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    93);
  return out;
}

static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF.mN = 93;
  out->mDXF.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 93);
  return out;
}

static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF_P.mNumCol = 7;
  out->mDUF_P.mNumRow = 23;
  out->mDUF_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    8);
  out->mDUF_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF.mN = 0;
  out->mDUF.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF_P.mNumCol = 1;
  out->mDTF_P.mNumRow = 23;
  out->mDTF_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    2);
  out->mDTF_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    5);
  return out;
}

static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF.mN = 5;
  out->mDTF.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 5);
  return out;
}

static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF_P.mNumCol = 0;
  out->mDDF_P.mNumRow = 23;
  out->mDDF_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    1);
  out->mDDF_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF.mN = 0;
  out->mDDF.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUF_P.mNumCol = 7;
  out->mTDUF_P.mNumRow = 23;
  out->mTDUF_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    8);
  out->mTDUF_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    7);
  return out;
}

static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXF_P.mNumCol = 23;
  out->mTDXF_P.mNumRow = 23;
  out->mTDXF_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    24);
  out->mTDXF_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    115);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_P.mNumCol = 45;
  out->mDNF_P.mNumRow = 23;
  out->mDNF_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    46);
  out->mDNF_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF.mN = 0;
  out->mDNF.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_V_X.mN = 23;
  out->mDNF_V_X.mX = (boolean *) allocator->mCallocFcn(allocator, sizeof
    (boolean), 23);
  return out;
}

static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIC.mN = 23;
  out->mIC.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 23);
  return out;
}

static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR.mN = 2;
  out->mICR.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 2);
  return out;
}

static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IM.mN = 2;
  out->mICR_IM.mX = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    2);
  return out;
}

static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_ID.mN = 2;
  out->mICR_ID.mX = (boolean *) allocator->mCallocFcn(allocator, sizeof
    (boolean), 2);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR.mN = 1;
  out->mDXICR.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 1);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR_P.mNumCol = 23;
  out->mDXICR_P.mNumRow = 2;
  out->mDXICR_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof
    (sint32), 24);
  out->mDXICR_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof
    (sint32), 1);
  return out;
}

static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUICR_P.mNumCol = 7;
  out->mTDUICR_P.mNumRow = 2;
  out->mTDUICR_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof
    (sint32), 8);
  out->mTDUICR_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof
    (sint32), 0);
  return out;
}

static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDUY_P.mNumCol = 7;
  out->mMDUY_P.mNumRow = 6;
  out->mMDUY_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    8);
  out->mMDUY_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDXY_P.mNumCol = 23;
  out->mMDXY_P.mNumRow = 6;
  out->mMDXY_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    24);
  out->mMDXY_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUY_P.mNumCol = 7;
  out->mTDUY_P.mNumRow = 6;
  out->mTDUY_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    8);
  out->mTDUY_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXY_P.mNumCol = 23;
  out->mTDXY_P.mNumRow = 6;
  out->mTDXY_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    24);
  out->mTDXY_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    12);
  return out;
}

static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mY.mN = 6;
  out->mY.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 6);
  return out;
}

static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY_P.mNumCol = 23;
  out->mDXY_P.mNumRow = 6;
  out->mDXY_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    24);
  out->mDXY_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    12);
  return out;
}

static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY.mN = 12;
  out->mDXY.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 12);
  return out;
}

static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY_P.mNumCol = 7;
  out->mDUY_P.mNumRow = 6;
  out->mDUY_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    8);
  out->mDUY_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY.mN = 0;
  out->mDUY.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY_P.mNumCol = 1;
  out->mDTY_P.mNumRow = 6;
  out->mDTY_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    2);
  out->mDTY_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY.mN = 0;
  out->mDTY.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 0);
  return out;
}

static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMODE.mN = 18;
  out->mMODE.mX = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    18);
  return out;
}

static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mZC.mN = 18;
  out->mZC.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 18);
  return out;
}

static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_R.mN = 0;
  out->mCACHE_R.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_I.mN = 0;
  out->mCACHE_I.mX = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_R.mN = 0;
  out->mUPDATE_R.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_I.mN = 0;
  out->mUPDATE_I.mX = (sint32 *) allocator->mCallocFcn(allocator, sizeof
    (sint32), 0);
  return out;
}

static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFO.mN = 0;
  out->mSFO.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 0);
  return out;
}

static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFP.mN = 0;
  out->mSFP.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 0);
  return out;
}

static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_R.mN = 0;
  out->mINIT_R.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_I.mN = 0;
  out->mINIT_I.mX = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOG.mN = 205;
  out->mLOG.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 205);
  return out;
}

static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mASSERT.mN = 14;
  out->mASSERT.mX = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    14);
  return out;
}

static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mPASSERT.mN = 0;
  out->mPASSERT.mX = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_T.mN = 0;
  out->mDEL_T.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V.mN = 0;
  out->mDEL_V.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V0.mN = 0;
  out->mDEL_V0.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_TMAX.mN = 0;
  out->mDEL_TMAX.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT_P.mNumCol = 23;
  out->mDXDELT_P.mNumRow = 0;
  out->mDXDELT_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof
    (sint32), 24);
  out->mDXDELT_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof
    (sint32), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT.mN = 0;
  out->mDXDELT.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT_P.mNumCol = 7;
  out->mDUDELT_P.mNumRow = 0;
  out->mDUDELT_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof
    (sint32), 8);
  out->mDUDELT_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof
    (sint32), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT.mN = 0;
  out->mDUDELT.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT_P.mNumCol = 1;
  out->mDTDELT_P.mNumRow = 0;
  out->mDTDELT_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof
    (sint32), 2);
  out->mDTDELT_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof
    (sint32), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT.mN = 0;
  out->mDTDELT.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_EXP.mN = 205;
  out->mOBS_EXP.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64),
    205);
  return out;
}

static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ACT.mN = 205;
  out->mOBS_ACT.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64),
    205);
  return out;
}

static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ALL.mN = 205;
  out->mOBS_ALL.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64),
    205);
  return out;
}

static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_L.mN = 0;
  out->mDP_L.mX = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_I.mN = 0;
  out->mDP_I.mX = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_J.mN = 0;
  out->mDP_J.mX = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_R.mN = 0;
  out->mDP_R.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX.mN = 0;
  out->mQX.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU.mN = 0;
  out->mQU.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT.mN = 0;
  out->mQT.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 0);
  return out;
}

static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1.mN = 0;
  out->mQ1.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX_P.mNumCol = 23;
  out->mQX_P.mNumRow = 23;
  out->mQX_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    24);
  out->mQX_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU_P.mNumCol = 7;
  out->mQU_P.mNumRow = 23;
  out->mQU_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    8);
  out->mQU_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT_P.mNumCol = 1;
  out->mQT_P.mNumRow = 23;
  out->mQT_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    2);
  out->mQT_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1_P.mNumCol = 1;
  out->mQ1_P.mNumRow = 23;
  out->mQ1_P.mJc = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    2);
  out->mQ1_P.mIr = (sint32 *) allocator->mCallocFcn(allocator, sizeof(sint32),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVAR_TOL.mN = 23;
  out->mVAR_TOL.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64),
    23);
  return out;
}

static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mEQ_TOL.mN = 23;
  out->mEQ_TOL.mX = (float64 *) allocator->mCallocFcn(allocator, sizeof(float64),
    23);
  return out;
}

static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLV.mN = 23;
  out->mLV.mX = (boolean *) allocator->mCallocFcn(allocator, sizeof(boolean),
    23);
  return out;
}

static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLV.mN = 23;
  out->mSLV.mX = (boolean *) allocator->mCallocFcn(allocator, sizeof(boolean),
    23);
  return out;
}

static void release_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  if (--_ds->mRefCnt == 0) {
    _ds->mAlloc.mFreeFcn(&_ds->mAlloc, _ds);
  }
}

static void get_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  ++_ds->mRefCnt;
}

static NeDynamicSystem *diagnostics(const NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds = (_NeDynamicSystem *)ds;
  ne_ds_get_reference(&_ds->mBase);
  return &_ds->mBase;
}

static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out)
{
  (void)ds;
  memcpy(out->mX, in->mX.mX, sizeof(float64)*out->mN);
}

NeDynamicSystem *pe_pmsm_drive_project_5df20146_1_dae_ds(PmAllocator *allocator)
{
  NeDynamicSystem *ds;
  _NeDynamicSystem *_ds;
  static NeDsIoInfo input_info[7];
  static NeDsIoInfo output_info[4];

  /* allocate dynamic system data and extended data */
  _ds = (_NeDynamicSystem *)allocator->mCallocFcn( allocator, sizeof
    (_NeDynamicSystem), 1);
  _ds->mAlloc = *allocator;
  _ds->mRefCnt = 1;
  ds = &_ds->mBase;

  /* setup sizes */
  ds->mNumVariables = 23;
  ds->mNumDiscreteRealVariables = 0;
  ds->mNumDifferentialVariables = 7;
  ds->mNumEquations = 23;
  ds->mNumICResiduals = 2;
  ds->mNumModes = 18;
  ds->mNumMajorModes = 0;
  ds->mNumRealCache = 0;
  ds->mNumIntCache = 0;
  ds->mNumObservables = 185;
  ds->mNumObservableElements = 205;
  ds->mNumZcs = 18;
  ds->mNumAsserts = 14;
  ds->mNumAssertRanges = 14;
  ds->mNumParamAsserts = 0;
  ds->mNumParamAssertRanges = 0;
  ds->mNumRanges = 18;
  ds->mNumEquationRanges = 51;
  ds->mNumFundamentalSamples = 0;
  ds->mNumDelays = 0;
  ds->mNumLogicalParameters = 0;
  ds->mNumIntegerParameters = 0;
  ds->mNumIndexParameters = 0;
  ds->mNumRealParameters = 0;
  ds->mNumLogicalDerivedParameters = 0;
  ds->mNumIntegerDerivedParameters = 0;
  ds->mNumIndexDerivedParameters = 0;
  ds->mNumRealDerivedParameters = 0;
  ds->mIsOutputLinear = TRUE;
  ds->mIsOutputSwitchedLinear = TRUE;

  /* setup ios */
  ds->mNumIo[NE_INPUT_IO_TYPE] = 7;
  input_info[0].mIdentifier = "Ideal_Torque_Source.S";
  input_info[0].mM = 1;
  input_info[0].mN = 1;
  input_info[0].mName = "Ideal_Torque_Source.S";
  input_info[0].mUnit = "N*m";
  input_info[1].mIdentifier = "Three_phase_inverter.IGBT_AH.G";
  input_info[1].mM = 1;
  input_info[1].mN = 1;
  input_info[1].mName = "Three_phase_inverter.IGBT_AH.G";
  input_info[1].mUnit = "1";
  input_info[2].mIdentifier = "Three_phase_inverter.IGBT_AL.G";
  input_info[2].mM = 1;
  input_info[2].mN = 1;
  input_info[2].mName = "Three_phase_inverter.IGBT_AL.G";
  input_info[2].mUnit = "1";
  input_info[3].mIdentifier = "Three_phase_inverter.IGBT_BH.G";
  input_info[3].mM = 1;
  input_info[3].mN = 1;
  input_info[3].mName = "Three_phase_inverter.IGBT_BH.G";
  input_info[3].mUnit = "1";
  input_info[4].mIdentifier = "Three_phase_inverter.IGBT_BL.G";
  input_info[4].mM = 1;
  input_info[4].mN = 1;
  input_info[4].mName = "Three_phase_inverter.IGBT_BL.G";
  input_info[4].mUnit = "1";
  input_info[5].mIdentifier = "Three_phase_inverter.IGBT_CH.G";
  input_info[5].mM = 1;
  input_info[5].mN = 1;
  input_info[5].mName = "Three_phase_inverter.IGBT_CH.G";
  input_info[5].mUnit = "1";
  input_info[6].mIdentifier = "Three_phase_inverter.IGBT_CL.G";
  input_info[6].mM = 1;
  input_info[6].mN = 1;
  input_info[6].mName = "Three_phase_inverter.IGBT_CL.G";
  input_info[6].mUnit = "1";
  ds->mIo[NE_INPUT_IO_TYPE] = input_info;
  ds->mNumIo[NE_OUTPUT_IO_TYPE] = 4;
  output_info[0].mIdentifier = "Current_Sensor.I_output";
  output_info[0].mM = 1;
  output_info[0].mN = 3;
  output_info[0].mName = "Current_Sensor.I_output";
  output_info[0].mUnit = "A";
  output_info[1].mIdentifier = "Encoder.Ideal_Rotational_Motion_Sensor.A";
  output_info[1].mM = 1;
  output_info[1].mN = 1;
  output_info[1].mName = "Encoder.Ideal_Rotational_Motion_Sensor.A";
  output_info[1].mUnit = "rad";
  output_info[2].mIdentifier = "Encoder.Ideal_Rotational_Motion_Sensor.W";
  output_info[2].mM = 1;
  output_info[2].mN = 1;
  output_info[2].mName = "Encoder.Ideal_Rotational_Motion_Sensor.W";
  output_info[2].mUnit = "rad/s";
  output_info[3].mIdentifier = "Encoder.Ideal_Torque_Sensor.T";
  output_info[3].mM = 1;
  output_info[3].mN = 1;
  output_info[3].mName = "Encoder.Ideal_Torque_Sensor.T";
  output_info[3].mUnit = "N*m";
  ds->mIo[NE_OUTPUT_IO_TYPE] = output_info;

  /* setup administration methods */
  ds->mReleaseReference = release_reference;
  ds->mGetReference = get_reference;
  ds->mDiagnosticsDsFcn = diagnostics;
  ds->mExpandFcn = expand;
  ds->mMethods[NE_DS_METHOD_M_P] = ds_m_p;
  ds->mMakeOutput[NE_DS_METHOD_M_P] = ds_output_m_p;
  ds->mMethods[NE_DS_METHOD_M] = ds_m;
  ds->mMakeOutput[NE_DS_METHOD_M] = ds_output_m;
  ds->mMethods[NE_DS_METHOD_VMM] = ds_vmm;
  ds->mMakeOutput[NE_DS_METHOD_VMM] = ds_output_vmm;
  ds->mMethods[NE_DS_METHOD_DXM_P] = ds_dxm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXM_P] = ds_output_dxm_p;
  ds->mMethods[NE_DS_METHOD_DXM] = ds_dxm;
  ds->mMakeOutput[NE_DS_METHOD_DXM] = ds_output_dxm;
  ds->mMethods[NE_DS_METHOD_DUM_P] = ds_dum_p;
  ds->mMakeOutput[NE_DS_METHOD_DUM_P] = ds_output_dum_p;
  ds->mMethods[NE_DS_METHOD_DUM] = ds_dum;
  ds->mMakeOutput[NE_DS_METHOD_DUM] = ds_output_dum;
  ds->mMethods[NE_DS_METHOD_DTM_P] = ds_dtm_p;
  ds->mMakeOutput[NE_DS_METHOD_DTM_P] = ds_output_dtm_p;
  ds->mMethods[NE_DS_METHOD_DTM] = ds_dtm;
  ds->mMakeOutput[NE_DS_METHOD_DTM] = ds_output_dtm;
  ds->mMethods[NE_DS_METHOD_A_P] = pe_pmsm_drive_project_5df20146_1_ds_a_p;
  ds->mMakeOutput[NE_DS_METHOD_A_P] = ds_output_a_p;
  ds->mMethods[NE_DS_METHOD_A] = ds_a;
  ds->mMakeOutput[NE_DS_METHOD_A] = ds_output_a;
  ds->mMethods[NE_DS_METHOD_B_P] = ds_b_p;
  ds->mMakeOutput[NE_DS_METHOD_B_P] = ds_output_b_p;
  ds->mMethods[NE_DS_METHOD_B] = ds_b;
  ds->mMakeOutput[NE_DS_METHOD_B] = ds_output_b;
  ds->mMethods[NE_DS_METHOD_C_P] = ds_c_p;
  ds->mMakeOutput[NE_DS_METHOD_C_P] = ds_output_c_p;
  ds->mMethods[NE_DS_METHOD_C] = ds_c;
  ds->mMakeOutput[NE_DS_METHOD_C] = ds_output_c;
  ds->mMethods[NE_DS_METHOD_F] = pe_pmsm_drive_project_5df20146_1_ds_f;
  ds->mMakeOutput[NE_DS_METHOD_F] = ds_output_f;
  ds->mMethods[NE_DS_METHOD_VMF] = ds_vmf;
  ds->mMakeOutput[NE_DS_METHOD_VMF] = ds_output_vmf;
  ds->mMethods[NE_DS_METHOD_SLF] = ds_slf;
  ds->mMakeOutput[NE_DS_METHOD_SLF] = ds_output_slf;
  ds->mMethods[NE_DS_METHOD_SLF0] = ds_slf0;
  ds->mMakeOutput[NE_DS_METHOD_SLF0] = ds_output_slf0;
  ds->mMethods[NE_DS_METHOD_DXF_P] = pe_pmsm_drive_project_5df20146_1_ds_dxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DXF_P] = ds_output_dxf_p;
  ds->mMethods[NE_DS_METHOD_DXF] = pe_pmsm_drive_project_5df20146_1_ds_dxf;
  ds->mMakeOutput[NE_DS_METHOD_DXF] = ds_output_dxf;
  ds->mMethods[NE_DS_METHOD_DUF_P] = ds_duf_p;
  ds->mMakeOutput[NE_DS_METHOD_DUF_P] = ds_output_duf_p;
  ds->mMethods[NE_DS_METHOD_DUF] = ds_duf;
  ds->mMakeOutput[NE_DS_METHOD_DUF] = ds_output_duf;
  ds->mMethods[NE_DS_METHOD_DTF_P] = ds_dtf_p;
  ds->mMakeOutput[NE_DS_METHOD_DTF_P] = ds_output_dtf_p;
  ds->mMethods[NE_DS_METHOD_DTF] = pe_pmsm_drive_project_5df20146_1_ds_dtf;
  ds->mMakeOutput[NE_DS_METHOD_DTF] = ds_output_dtf;
  ds->mMethods[NE_DS_METHOD_DDF_P] = ds_ddf_p;
  ds->mMakeOutput[NE_DS_METHOD_DDF_P] = ds_output_ddf_p;
  ds->mMethods[NE_DS_METHOD_DDF] = ds_ddf;
  ds->mMakeOutput[NE_DS_METHOD_DDF] = ds_output_ddf;
  ds->mMethods[NE_DS_METHOD_TDUF_P] = ds_tduf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUF_P] = ds_output_tduf_p;
  ds->mMethods[NE_DS_METHOD_TDXF_P] = pe_pmsm_drive_project_5df20146_1_ds_tdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXF_P] = ds_output_tdxf_p;
  ds->mMethods[NE_DS_METHOD_DNF_P] = pe_pmsm_drive_project_5df20146_1_ds_dnf_p;
  ds->mMakeOutput[NE_DS_METHOD_DNF_P] = ds_output_dnf_p;
  ds->mMethods[NE_DS_METHOD_DNF] = ds_dnf;
  ds->mMakeOutput[NE_DS_METHOD_DNF] = ds_output_dnf;
  ds->mMethods[NE_DS_METHOD_DNF_V_X] = ds_dnf_v_x;
  ds->mMakeOutput[NE_DS_METHOD_DNF_V_X] = ds_output_dnf_v_x;
  ds->mMethods[NE_DS_METHOD_IC] = ds_ic;
  ds->mMakeOutput[NE_DS_METHOD_IC] = ds_output_ic;
  ds->mMethods[NE_DS_METHOD_ICR] = ds_icr;
  ds->mMakeOutput[NE_DS_METHOD_ICR] = ds_output_icr;
  ds->mMethods[NE_DS_METHOD_ICR_IM] = ds_icr_im;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IM] = ds_output_icr_im;
  ds->mMethods[NE_DS_METHOD_ICR_ID] = ds_icr_id;
  ds->mMakeOutput[NE_DS_METHOD_ICR_ID] = ds_output_icr_id;
  ds->mMethods[NE_DS_METHOD_DXICR] = ds_dxicr;
  ds->mMakeOutput[NE_DS_METHOD_DXICR] = ds_output_dxicr;
  ds->mMethods[NE_DS_METHOD_DXICR_P] = ds_dxicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICR_P] = ds_output_dxicr_p;
  ds->mMethods[NE_DS_METHOD_TDUICR_P] = ds_tduicr_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUICR_P] = ds_output_tduicr_p;
  ds->mMethods[NE_DS_METHOD_MDUY_P] = ds_mduy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDUY_P] = ds_output_mduy_p;
  ds->mMethods[NE_DS_METHOD_MDXY_P] = ds_mdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDXY_P] = ds_output_mdxy_p;
  ds->mMethods[NE_DS_METHOD_TDUY_P] = ds_tduy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUY_P] = ds_output_tduy_p;
  ds->mMethods[NE_DS_METHOD_TDXY_P] = pe_pmsm_drive_project_5df20146_1_ds_tdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXY_P] = ds_output_tdxy_p;
  ds->mMethods[NE_DS_METHOD_Y] = ds_y;
  ds->mMakeOutput[NE_DS_METHOD_Y] = ds_output_y;
  ds->mMethods[NE_DS_METHOD_DXY_P] = pe_pmsm_drive_project_5df20146_1_ds_dxy_p;
  ds->mMakeOutput[NE_DS_METHOD_DXY_P] = ds_output_dxy_p;
  ds->mMethods[NE_DS_METHOD_DXY] = ds_dxy;
  ds->mMakeOutput[NE_DS_METHOD_DXY] = ds_output_dxy;
  ds->mMethods[NE_DS_METHOD_DUY_P] = ds_duy_p;
  ds->mMakeOutput[NE_DS_METHOD_DUY_P] = ds_output_duy_p;
  ds->mMethods[NE_DS_METHOD_DUY] = ds_duy;
  ds->mMakeOutput[NE_DS_METHOD_DUY] = ds_output_duy;
  ds->mMethods[NE_DS_METHOD_DTY_P] = ds_dty_p;
  ds->mMakeOutput[NE_DS_METHOD_DTY_P] = ds_output_dty_p;
  ds->mMethods[NE_DS_METHOD_DTY] = ds_dty;
  ds->mMakeOutput[NE_DS_METHOD_DTY] = ds_output_dty;
  ds->mMethods[NE_DS_METHOD_MODE] = pe_pmsm_drive_project_5df20146_1_ds_mode;
  ds->mMakeOutput[NE_DS_METHOD_MODE] = ds_output_mode;
  ds->mMethods[NE_DS_METHOD_ZC] = pe_pmsm_drive_project_5df20146_1_ds_zc;
  ds->mMakeOutput[NE_DS_METHOD_ZC] = ds_output_zc;
  ds->mMethods[NE_DS_METHOD_CACHE_R] = ds_cache_r;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_R] = ds_output_cache_r;
  ds->mMethods[NE_DS_METHOD_CACHE_I] = ds_cache_i;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_I] = ds_output_cache_i;
  ds->mMethods[NE_DS_METHOD_UPDATE_R] = ds_update_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_R] = ds_output_update_r;
  ds->mMethods[NE_DS_METHOD_UPDATE_I] = ds_update_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_I] = ds_output_update_i;
  ds->mMethods[NE_DS_METHOD_SFO] = ds_sfo;
  ds->mMakeOutput[NE_DS_METHOD_SFO] = ds_output_sfo;
  ds->mMethods[NE_DS_METHOD_SFP] = ds_sfp;
  ds->mMakeOutput[NE_DS_METHOD_SFP] = ds_output_sfp;
  ds->mMethods[NE_DS_METHOD_INIT_R] = ds_init_r;
  ds->mMakeOutput[NE_DS_METHOD_INIT_R] = ds_output_init_r;
  ds->mMethods[NE_DS_METHOD_INIT_I] = ds_init_i;
  ds->mMakeOutput[NE_DS_METHOD_INIT_I] = ds_output_init_i;
  ds->mMethods[NE_DS_METHOD_LOG] = pe_pmsm_drive_project_5df20146_1_ds_log;
  ds->mMakeOutput[NE_DS_METHOD_LOG] = ds_output_log;
  ds->mMethods[NE_DS_METHOD_ASSERT] = ds_assert;
  ds->mMakeOutput[NE_DS_METHOD_ASSERT] = ds_output_assert;
  ds->mMethods[NE_DS_METHOD_PASSERT] = ds_passert;
  ds->mMakeOutput[NE_DS_METHOD_PASSERT] = ds_output_passert;
  ds->mMethods[NE_DS_METHOD_DEL_T] = ds_del_t;
  ds->mMakeOutput[NE_DS_METHOD_DEL_T] = ds_output_del_t;
  ds->mMethods[NE_DS_METHOD_DEL_V] = ds_del_v;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V] = ds_output_del_v;
  ds->mMethods[NE_DS_METHOD_DEL_V0] = ds_del_v0;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V0] = ds_output_del_v0;
  ds->mMethods[NE_DS_METHOD_DEL_TMAX] = ds_del_tmax;
  ds->mMakeOutput[NE_DS_METHOD_DEL_TMAX] = ds_output_del_tmax;
  ds->mMethods[NE_DS_METHOD_DXDELT_P] = ds_dxdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT_P] = ds_output_dxdelt_p;
  ds->mMethods[NE_DS_METHOD_DXDELT] = ds_dxdelt;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT] = ds_output_dxdelt;
  ds->mMethods[NE_DS_METHOD_DUDELT_P] = ds_dudelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT_P] = ds_output_dudelt_p;
  ds->mMethods[NE_DS_METHOD_DUDELT] = ds_dudelt;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT] = ds_output_dudelt;
  ds->mMethods[NE_DS_METHOD_DTDELT_P] = ds_dtdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT_P] = ds_output_dtdelt_p;
  ds->mMethods[NE_DS_METHOD_DTDELT] = ds_dtdelt;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT] = ds_output_dtdelt;
  ds->mMethods[NE_DS_METHOD_OBS_EXP] =
    pe_pmsm_drive_project_5df20146_1_ds_obs_exp;
  ds->mMakeOutput[NE_DS_METHOD_OBS_EXP] = ds_output_obs_exp;
  ds->mMethods[NE_DS_METHOD_OBS_ACT] =
    pe_pmsm_drive_project_5df20146_1_ds_obs_act;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ACT] = ds_output_obs_act;
  ds->mMethods[NE_DS_METHOD_OBS_ALL] =
    pe_pmsm_drive_project_5df20146_1_ds_obs_all;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ALL] = ds_output_obs_all;
  ds->mMethods[NE_DS_METHOD_DP_L] = ds_dp_l;
  ds->mMakeOutput[NE_DS_METHOD_DP_L] = ds_output_dp_l;
  ds->mMethods[NE_DS_METHOD_DP_I] = ds_dp_i;
  ds->mMakeOutput[NE_DS_METHOD_DP_I] = ds_output_dp_i;
  ds->mMethods[NE_DS_METHOD_DP_J] = ds_dp_j;
  ds->mMakeOutput[NE_DS_METHOD_DP_J] = ds_output_dp_j;
  ds->mMethods[NE_DS_METHOD_DP_R] = ds_dp_r;
  ds->mMakeOutput[NE_DS_METHOD_DP_R] = ds_output_dp_r;
  ds->mMethods[NE_DS_METHOD_QX] = ds_qx;
  ds->mMakeOutput[NE_DS_METHOD_QX] = ds_output_qx;
  ds->mMethods[NE_DS_METHOD_QU] = ds_qu;
  ds->mMakeOutput[NE_DS_METHOD_QU] = ds_output_qu;
  ds->mMethods[NE_DS_METHOD_QT] = ds_qt;
  ds->mMakeOutput[NE_DS_METHOD_QT] = ds_output_qt;
  ds->mMethods[NE_DS_METHOD_Q1] = ds_q1;
  ds->mMakeOutput[NE_DS_METHOD_Q1] = ds_output_q1;
  ds->mMethods[NE_DS_METHOD_QX_P] = ds_qx_p;
  ds->mMakeOutput[NE_DS_METHOD_QX_P] = ds_output_qx_p;
  ds->mMethods[NE_DS_METHOD_QU_P] = ds_qu_p;
  ds->mMakeOutput[NE_DS_METHOD_QU_P] = ds_output_qu_p;
  ds->mMethods[NE_DS_METHOD_QT_P] = ds_qt_p;
  ds->mMakeOutput[NE_DS_METHOD_QT_P] = ds_output_qt_p;
  ds->mMethods[NE_DS_METHOD_Q1_P] = ds_q1_p;
  ds->mMakeOutput[NE_DS_METHOD_Q1_P] = ds_output_q1_p;
  ds->mMethods[NE_DS_METHOD_VAR_TOL] = ds_var_tol;
  ds->mMakeOutput[NE_DS_METHOD_VAR_TOL] = ds_output_var_tol;
  ds->mMethods[NE_DS_METHOD_EQ_TOL] = ds_eq_tol;
  ds->mMakeOutput[NE_DS_METHOD_EQ_TOL] = ds_output_eq_tol;
  ds->mMethods[NE_DS_METHOD_LV] = ds_lv;
  ds->mMakeOutput[NE_DS_METHOD_LV] = ds_output_lv;
  ds->mMethods[NE_DS_METHOD_SLV] = ds_slv;
  ds->mMakeOutput[NE_DS_METHOD_SLV] = ds_output_slv;

  /* equation data */
  ds->mEquationData = s_equation_data;

  /* continuous variable data */
  ds->mVariableData = s_variable_data;

  /* discrete variable data */
  ds->mDiscreteData = s_discrete_data;

  /* observable data */
  ds->mObservableData = s_observable_data;

  /* major mode data */
  ds->mMajorModeData = s_major_mode_data;

  /* zc data */
  ds->mZCData = s_zc_data;

  /* ranges */
  ds->mRanges = s_range;

  /* assert data */
  ds->mAssertData = s_assert_data;

  /* assert ranges */
  ds->mAssertRanges = s_assert_range;

  /* param assert data */
  ds->mParamAssertData = s_param_assert_data;

  /* param assert ranges */
  ds->mParamAssertRanges = s_param_assert_range;

  /* equation ranges */
  ds->mEquationRanges = s_equation_range;

  /* parameters */
  ds->mLogicalParameters = s_logical_parameter_data;
  ds->mIntegerParameters = s_integer_parameter_data;
  ds->mIndexParameters = s_index_parameter_data;
  ds->mRealParameters = s_real_parameter_data;

  /* constant tables */
  return (NeDynamicSystem *)_ds;
}

static sint32 ds_assert (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmIntVector out;
  (void)t1;
  out = t2->mASSERT;
  out.mX[0] = 1;
  out.mX[1] = 1;
  out.mX[2] = 1;
  out.mX[3] = 1;
  out.mX[4] = 1;
  out.mX[5] = 1;
  out.mX[6] = 1;
  out.mX[7] = 1;
  out.mX[8] = 1;
  out.mX[9] = 1;
  out.mX[10] = 1;
  out.mX[11] = 1;
  out.mX[12] = 1;
  out.mX[13] = 1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_passert (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_del_v (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_del_v0 (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_del_tmax (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_del_t (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dxdelt (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dxdelt_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXDELT_P;
  out.mNumCol = 23ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dudelt (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dudelt_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUDELT_P;
  out.mNumCol = 7ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dtdelt (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dtdelt_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTDELT_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_cache_r (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_init_r (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_update_r (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_cache_i (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_init_i (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_update_i (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_sfp (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_sfo (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_duf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_duf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUF_P;
  out.mNumCol = 7ULL;
  out.mNumRow = 23ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dtf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTF_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 23ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 5;
  out.mIr[0] = 4;
  out.mIr[1] = 5;
  out.mIr[2] = 7;
  out.mIr[3] = 8;
  out.mIr[4] = 9;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_a (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mA;
  out.mX[0] = 1.0;
  out.mX[1] = -1.0;
  out.mX[2] = 0.039;
  out.mX[3] = 0.0225166604983954;
  out.mX[4] = 0.0195;
  out.mX[5] = 1.0;
  out.mX[6] = -1.0;
  out.mX[7] = 1.0;
  out.mX[8] = -1.0;
  out.mX[9] = 1.0;
  out.mX[10] = -1.0;
  out.mX[11] = 3.0;
  out.mX[12] = 1.0010000000000002E-9;
  out.mX[13] = 1.0;
  out.mX[14] = -1.0;
  out.mX[15] = 1.0;
  out.mX[16] = -1.0;
  out.mX[17] = -1.0;
  out.mX[18] = -1.0;
  out.mX[19] = -1.0;
  out.mX[20] = -1.0;
  out.mX[21] = 1.0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_b (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mB;
  out.mX[0] = -1.0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_b_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mB_P;
  out.mNumCol = 7ULL;
  out.mNumRow = 23ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 1;
  out.mJc[3] = 1;
  out.mJc[4] = 1;
  out.mJc[5] = 1;
  out.mJc[6] = 1;
  out.mJc[7] = 1;
  out.mIr[0] = 2;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_c (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_c_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mC_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 23ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_tduf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDUF_P;
  out.mNumCol = 7ULL;
  out.mNumRow = 23ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 3;
  out.mJc[4] = 4;
  out.mJc[5] = 5;
  out.mJc[6] = 6;
  out.mJc[7] = 7;
  out.mIr[0] = 2;
  out.mIr[1] = 12;
  out.mIr[2] = 14;
  out.mIr[3] = 16;
  out.mIr[4] = 18;
  out.mIr[5] = 20;
  out.mIr[6] = 22;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_ddf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_ddf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDDF_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 23ULL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_vmf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mVMF;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = true;
  out.mX[5] = true;
  out.mX[6] = false;
  out.mX[7] = true;
  out.mX[8] = true;
  out.mX[9] = true;
  out.mX[10] = true;
  out.mX[11] = true;
  out.mX[12] = true;
  out.mX[13] = true;
  out.mX[14] = true;
  out.mX[15] = true;
  out.mX[16] = true;
  out.mX[17] = true;
  out.mX[18] = true;
  out.mX[19] = true;
  out.mX[20] = true;
  out.mX[21] = true;
  out.mX[22] = true;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_slf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mSLF;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dnf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dnf_v_x (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mDNF_V_X;
  out.mX[0] = true;
  out.mX[1] = true;
  out.mX[2] = true;
  out.mX[3] = true;
  out.mX[4] = true;
  out.mX[5] = true;
  out.mX[6] = true;
  out.mX[7] = true;
  out.mX[8] = true;
  out.mX[9] = true;
  out.mX[10] = true;
  out.mX[11] = true;
  out.mX[12] = true;
  out.mX[13] = true;
  out.mX[14] = true;
  out.mX[15] = true;
  out.mX[16] = true;
  out.mX[17] = true;
  out.mX[18] = true;
  out.mX[19] = true;
  out.mX[20] = true;
  out.mX[21] = true;
  out.mX[22] = true;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_slf0 (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mSLF0;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_ic (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mIC;
  out.mX[0] = 2.52E+7;
  out.mX[1] = 0.0;
  out.mX[2] = 0.0;
  out.mX[3] = 0.0;
  out.mX[4] = 0.0;
  out.mX[5] = 0.0;
  out.mX[6] = 0.0;
  out.mX[7] = 0.0;
  out.mX[8] = 0.0;
  out.mX[9] = 0.0;
  out.mX[10] = 0.0;
  out.mX[11] = 0.0;
  out.mX[12] = 0.0;
  out.mX[13] = 0.0;
  out.mX[14] = 0.0;
  out.mX[15] = 0.0;
  out.mX[16] = 0.0;
  out.mX[17] = 0.0;
  out.mX[18] = 0.0;
  out.mX[19] = 0.0;
  out.mX[20] = 0.0;
  out.mX[21] = 0.0;
  out.mX[22] = 0.0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_icr (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  float64 X_idx_3;
  X_idx_3 = t1->mX.mX[3];
  out = t2->mICR;
  out.mX[0] = 0.0;
  out.mX[1] = X_idx_3;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_icr_im (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmIntVector out;
  (void)t1;
  out = t2->mICR_IM;
  out.mX[0] = 3;
  out.mX[1] = 3;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_icr_id (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mICR_ID;
  out.mX[0] = false;
  out.mX[1] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dxicr (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mDXICR;
  out.mX[0] = 1.0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dxicr_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXICR_P;
  out.mNumCol = 23ULL;
  out.mNumRow = 2ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 1;
  out.mJc[5] = 1;
  out.mJc[6] = 1;
  out.mJc[7] = 1;
  out.mJc[8] = 1;
  out.mJc[9] = 1;
  out.mJc[10] = 1;
  out.mJc[11] = 1;
  out.mJc[12] = 1;
  out.mJc[13] = 1;
  out.mJc[14] = 1;
  out.mJc[15] = 1;
  out.mJc[16] = 1;
  out.mJc[17] = 1;
  out.mJc[18] = 1;
  out.mJc[19] = 1;
  out.mJc[20] = 1;
  out.mJc[21] = 1;
  out.mJc[22] = 1;
  out.mJc[23] = 1;
  out.mIr[0] = 1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_tduicr_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDUICR_P;
  out.mNumCol = 7ULL;
  out.mNumRow = 2ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_m (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mM;
  out.mX[0] = 1.0;
  out.mX[1] = -0.01;
  out.mX[2] = 1.0;
  out.mX[3] = -1.0;
  out.mX[4] = -0.00060000000000000006;
  out.mX[5] = -0.0003464101615137754;
  out.mX[6] = -0.00030000000000000003;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_m_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mM_P;
  out.mNumCol = 23ULL;
  out.mNumRow = 23ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 3;
  out.mJc[4] = 4;
  out.mJc[5] = 5;
  out.mJc[6] = 6;
  out.mJc[7] = 7;
  out.mJc[8] = 7;
  out.mJc[9] = 7;
  out.mJc[10] = 7;
  out.mJc[11] = 7;
  out.mJc[12] = 7;
  out.mJc[13] = 7;
  out.mJc[14] = 7;
  out.mJc[15] = 7;
  out.mJc[16] = 7;
  out.mJc[17] = 7;
  out.mJc[18] = 7;
  out.mJc[19] = 7;
  out.mJc[20] = 7;
  out.mJc[21] = 7;
  out.mJc[22] = 7;
  out.mJc[23] = 7;
  out.mIr[0] = 0;
  out.mIr[1] = 2;
  out.mIr[2] = 1;
  out.mIr[3] = 3;
  out.mIr[4] = 6;
  out.mIr[5] = 4;
  out.mIr[6] = 5;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dxm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dxm_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXM_P;
  out.mNumCol = 23ULL;
  out.mNumRow = 7ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dum (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dum_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUM_P;
  out.mNumCol = 7ULL;
  out.mNumRow = 7ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dtm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dtm_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTM_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 7ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_vmm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mVMM;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dp_l (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dp_i (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dp_j (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dp_r (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_qx (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_qu (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_qt (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_q1 (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_qx_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQX_P;
  out.mNumCol = 23ULL;
  out.mNumRow = 23ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_qu_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQU_P;
  out.mNumCol = 7ULL;
  out.mNumRow = 23ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_qt_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQT_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 23ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_q1_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQ1_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 23ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_var_tol (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mVAR_TOL;
  out.mX[0] = 1.0E-9;
  out.mX[1] = 1.0E-9;
  out.mX[2] = 1.0E-9;
  out.mX[3] = 1.0E-9;
  out.mX[4] = 1.0E-9;
  out.mX[5] = 1.0E-9;
  out.mX[6] = 1.0E-9;
  out.mX[7] = 1.0E-9;
  out.mX[8] = 1.0E-9;
  out.mX[9] = 1.0E-9;
  out.mX[10] = 1.0E-9;
  out.mX[11] = 1.0E-9;
  out.mX[12] = 1.0E-9;
  out.mX[13] = 1.0E-9;
  out.mX[14] = 1.0E-9;
  out.mX[15] = 1.0E-9;
  out.mX[16] = 1.0E-9;
  out.mX[17] = 1.0E-9;
  out.mX[18] = 1.0E-9;
  out.mX[19] = 1.0E-9;
  out.mX[20] = 1.0E-9;
  out.mX[21] = 1.0E-9;
  out.mX[22] = 1.0E-9;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_eq_tol (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mEQ_TOL;
  out.mX[0] = 1.0E-9;
  out.mX[1] = 1.0E-9;
  out.mX[2] = 1.0E-9;
  out.mX[3] = 1.0E-9;
  out.mX[4] = 1.0E-9;
  out.mX[5] = 1.0E-9;
  out.mX[6] = 1.0E-9;
  out.mX[7] = 1.0E-9;
  out.mX[8] = 1.0E-9;
  out.mX[9] = 1.0E-9;
  out.mX[10] = 1.0E-9;
  out.mX[11] = 1.0E-9;
  out.mX[12] = 1.0E-9;
  out.mX[13] = 1.0E-9;
  out.mX[14] = 1.0E-9;
  out.mX[15] = 1.0E-9;
  out.mX[16] = 1.0E-9;
  out.mX[17] = 1.0E-9;
  out.mX[18] = 1.0E-9;
  out.mX[19] = 1.0E-9;
  out.mX[20] = 1.0E-9;
  out.mX[21] = 1.0E-9;
  out.mX[22] = 1.0E-9;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_lv (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mLV;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_slv (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mSLV;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_y (const NeDynamicSystem *sys, const NeDynamicSystemInput *t10,
                     NeDsMethodOutput *t11)
{
  PmRealVector out;
  float64 X_idx_13;
  float64 X_idx_14;
  float64 X_idx_15;
  float64 X_idx_1;
  float64 X_idx_19;
  float64 X_idx_2;
  X_idx_1 = t10->mX.mX[1];
  X_idx_2 = t10->mX.mX[2];
  X_idx_13 = t10->mX.mX[13];
  X_idx_14 = t10->mX.mX[14];
  X_idx_15 = t10->mX.mX[15];
  X_idx_19 = t10->mX.mX[19];
  out = t11->mY;
  out.mX[0] = (X_idx_13 * 1.0010000000000002E-9 + X_idx_14) + X_idx_15;
  out.mX[1] = -X_idx_14;
  out.mX[2] = -X_idx_15;
  out.mX[3] = X_idx_2;
  out.mX[4] = X_idx_1;
  out.mX[5] = X_idx_19;
  (void)sys;
  (void)t11;
  return 0;
}

static sint32 ds_dxy (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mDXY;
  out.mX[0] = 1.0;
  out.mX[1] = 1.0;
  out.mX[2] = 1.0010000000000002E-9;
  out.mX[3] = 0.0;
  out.mX[4] = 0.0;
  out.mX[5] = 1.0;
  out.mX[6] = -1.0;
  out.mX[7] = 0.0;
  out.mX[8] = 1.0;
  out.mX[9] = 0.0;
  out.mX[10] = -1.0;
  out.mX[11] = 1.0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_duy (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_duy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUY_P;
  out.mNumCol = 7ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_mduy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mMDUY_P;
  out.mNumCol = 7ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_mdxy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mMDXY_P;
  out.mNumCol = 23ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_tduy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDUY_P;
  out.mNumCol = 7ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dty (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static sint32 ds_dty_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTY_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 6ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}
