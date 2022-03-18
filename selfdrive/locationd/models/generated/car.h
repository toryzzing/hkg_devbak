#pragma once
#include "rednose/helpers/common_ekf.h"
extern "C" {
void car_update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_err_fun(double *nom_x, double *delta_x, double *out_3068921097841267794);
void car_inv_err_fun(double *nom_x, double *true_x, double *out_2260924742906189502);
void car_H_mod_fun(double *state, double *out_1211019357711778421);
void car_f_fun(double *state, double dt, double *out_3829374024889008437);
void car_F_fun(double *state, double dt, double *out_7542211119404511453);
void car_h_25(double *state, double *unused, double *out_711307668114377651);
void car_H_25(double *state, double *unused, double *out_7881719524153648832);
void car_h_24(double *state, double *unused, double *out_8416725052766602236);
void car_H_24(double *state, double *unused, double *out_5656011740174780270);
void car_h_30(double *state, double *unused, double *out_8474572924935050092);
void car_H_30(double *state, double *unused, double *out_965029182662032077);
void car_h_26(double *state, double *unused, double *out_4970497881113655879);
void car_H_26(double *state, double *unused, double *out_6823521230681846560);
void car_h_27(double *state, double *unused, double *out_4355109850603965072);
void car_H_27(double *state, double *unused, double *out_3139792494462456988);
void car_h_29(double *state, double *unused, double *out_4630303912888470961);
void car_H_29(double *state, double *unused, double *out_454797838347639893);
void car_h_28(double *state, double *unused, double *out_9089960955444740899);
void car_H_28(double *state, double *unused, double *out_8511189835308013021);
void car_h_31(double *state, double *unused, double *out_114344437673465205);
void car_H_31(double *state, double *unused, double *out_7851073562276688404);
void car_predict(double *in_x, double *in_P, double *in_Q, double dt);
void car_set_mass(double x);
void car_set_rotational_inertia(double x);
void car_set_center_to_front(double x);
void car_set_center_to_rear(double x);
void car_set_stiffness_front(double x);
void car_set_stiffness_rear(double x);
}