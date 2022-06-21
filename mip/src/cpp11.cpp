// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// mode.cpp
SEXP mode_mipodinmodel_alloc(cpp11::list r_pars, double time, size_t n_particles, size_t n_threads, cpp11::sexp control, cpp11::sexp seed);
extern "C" SEXP _mipodinmodel85dc80d9_mode_mipodinmodel_alloc(SEXP r_pars, SEXP time, SEXP n_particles, SEXP n_threads, SEXP control, SEXP seed) {
  BEGIN_CPP11
    return cpp11::as_sexp(mode_mipodinmodel_alloc(cpp11::as_cpp<cpp11::decay_t<cpp11::list>>(r_pars), cpp11::as_cpp<cpp11::decay_t<double>>(time), cpp11::as_cpp<cpp11::decay_t<size_t>>(n_particles), cpp11::as_cpp<cpp11::decay_t<size_t>>(n_threads), cpp11::as_cpp<cpp11::decay_t<cpp11::sexp>>(control), cpp11::as_cpp<cpp11::decay_t<cpp11::sexp>>(seed)));
  END_CPP11
}
// mode.cpp
cpp11::sexp mode_mipodinmodel_control(SEXP ptr);
extern "C" SEXP _mipodinmodel85dc80d9_mode_mipodinmodel_control(SEXP ptr) {
  BEGIN_CPP11
    return cpp11::as_sexp(mode_mipodinmodel_control(cpp11::as_cpp<cpp11::decay_t<SEXP>>(ptr)));
  END_CPP11
}
// mode.cpp
double mode_mipodinmodel_time(SEXP ptr);
extern "C" SEXP _mipodinmodel85dc80d9_mode_mipodinmodel_time(SEXP ptr) {
  BEGIN_CPP11
    return cpp11::as_sexp(mode_mipodinmodel_time(cpp11::as_cpp<cpp11::decay_t<SEXP>>(ptr)));
  END_CPP11
}
// mode.cpp
cpp11::sexp mode_mipodinmodel_run(SEXP ptr, double end_time);
extern "C" SEXP _mipodinmodel85dc80d9_mode_mipodinmodel_run(SEXP ptr, SEXP end_time) {
  BEGIN_CPP11
    return cpp11::as_sexp(mode_mipodinmodel_run(cpp11::as_cpp<cpp11::decay_t<SEXP>>(ptr), cpp11::as_cpp<cpp11::decay_t<double>>(end_time)));
  END_CPP11
}
// mode.cpp
cpp11::sexp mode_mipodinmodel_state_full(SEXP ptr);
extern "C" SEXP _mipodinmodel85dc80d9_mode_mipodinmodel_state_full(SEXP ptr) {
  BEGIN_CPP11
    return cpp11::as_sexp(mode_mipodinmodel_state_full(cpp11::as_cpp<cpp11::decay_t<SEXP>>(ptr)));
  END_CPP11
}
// mode.cpp
cpp11::sexp mode_mipodinmodel_state(SEXP ptr, SEXP index);
extern "C" SEXP _mipodinmodel85dc80d9_mode_mipodinmodel_state(SEXP ptr, SEXP index) {
  BEGIN_CPP11
    return cpp11::as_sexp(mode_mipodinmodel_state(cpp11::as_cpp<cpp11::decay_t<SEXP>>(ptr), cpp11::as_cpp<cpp11::decay_t<SEXP>>(index)));
  END_CPP11
}
// mode.cpp
cpp11::sexp mode_mipodinmodel_stats(SEXP ptr);
extern "C" SEXP _mipodinmodel85dc80d9_mode_mipodinmodel_stats(SEXP ptr) {
  BEGIN_CPP11
    return cpp11::as_sexp(mode_mipodinmodel_stats(cpp11::as_cpp<cpp11::decay_t<SEXP>>(ptr)));
  END_CPP11
}
// mode.cpp
cpp11::sexp mode_mipodinmodel_update_state(SEXP ptr, SEXP pars, SEXP time, SEXP state, SEXP index, SEXP set_initial_state, SEXP reset_step_size);
extern "C" SEXP _mipodinmodel85dc80d9_mode_mipodinmodel_update_state(SEXP ptr, SEXP pars, SEXP time, SEXP state, SEXP index, SEXP set_initial_state, SEXP reset_step_size) {
  BEGIN_CPP11
    return cpp11::as_sexp(mode_mipodinmodel_update_state(cpp11::as_cpp<cpp11::decay_t<SEXP>>(ptr), cpp11::as_cpp<cpp11::decay_t<SEXP>>(pars), cpp11::as_cpp<cpp11::decay_t<SEXP>>(time), cpp11::as_cpp<cpp11::decay_t<SEXP>>(state), cpp11::as_cpp<cpp11::decay_t<SEXP>>(index), cpp11::as_cpp<cpp11::decay_t<SEXP>>(set_initial_state), cpp11::as_cpp<cpp11::decay_t<SEXP>>(reset_step_size)));
  END_CPP11
}
// mode.cpp
void mode_mipodinmodel_set_index(SEXP ptr, SEXP index);
extern "C" SEXP _mipodinmodel85dc80d9_mode_mipodinmodel_set_index(SEXP ptr, SEXP index) {
  BEGIN_CPP11
    mode_mipodinmodel_set_index(cpp11::as_cpp<cpp11::decay_t<SEXP>>(ptr), cpp11::as_cpp<cpp11::decay_t<SEXP>>(index));
    return R_NilValue;
  END_CPP11
}
// mode.cpp
void mode_mipodinmodel_set_stochastic_schedule(SEXP ptr, SEXP time);
extern "C" SEXP _mipodinmodel85dc80d9_mode_mipodinmodel_set_stochastic_schedule(SEXP ptr, SEXP time) {
  BEGIN_CPP11
    mode_mipodinmodel_set_stochastic_schedule(cpp11::as_cpp<cpp11::decay_t<SEXP>>(ptr), cpp11::as_cpp<cpp11::decay_t<SEXP>>(time));
    return R_NilValue;
  END_CPP11
}
// mode.cpp
size_t mode_mipodinmodel_n_variables(SEXP ptr);
extern "C" SEXP _mipodinmodel85dc80d9_mode_mipodinmodel_n_variables(SEXP ptr) {
  BEGIN_CPP11
    return cpp11::as_sexp(mode_mipodinmodel_n_variables(cpp11::as_cpp<cpp11::decay_t<SEXP>>(ptr)));
  END_CPP11
}
// mode.cpp
size_t mode_mipodinmodel_n_state_run(SEXP ptr);
extern "C" SEXP _mipodinmodel85dc80d9_mode_mipodinmodel_n_state_run(SEXP ptr) {
  BEGIN_CPP11
    return cpp11::as_sexp(mode_mipodinmodel_n_state_run(cpp11::as_cpp<cpp11::decay_t<SEXP>>(ptr)));
  END_CPP11
}
// mode.cpp
size_t mode_mipodinmodel_n_state_full(SEXP ptr);
extern "C" SEXP _mipodinmodel85dc80d9_mode_mipodinmodel_n_state_full(SEXP ptr) {
  BEGIN_CPP11
    return cpp11::as_sexp(mode_mipodinmodel_n_state_full(cpp11::as_cpp<cpp11::decay_t<SEXP>>(ptr)));
  END_CPP11
}
// mode.cpp
void mode_mipodinmodel_reorder(SEXP ptr, SEXP index);
extern "C" SEXP _mipodinmodel85dc80d9_mode_mipodinmodel_reorder(SEXP ptr, SEXP index) {
  BEGIN_CPP11
    mode_mipodinmodel_reorder(cpp11::as_cpp<cpp11::decay_t<SEXP>>(ptr), cpp11::as_cpp<cpp11::decay_t<SEXP>>(index));
    return R_NilValue;
  END_CPP11
}
// mode.cpp
void mode_mipodinmodel_set_n_threads(SEXP ptr, int n_threads);
extern "C" SEXP _mipodinmodel85dc80d9_mode_mipodinmodel_set_n_threads(SEXP ptr, SEXP n_threads) {
  BEGIN_CPP11
    mode_mipodinmodel_set_n_threads(cpp11::as_cpp<cpp11::decay_t<SEXP>>(ptr), cpp11::as_cpp<cpp11::decay_t<int>>(n_threads));
    return R_NilValue;
  END_CPP11
}
// mode.cpp
bool mode_mipodinmodel_has_openmp();
extern "C" SEXP _mipodinmodel85dc80d9_mode_mipodinmodel_has_openmp() {
  BEGIN_CPP11
    return cpp11::as_sexp(mode_mipodinmodel_has_openmp());
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_mipodinmodel85dc80d9_mode_mipodinmodel_alloc",                   (DL_FUNC) &_mipodinmodel85dc80d9_mode_mipodinmodel_alloc,                   6},
    {"_mipodinmodel85dc80d9_mode_mipodinmodel_control",                 (DL_FUNC) &_mipodinmodel85dc80d9_mode_mipodinmodel_control,                 1},
    {"_mipodinmodel85dc80d9_mode_mipodinmodel_has_openmp",              (DL_FUNC) &_mipodinmodel85dc80d9_mode_mipodinmodel_has_openmp,              0},
    {"_mipodinmodel85dc80d9_mode_mipodinmodel_n_state_full",            (DL_FUNC) &_mipodinmodel85dc80d9_mode_mipodinmodel_n_state_full,            1},
    {"_mipodinmodel85dc80d9_mode_mipodinmodel_n_state_run",             (DL_FUNC) &_mipodinmodel85dc80d9_mode_mipodinmodel_n_state_run,             1},
    {"_mipodinmodel85dc80d9_mode_mipodinmodel_n_variables",             (DL_FUNC) &_mipodinmodel85dc80d9_mode_mipodinmodel_n_variables,             1},
    {"_mipodinmodel85dc80d9_mode_mipodinmodel_reorder",                 (DL_FUNC) &_mipodinmodel85dc80d9_mode_mipodinmodel_reorder,                 2},
    {"_mipodinmodel85dc80d9_mode_mipodinmodel_run",                     (DL_FUNC) &_mipodinmodel85dc80d9_mode_mipodinmodel_run,                     2},
    {"_mipodinmodel85dc80d9_mode_mipodinmodel_set_index",               (DL_FUNC) &_mipodinmodel85dc80d9_mode_mipodinmodel_set_index,               2},
    {"_mipodinmodel85dc80d9_mode_mipodinmodel_set_n_threads",           (DL_FUNC) &_mipodinmodel85dc80d9_mode_mipodinmodel_set_n_threads,           2},
    {"_mipodinmodel85dc80d9_mode_mipodinmodel_set_stochastic_schedule", (DL_FUNC) &_mipodinmodel85dc80d9_mode_mipodinmodel_set_stochastic_schedule, 2},
    {"_mipodinmodel85dc80d9_mode_mipodinmodel_state",                   (DL_FUNC) &_mipodinmodel85dc80d9_mode_mipodinmodel_state,                   2},
    {"_mipodinmodel85dc80d9_mode_mipodinmodel_state_full",              (DL_FUNC) &_mipodinmodel85dc80d9_mode_mipodinmodel_state_full,              1},
    {"_mipodinmodel85dc80d9_mode_mipodinmodel_stats",                   (DL_FUNC) &_mipodinmodel85dc80d9_mode_mipodinmodel_stats,                   1},
    {"_mipodinmodel85dc80d9_mode_mipodinmodel_time",                    (DL_FUNC) &_mipodinmodel85dc80d9_mode_mipodinmodel_time,                    1},
    {"_mipodinmodel85dc80d9_mode_mipodinmodel_update_state",            (DL_FUNC) &_mipodinmodel85dc80d9_mode_mipodinmodel_update_state,            7},
    {NULL, NULL, 0}
};
}

extern "C" attribute_visible void R_init_mipodinmodel85dc80d9(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}