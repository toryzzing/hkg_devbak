#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void live_update_4(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_9(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_10(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_12(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_32(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_13(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_14(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_update_33(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void live_H(double *in_vec, double *out_1992932891692193329);
void live_err_fun(double *nom_x, double *delta_x, double *out_5254757188324704394);
void live_inv_err_fun(double *nom_x, double *true_x, double *out_3216714288063936956);
void live_H_mod_fun(double *state, double *out_665377565114798531);
void live_f_fun(double *state, double dt, double *out_2126386552435266220);
void live_F_fun(double *state, double dt, double *out_4060471911063817515);
void live_h_4(double *state, double *unused, double *out_1697865040707641595);
void live_H_4(double *state, double *unused, double *out_6315399106273577045);
void live_h_9(double *state, double *unused, double *out_1005165510797686365);
void live_H_9(double *state, double *unused, double *out_971819828990870425);
void live_h_10(double *state, double *unused, double *out_5964441570880773779);
void live_H_10(double *state, double *unused, double *out_6457383287413950953);
void live_h_12(double *state, double *unused, double *out_4682779370410105727);
void live_H_12(double *state, double *unused, double *out_1295942698241615250);
void live_h_31(double *state, double *unused, double *out_6652040338516050048);
void live_H_31(double *state, double *unused, double *out_2948737048900969669);
void live_h_32(double *state, double *unused, double *out_2586059111210238650);
void live_H_32(double *state, double *unused, double *out_2817572263960229200);
void live_h_13(double *state, double *unused, double *out_5728226886618286963);
void live_H_13(double *state, double *unused, double *out_4015371617209854936);
void live_h_14(double *state, double *unused, double *out_1005165510797686365);
void live_H_14(double *state, double *unused, double *out_971819828990870425);
void live_h_33(double *state, double *unused, double *out_8639179947637195652);
void live_H_33(double *state, double *unused, double *out_201819955737887935);
void live_predict(double *in_x, double *in_P, double *in_Q, double dt);
}